/*C++ program to read and print employee information with department and pf information using hierarchical inheritance.*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class basicInfo
{
    protected:
        char    name[30];
        int     empId;
        char    gender;
    public:
        void getBasicInfo(void)
        {
            cout<<"Enter Name: ";
            cin.getline(name,30);
            cout<<"Enter Emp. Id: ";
            cin>>empId;
            cout<<"Enter Gender: ";
            cin>>gender;
        }
};

class deptInfo: private basicInfo
{
    protected:
        char deptName[30],assignedWork[30];
        int time2complete;
    public:
        void getDeptInfo(void)
        {
            getBasicInfo();
            cout<<"Enter Department Name: ";
            cin>>deptName;
            cout<<"Enter assigned work: ";
            cin>>assignedWork;
            cout<<"Enter time in hours to complete work: ";
            cin>>time2complete;
        }
        void printDeptInfo(void)
        {
            cout << "Employee's Information is: "<< endl;
            cout << "Basic Information...:"<< endl;
            cout << "Name: "<< name<<endl;
            cout << "Employee ID: "<< empId<<endl;
            cout << "Gender: "<<gender<<endl<<endl;

            cout << "Department Information...:"<<endl;
            cout << "Department Name: "<<deptName<<endl;
            cout << "Assigned Work: "<<assignedWork<<endl;
            cout << "Time to complete work: "<<time2complete<< endl;

        }
};

class loanInfo:private basicInfo
{
    protected:
        char loanDetails[30];
        int  loanAmount;
    public:
        void getLoanInfo(void)
        {
            cout<<"Enter Loan Details:";
            cin>>loanDetails;
            cout<<"Enter loan amount:";
            cin>>loanAmount;
        }
        void printLoanInfo(void)
        {
            cout<<"Loan Information...:"<<endl;
            cout<<"Loan Details: "<<loanDetails<<endl;
            cout<<"Loan Amount : "<<loanAmount<<endl;
        }
};

void main()
{
    deptInfo objD;

    objD.getDeptInfo();
    objD.printDeptInfo();

    cout<<endl<<endl ;
    loanInfo objL;

    objL.getLoanInfo();
    objL.printLoanInfo();
getch();
}