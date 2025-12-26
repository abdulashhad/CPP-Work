#include<iostream.h>
#include<conio.h>

class bank_account
{
	char name;
   int acc_no,cust_id,opening_balance;

   public:
   			void input()
            {cout<<"Enter the name, account no. and customer ID ";
             cin>>name>>acc_no>>cust_id;
             }

             bank_account(){ opening_balance=10000;}

             void output()
            {cout<<"\nName: "<<name<<"\nAccount no.: "<<acc_no<<"\nCustomer ID: "<<cust_id<<"\nOpening Balance: "<<opening_balance;
             }
};

void main()
{
	bank_account cust1,cust2;
   cust1.input();
   cust2.input();
   cust1.output();
   cust2.output();
getch();   }

