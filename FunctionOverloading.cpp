#include<iostream.h>
#include<conio.h>

class printData
{
   	public:
      void print(int i)
      {
        	cout << "Printing int: " << i << endl;
      }

      void print(double  f)
      {
        cout << "Printing float: " << f << endl;
      }

      void print(char* c)
      {
        cout << "Printing character: " << c << endl;
      }
};

void main()
 {
   printData pd;

   pd.print(5);

   pd.print(500.263);

   pd.print("Hello C++");

getch();

}