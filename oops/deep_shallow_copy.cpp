#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        double* cgpaPtr;

        Student(string name ,double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = 8.9;
        }

        Student(Student& obj){
            this->name = obj.name;
            cgpaPtr = new double;
            *(cgpaPtr) = *obj.cgpaPtr;
            
        }

        void getInfo(){
            cout<<"Name : "<<name<<endl;
            cout<<"cgpa : "<<*cgpaPtr<<endl;
        }
};

int main(){

        Student s1("Yaswanth",9.706);
        cout<<"\nS1 printing : \n"; 
        s1.getInfo();
        Student s2(s1);
        s2.name = "neha";
       *(s2.cgpaPtr) = 9.2;
        cout<<"\nS2 printing : \n"; 
        s2.getInfo();
        cout<<"\nS1 printing : \n"; 
        s1.getInfo();



return 0;

}