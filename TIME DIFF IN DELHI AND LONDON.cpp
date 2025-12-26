#include<iostream.h>
#include<conio.h>
#include<math.h>

class time
{
	public:
   int hh,mm,ss;
   void input(){cout<<"\nEnter the time in hh:mm:ss format ";cin>>hh>>mm>>ss;}
   void output(){cout<<"\nTime in hh:mm format is : "<<hh<<":"<<mm<<":"<<ss;}

 };

void getLtime(time t1)
{
	cout<<"\n\nTime in Delhi is "<<abs(t1.hh)<<":"<<abs(t1.mm)<<":"<<abs(t1.ss);
   cout<<"\n\nTime in london is "<<abs(t1.hh+4)<<":"<<abs(t1.mm+30)<<":"<<abs(t1.ss);
}



void time_diff(time t1,time t2)
   {  int hr=0,min=0,sec=0;
   	if(t1.ss>t2.ss){t2.ss+=60;--t2.mm;}
      sec=t2.ss-t1.ss;
   	min=t2.mm-t1.mm;
      if(t1.mm>t2.mm){t2.mm+=60;--t2.hh;}
      hr=t2.hh-t1.hh;
   	cout<<"\nTime difference in hh:mm:ss format is : "<<abs(hr)<<":"<<abs(min)<<":"<<abs(sec);
      }



void main()
{
	time delhi,london;
   delhi.input();
   london.input();
   time_diff(delhi,london);
   getLtime(delhi);
   getch();

}

