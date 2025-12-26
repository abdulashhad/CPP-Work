#include<iostream.h>
#include<conio.h>

class bank_account
{
	long int customer_id,account_no;
   char customer_name[100];
   float balance;
   void deposit();
   void withdraw();
   void input()
   {gets(name);cin>>customer_id>>account_no>>balance;}

};


void main()
{
	bank_account customer1,customer2,customer3;

   customer1.input();
}
