#include<iostream>
using namespace std;

class Student{

    public :

    string  name ;

    Student(){
        cout<<"Non-parameterised"<<endl;
    }

    Student(string name){
        cout<<"parameterised"<<endl;
        cout<<this->name<<endl;

    }
};
int main(){

        


return 0;

}