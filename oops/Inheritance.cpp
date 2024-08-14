#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }

    // Person(){
    //     cout<<"Parent constructor"<<endl;
    // }
};

class Student : public Person
{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age)
    {
        cout << "Child constructor" << endl;
        this->rollno = rollno;
        this->age = age;
        this->name = name;
    }

    void getInfo()
    {
        cout << "Name " << name << endl;
        cout << "Age " << age << endl;
        cout << "Rollno " << rollno << endl;
    }
};
int main()
{

    Student s1("yaswanth", 25, 565656);
    s1.getInfo();

    return 0;
}