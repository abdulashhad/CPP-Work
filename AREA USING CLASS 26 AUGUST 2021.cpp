/*Define a class Shape whose attributes are radius, length and width calculate the perimeter of the rectangle and circle.
 	Use constructors.*/
#include<iostream.h>
#include<conio.h>


class shape
{
	int r,l,b;
   float PI;
   public:
            shape(){PI=3.14;}

   			void input()
            {
            	cout<<"Enter the radius of circle and length and breadth of rectangle ";
            	cin>>r>>l>>b;
            }


   			void output()
            {
            	cout<<"\nArea of circle is: "<< PI*r*r;
					cout<<"\nPerimeter of circle is: "<< 2*PI*r;
               cout<<"\nPerimeter of Rectangle is: "<< 2*(l+b);
            	cout<<"\nArea of Rectange is: "<< l*b;

            }
};

void main()
{
	shape s1;
   s1.input();
   s1.output();
getch();
}
