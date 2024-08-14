#include <iostream>
using namespace std;

class Shape
{
    // automatic gaa abstract class gaa maaripoddhi
    virtual void draw() = 0;
    // template for other classes
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Circle" << endl;
    }
};
int main()
{

    Circle c1;
    c1.draw();

    return 0;
}