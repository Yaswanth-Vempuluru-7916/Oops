#include <iostream>
using namespace std;
class A{
    public :
    int x=0;

    void increx(){
        x++;
        cout<<"x : "<<x<<endl;
    }

    A(){
        cout<<"Construct"<<endl;
    }
   ~ A(){
        cout<<"Destruct"<<endl;
    }
};
void fun()
{
   static int x = 0;
    cout << "x value is : " << x << endl;
    x++;
}

int main()
{
    if(true){
        static A c;

    }
    fun();
    fun();
    fun();

    // A a,b;
    // a.x =100;
    // a.increx();
    // b.x =500;
    // b.increx();



    return 0;
}