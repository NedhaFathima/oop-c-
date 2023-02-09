#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
        int age,phone_number,salary;
        string name,address;
 
   Employee()
   {
   cout << "Enter employee name: ";
   cin >> name;

   cout << "Enter employee age: ";
   std::cin >> age;

   cout << "Enter employee phone number: ";
   cin >> phone_number;

   cout << "Enter employee address: ";
   cin >> address;

   cout << "Enter employee salary: ";
   cin >> salary;
 }

 
  void print() {
    cout << "Name: " << name <<endl;
    cout << "Age: " << age << endl;
    cout << "Phone number: " << phone_number <<endl;
    cout << "Address: " << address << endl;
    cout << "Salary: " << salary <<endl;
  }

};

class Officer : public Employee {
public:
         string specialization, department;

         Officer()
         {
           cout << "Enter officer specialization: ";
           cin >> specialization;
         }

         void print()
         {
             Employee::print();
             cout << "Specialization: " << specialization << endl;
         }
    };

class Manager : public Employee {
public:
        string specialization, department;

        Manager()
        {
   cout << "Enter manager department: ";
   cin >> department;
        }
        void print()
        {
           Employee::print();
           cout << "Department: " << department << endl;
        }

};

int main()
{
 
  Officer officer;
  officer.print();

  Manager manager;
  manager.print();

  return 0;
}
