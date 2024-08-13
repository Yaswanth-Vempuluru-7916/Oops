#include<bits/stdc++.h>
using namespace std;

class Teacher{
    double salary;
public:
    //! properties //? attributes
    string name;
    string dept;
    string subject;
    

    //methods //member functions

    void changeDept(string newDept){
        dept = newDept;
    }
//Setter --> Private values set
    void setSalary(double s){
        this->salary=s;
    }
//Getter
    double getSalary(){
        return salary;
    }
};

class Student{
    public : 
    string name;

};
int main(){

    Teacher t1;
    t1.name="Yaswanth";
    t1.subject="C++";
    t1.dept="Information Science";
    t1.setSalary(25000);

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.dept<<endl;
    cout<<  t1.getSalary()<<endl;

    
}