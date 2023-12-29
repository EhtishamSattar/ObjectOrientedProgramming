#include <iostream>
#include <cstring>
using namespace std;

struct Check {
    int a;
    string b;
};
struct Point {
    int x, y;
};
struct Circle {
    Point center;
    double radius;
    double area()
    {
        return 3.14 * radius * radius;
    }
};
int fooValue(int a)
{
    return a * a;
}
void fooReference(int& a)
{
    a *= a;
}
void foo(int* a)
{
    *a = *a * *a;
}

int main()
{
    cout << "\t\tThis is a project to practice Object Oriented Programming :)\n";
    Check check = { 16,"Ehtisham" };
    cout << check.b << endl;
    int a = 5;
    fooValue(a);
    cout << "Value of a ( passing by value )" << a << endl;
    fooReference(a);
    cout << "Value of a ( passing By Reference ) " << a << endl; 
    int* p = new int;
    int* p2 = new int;
    *p = 10;
    *p2 = 3;
    fooReference(*p);
    cout << *p << endl;
    foo(p2);
    cout << *p2 << endl;

    //Initialization 1
    Circle circle = { {1,2},3.11 };
    cout << circle.center.x <<"\t"<<circle.center.y << endl;
    //Initialization 2
    Circle circle2;
   /* cout << "Enter value of x for point of Cirlce ";
    cin >> circle2.center.x;
    cout << "Enter value of y for point of Cirlce ";
    cin >> circle2.center.y;
    cout << "Enter radius of Circle ";
    cin >> circle.radius;
    cout << "Area of circle2 is " << circle.area()<<endl;*/


    // Character Strings - cstrings
    char name[51];
    cout << "Enter name ";
    cin.getline(name, 51);
    cout << "Now name with spaces in between"<<name<<endl;
    


    delete p;
    delete p2;
    p = nullptr;
    p2 = nullptr;
;

}


