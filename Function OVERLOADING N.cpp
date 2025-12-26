#include<iostream.h>
#include<conio.h>

class Cal
{
    public:
    			static int add(int a,int b)
            {
        			return a + b;
    			}
				static int add(int a, int b, int c)
    			{
        			return a + b + c;
    			}
};

void main()
{
    Cal C;
    cout<<C.add(10, 20)<<endl;
    cout<<C.add(12, 20, 23);
getch();
}
