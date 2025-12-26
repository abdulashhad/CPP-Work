#include <iostream.h>
#include <conio.h>

 int check(int dd,int mm,int yy)
{
    if (yy>=1900 && yy<=9999)
    {
        if (mm>=1 && mm<=12)
        {
            if ((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
            {
                cout<<"Date is valid."<<endl;
            }
            else if ((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
            {
                cout<<"Date is valid."<<endl;
            }
            else if (dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
            {
                cout<<"Date is valid."<<endl;
            }
            else
            {
                cout<<"Date is invalid. please start the program again"<<endl;

            }
        }

    }

}

struct Date {
    int d, m, y;
};


const int monthDays[12]
    = { 31, 28, 31, 30, 31, 30,
       31, 31, 30, 31, 30, 31 };

int countLeapYears(Date d)
{
    int years = d.y;
    if (d.m <= 2)
        years--;

    return years / 4
           - years / 100
           + years / 400;
}

int getDifference(Date dt1, Date dt2)
{


    long int n1 = dt1.y * 365 + dt1.d;


    for (int i = 0; i < dt1.m - 1; i++)
        n1 += monthDays[i];

    n1 += countLeapYears(dt1);

    long int n2 = dt2.y * 365 + dt2.d;
    for (int i = 0; i < dt2.m - 1; i++)
        n2 += monthDays[i];
    n2 += countLeapYears(dt2);


    return (n2 - n1);
}


int main()
{
    int dd1,dd2,mm1,mm2,yy1,yy2;
    cout<<"Enter the date as per the format:(DD/MM/YYYY) "<<endl;
    cout<<"Enter the first Date";
    cin>> dd1;
    cin>> mm1;
    cin>> yy1;
    cout<<"Enter the second Date";
    cin>> dd2;
    cin>> mm2;
    cin>> yy2;
    check(dd1,mm1,yy1);
    check(dd2,mm2,yy2);
    Date dt1 = { dd1, mm1, yy1 };
    Date dt2 = { dd2, mm2, yy2 };

    cout << "Difference between two dates is "<< getDifference(dt1, dt2);

    return 0;
getch();
}