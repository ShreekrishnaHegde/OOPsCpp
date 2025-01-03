#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

// Base class: User
class User {
protected:
    string name;
    string contact;
public:
    virtual void enterDetails() = 0; // Pure virtual function
};

// Derived class: Rider
class Rider : public User {
private:
    string pickupLocation;
    string destination;
    float wallet = 100.0; // Wallet initialized to 100
    int otp;              // Random OTP
public:
    Rider() {
        srand(time(0));            // Initialize random seed
        otp = rand() % 9000 + 1000; // Generate a 4-digit OTP
    }

    void enterDetails() override {
        cout << "\n--- Rider Interface ---\n";
        cout << "Enter Rider Name: ";
        cin >> name;
        cout << "Enter Contact Number: ";
        cin >> contact;
        cout << "Enter Pickup Location: ";
        cin >> pickupLocation;
        cout << "Enter Destination: ";
        cin >> destination;
    }

    void displayWalletBalance() {
        cout << "\n--- Wallet Details ---\n";
        cout << "Your current wallet balance: Rs " << wallet << "\n";
    }

    int getOTP() { return otp; }

    void displayDriverDetails(const string& driverName, const string& vehicle) {
        cout << "\n--- Ride Started ---\n";
        cout << "Driver Details:\n";
        cout << "Driver Name: " << driverName << "\n";
        cout << "Vehicle: " << vehicle << "\n";
        cout << "Pickup Location: " << pickupLocation << "\n";
        cout << "Destination: " << destination << "\n";
    }

    void completeRide() {
        int rating;
        wallet -= 60; // Deduct ride fare
        cout << "\n--- Ride Completed ---\n";
        cout << "Ride Fare: Rs 60\n";
        cout << "Remaining Wallet Balance: Rs " << wallet << "\n";
        cout << "Add Ratings (1 to 5): ";
        cin >> rating;
        cout << "You rated " << rating << " stars for the ride.\n";
        cout << "Thank You!\n";
    }

    string getPickupLocation() { return pickupLocation; }
    string getDestination() { return destination; }
    string getName() { return name; }
};

// Derived class: Driver
class Driver : public User {
private:
    string vehicleDetails;
public:
    void enterDetails() override {
        cout << "\n--- Driver Interface ---\n";
        cout << "Enter Driver Name: ";
        cin >> name;
        cout << "Enter Contact Number: ";
        cin >> contact;
        cout << "Enter Vehicle Details: ";
        cin >> vehicleDetails;
    }

    void displayRiderDetails(const string& riderName, const string& pickup, const string& destination) {
        cout << "\n--- Ride Started ---\n";
        cout << "Rider Details:\n";
        cout << "Rider Name: " << riderName << "\n";
        cout << "Pickup Location: " << pickup << "\n";
        cout << "Destination: " << destination << "\n";
    }

    string getVehicleDetails() { return vehicleDetails; }
    string getName() { return name; }
};

// Function to simulate searching for a new driver
void findDriver(Rider& rider) {
    bool rideAccepted = false;

    while (!rideAccepted) {
        Driver driver;
        driver.enterDetails();

        cout << "\nDriver receives a ride request from " << rider.getPickupLocation()
             << " to " << rider.getDestination() << ".\n";
        cout << "Does the driver accept the ride? (yes/no): ";
        string response;
        cin >> response;

        if (response == "yes") {
            rideAccepted = true;

            // Display OTP to rider
            cout << "\nRide Confirmed!\n";
            cout << "Rider's OTP: " << rider.getOTP() << "\n";

            // Driver enters OTP
            cout << "\nEnter the Rider's OTP to start the ride: ";
            int enteredOTP;
            cin >> enteredOTP;

            if (enteredOTP == rider.getOTP()) {
                // OTP matched, start ride
                driver.displayRiderDetails(rider.getName(), rider.getPickupLocation(), rider.getDestination());
                rider.displayDriverDetails(driver.getName(), driver.getVehicleDetails());

                // Simulate ride completion
                cout << "\n--- Simulating Ride Completion ---\n";
                rider.completeRide();
            } else {
                // OTP mismatch
                cout << "\nIncorrect OTP. Ride cannot start.\n";
                rideAccepted = false;
                cout << "Searching for another driver...\n";
            }
        } else {
            // Driver rejects the ride
            cout << "\nDriver has rejected the ride. Searching for another driver...\n";
        }
    }
}

int main() {
    Rider rider;

    // Rider enters details
    rider.enterDetails();

    // Display wallet balance
    rider.displayWalletBalance();

    // Search for a driver
    findDriver(rider);

    return 0;
}