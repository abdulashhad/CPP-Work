/*Create a class Person which includes: character array name of size 64, age in numeric, character array address of size 64, and total salary in real numbers (divide salary in different components, if required). Make an array of objects of class Person of size 10.
Write inline function that obtains the youngest and eldest age of a person from a class person using arrays. */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class Person
{
	int age;
   char address[64],name[64];
   float salary;

   public:
            void input()
            {
            	cout<<"\nEnter the name, age, address, salary ";
               cin.getline(name,64);
               cin>>age;
              	cin.getline(address,64,'.');
               cin>>salary;
             }

             void output()
             {
             	cout<<"\nName is: "<<name<<"\nAge is: "<<age<<"\nAddress is: "<<address<<"Salary is: "<<salary;
             }

				/*inline void youngeldest()
            {
                for(int i=0;i<10;i++)
                {
                	if(age[i]>age[i+1])
                  { cout<<"Eldest is: "<<age[i];}

                  if(age[i]<age[i+1])
                  {cout<<"Youngest is: "<<age[i];}
                }
             }*/
};

void main()
{
	Person P[3];
   for(int i=0;i<3;i++)
   	{
      	P[i].input();
      	P[i].output();
      	//P[i].youngeldest();
      }

}




