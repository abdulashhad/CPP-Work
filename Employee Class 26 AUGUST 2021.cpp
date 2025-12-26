/*Create a class Employee with appropriate data members and functions. The class should also have a data member document_verified and function verification. This function should initialize the value of verification to “completed and genuine”.
 Create appropriate objects and call the functions. Make use of public and private access specifier wherever required.*/
#include<iostream.h>
#include<conio.h>
#include<string.h>

class employee
{
	char name,documnet_verified[40];
	int emp_no;
   float salary;

   public:
   			employee(){strcpy(documnet_verified,"Completed And Genuine") ;}

            void input(){
            cout<<"Enter name, Employee Number, Salary: ";
            cin>>name>>emp_no>>salary;}


            void output(){
            cout<<"\nName: "<<name<<"\nEmployee Number: "<<emp_no<<"\nSalary: "<<salary<<"\nDocument Details:"<<documnet_verified;}
};

void main()
{
	employee emp1,emp2;
   emp1.input();
   emp2.input();
   emp1.output();
   emp2.output();
getch();
}               

