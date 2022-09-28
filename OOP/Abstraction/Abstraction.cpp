// Abstraction.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Abstraction is the simplification of complex processes/functionality.

#include <iostream>
using namespace std;


class AbstractEmployee {

   virtual void askForPromotion()=0; //This ensures that any class using this must contain an implementation of this function.

};

class Employee:AbstractEmployee {

private:
    string name;
    string company;
    int age;

public:
    Employee(string name, string company, int age) {

        this->name = name;
        this->age = age;
        this->company = company;

    }

    void introduceYourself(Employee emp) {

        cout << "My name is " << emp.name << "." << endl;
        cout << "I am " << emp.age << " years old." << endl;
        cout << "I work at " << emp.company << "." << endl;
        cout << "Nice to meet you!" << endl;

    }

    void setName(string name) {

        this->name = name;
    }

    void setAge(int age) {

        this->age = age;
    }

    void setCompany(string company) {

        this->company = company;
    }

    string getName() {

        return name;
    }

    int getAge() {

        return age;
    }

    string getCompany() {

        return company;
    }

    void askForPromotion() {

        // Implement the complex function.
    }

    // Note: protected will not work when trying to access attributes from the same file (just like private).

};

int main() {

    Employee emp1("Tofarati Farinu", "Halogen Group", 21);


    emp1.introduceYourself(emp1);

}