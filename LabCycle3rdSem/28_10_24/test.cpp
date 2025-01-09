#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

// Base class for a person
class Person {
protected:
    string name;

public:
    Person(string name) : name(name) {}

    string getName() const {
        return name;
    }
};

// Class to handle student registrations
class Student : public Person {
public:
    Student(string name) : Person(name) {}
    void registerEvent(class Club &club, int eventId);
};

// Base class for events
class Event {
protected:
    int eventId;
    string eventName;
    string eventDate;
    int registrations;
    vector<string> registeredStudents;

public:
    Event(int id, string name, string date) : eventId(id), eventName(name), eventDate(date), registrations(0) {}

    virtual void displayEventDetails() const {
        cout << eventId << ". " << eventName << " (" << eventDate << ") - " << registrations << " registrations" << endl;
    }
    void registerStudent(const string &studentName) {
        registrations++;
        registeredStudents.push_back(studentName);
    }
    int getEventId() const {
        return eventId;
    }
    string getEventName() const {
        return eventName;
    }
    vector<string> getRegisteredStudents() const {
        return registeredStudents;
    }
};

// Class to handle club events
class ClubEvent : public Event {
public:
    ClubEvent(int id, string name, string date) : Event(id, name, date) {}

    void displayEventDetails() const override {
        cout << "Club Event - ";
        Event::displayEventDetails();
    }
};

// Class to handle club information
class Club {
private:
    string clubName;
    vector<ClubEvent> events;
    int eventCounter;

public:
    Club() : clubName(""), eventCounter(0) {}  // Default constructor
    Club(string name) : clubName(name), eventCounter(0) {}  // Parameterized constructor

    void postEvent(string eventName, string eventDate) {
        events.push_back(ClubEvent(++eventCounter, eventName, eventDate));
        cout << "Event " << eventName << " posted by " << clubName << " on " << eventDate << endl;
    }

    void showEvents() const {
        for (const auto &event : events) {
            event.displayEventDetails();
        }
    }

    void viewRegistrations(int eventId) const {
        for (const auto &event : events) {
            if (event.getEventId() == eventId) {
                cout << "Event: " << event.getEventName() << "\nRegistered Students:\n";
                for (const auto &student : event.getRegisteredStudents()) {
                    cout << "- " << student << endl;
                }
                return;
            }
        }
        cout << "Invalid event ID." << endl;
    }

    void registerStudentForEvent(const Student &student, int eventId) {
        for (auto &event : events) {
            if (event.getEventId() == eventId) {
                event.registerStudent(student.getName());
                cout << student.getName() << " registered for " << event.getEventName() << endl;
                return;
            }
        }
        cout << "Invalid event ID." << endl;
    }

    const vector<ClubEvent>& getEvents() const {
        return events;
    }
};

void Student::registerEvent(Club &club, int eventId) {
    club.registerStudentForEvent(*this, eventId);
}

void showMainMenu() {
    cout << "\nMain Menu:\n";
    cout << "1. Club Menu\n";
    cout << "2. Student Menu\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
}

void showClubMenu(){
    cout << "\nClub Menu:\n";
    cout << "1. Post Event\n";
    cout << "2. Show Events\n";
    cout << "3. View Event Registrations\n";
    cout << "4. Back to Main Menu\n";
    cout << "Enter your choice: ";
}

void showStudentMenu() {
    cout << "\nStudent Menu:\n";
    cout << "1. Register for Event\n";
    cout << "2. Back to Main Menu\n";
    cout << "Enter your choice: ";
}

int main() {
    map<string, Club> clubs;
    vector<Student> students;
    int mainChoice, clubChoice, studentChoice;

    while (true) {
        showMainMenu();
        cin >> mainChoice;

        if (mainChoice == 1) {
            string clubName;
            cin.ignore();
            cout << "Enter club name: ";
            getline(cin, clubName);

            if (clubs.find(clubName) == clubs.end()) {
                clubs[clubName] = Club(clubName);
            }

            while (true) {
                showClubMenu();
                cin >> clubChoice;

                if (clubChoice == 1) {
                    string eventName, eventDate;
                    cin.ignore();
                    cout << "Enter event name: ";
                    getline(cin, eventName);
                    cout << "Enter event date (YYYY-MM-DD): ";
                    getline(cin, eventDate);
                    clubs[clubName].postEvent(eventName, eventDate);
                } else if (clubChoice == 2) {
                    clubs[clubName].showEvents();
                } else if (clubChoice == 3) {
                    int eventId;
                    cout << "Enter event ID to view registrations: ";
                    cin >> eventId;
                    clubs[clubName].viewRegistrations(eventId);
                } else if (clubChoice == 4) {
                    break;
                } else {
                    cout << "Invalid choice. Please try again.\n";
                }
            }
        } else if (mainChoice == 2) {
            while (true) {
                showStudentMenu();
                cin >> studentChoice;

                if (studentChoice == 1) {
                    string studentName;
                    int eventId;
                    cin.ignore();
                    cout << "Enter your name: ";
                    getline(cin, studentName);

                    cout << "Available events:\n";
                    for (const auto& club : clubs) {
                        cout << "Club: " << club.first << endl;
                        club.second.showEvents();
                    }

                    cout << "Enter the event ID to register: ";
                    cin >> eventId;
                    
                    bool registered = false;
                    for (auto& club : clubs) {
                        for (const auto& event : club.second.getEvents()) {
                            if (event.getEventId() == eventId) {
                                students.push_back(Student(studentName));
                                students.back().registerEvent(club.second, eventId);
                                registered = true;
                                break;
                            }
                        }
                        if (registered) break;
                    }
                    
                    if (!registered) {
                        cout << "Event not found.\n";
                    }
                } else if (studentChoice == 2) {
                    break;
                } else {
                    cout << "Invalid choice. Please try again.\n";
                }
            }
        } else if (mainChoice == 3) {
            string confirm;
            cout << "Are you sure you want to exit? (yes/no): ";
            cin >> confirm;
            if (confirm == "yes" || confirm == "y") {
                break;
            }
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
