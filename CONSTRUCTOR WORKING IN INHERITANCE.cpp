#include<iostream.h>
#include<conio.h>
class A
{
public:
    A()
    {
        cout<<"Inside A";
    }
    A(int c)
    {
        cout<<c;
    }
};
class B: public A
{
public:
    B():A()
    {
        cout<<"Inside B";
    }
    B(int d): A(d)
    {
        cout<<d;
    }
};
int main()
{
     A a1;
     cout<<"class B";
     B(b);
getch();
}