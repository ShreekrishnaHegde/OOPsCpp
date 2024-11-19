#include <iostream>
using namespace std;

class Employee{
    public: 
            string name;
            int id;
    //Cannot be accessed direclty form outside the class
    private:
            int salary;
};
int main(){
    Employee employee1;
    cout<<"Enter employee name: ";
    cin>>employee1.name;
    cout<<"Enter emplyee id: ";
    cin>>employee1.id;
    cout<<"Emplyee Name: "<<employee1.name<<endl;
    cout<<"Employee Id: "<<employee1.id<<endl;

    return 0;
}