                         #include<iostream.h>
#include<conio.h>

struct date
{
	int day;
   	int month;
   	int year;
};

int find_days(date a,date b);

void main()
{
	date a,b;

   	cout<<"Enter first date (day,month): ";
   	cin>>a.day>>a.month>>a.year;
   	cout<<"Enter second date (day,month): ";
   	cin>>b.day>>b.month>>b.year;
   	clrscr();

   	cout<<"Date1: "<<a.day<<':'<<a.month<<':'<<a.year<<endl;
   	cout<<"Date2: "<<b.day<<':'<<b.month<<':'<<b.year<<endl;
   	cout<<find_days(a,b);
   	getch();
}

int find_days(date a,date b)
{
int days = 0;

   	for(int i=a.year;i<b.year;i++)
{
   		if(i%4==0)
      			days+=366;
      		else
      			days+=365;
   	}

   	if((a.month <= b.month))
   	{
		for(int i=a.month;i<b.month;i++)
   		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
      				days+=31;
      			else if(i==2 && b.month%4==0)
      				days+=29;
      			else if(i==2 && b.month%4!=0)
      				days+=28;
      			else
      				days+=30;
   		}
		days-=a.day;
   		days+=b.day;
   	}

   	if(a.month > b.month)
   	{
   		for(int i=a.month;i<13;i++)
   		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
      				days+=31;
      			else if(i==2 && a.month%4==0)
      				days+=29;
      			else if(i==2 && a.month%4!=0)
      				days+=28;
      			else
      				days+=30;
   		}

      		for(int i=1;i<b.month;i++)
   		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
      				days+=31;
      			else if(i==2 && b.month%4==0)
      				days+=29;
      			else if(i==2 && b.month%4!=0)
      				days+=28;
      			else
      				days+=30;
   		}
		days-=a.day;
   		days+=b.day;
      		days-=365;
	}
return days>0 ? days : -days ;
}
