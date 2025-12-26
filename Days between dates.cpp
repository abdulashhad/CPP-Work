#include<iostream.h>
#include<conio.h>


int isleap(int y)
{
  if(y%400==0)
  {
  		if(y%4==0)
      {
 		 if(y%100==0)
  return true;
       }
  else
  return false;
  }
}
void main()
{
   int dd1,mm1,yy1,dd2,mm2,yy2;

   int no_of_days_in_months[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int yeardiff,monthdiff;

	cout<<"Enter the first date DD/MM/YY ";
   cin>>dd1>>mm1>>yy1;

	cout<<"Enter the second date in DD/MM/YY ";
   cin>>dd2>>mm2>>yy2;

   if(yy1=yy2)
   {yeardiff=0;}
   else
   {
   	if((isleap(yy1)==true)&&isleap(yy2)==true)
      {
      	if(yy2>yy1)
   		{
         	yeardiff=((yy2-yy1)*365) +2;
         }

         else if(yy2<yy1)
   		yeardiff=yy1-yy2;



   	{yeardiff=yy1-yy2};
   	else if(yy1<yy2)
   	{yeardiff=yy2-yy1};

	int days=0;

   cout<<"No. of days are "<<days;
	if(isleap(yy1)==true)
   cout<<"Leap Year";
	else
   cout<<"Not Leap year";


getch();
}







