#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

float calculator()
{
    float num1,num2,sum;
    char operat;
    cout<<endl<<"Enter first number    ";
    cin>>num1;
    cout<<"Enter second number   ";
    cin>>num2;
    cout<<"Enter Operator ( + , * , - , / )  ";
    cin>>operat;
    switch(operat)
    {
    case'+':
        sum=num1+num2;
        cout<<"Your answer is  "<<sum<<endl;
        break;
    case'-':
        sum=num1-num2;
        cout<<"Your answer is  "<<sum<<endl;
        break;
    case'*':
        sum=num1*num2;
        cout<<"Your answer is  "<<sum<<endl;
        break;
    case'/':
        sum=num1/num2;
        cout<<"Your answer is  "<<sum<<endl;
        break;
    default:
        cout<<"Enter a valid operator"<<endl;
    }
}

int leapyear()
{
    int year;
    cout<<"Enter year you want to check "<<endl;
    cin>>year;
   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
      cout<<endl<<year<<" is a leap year"<<endl;
   else
      cout<<endl<<year<<" is not a leap year"<<endl;
}

int fibonacci()
    {
    cout<<"Enter limit of series "<<endl;
    int n,i,num1=0,num2=1,num3;
    cin>>n;
    cout<<endl;
    cout<<"Fibonacci series is : ";
    for(i=0;i<=n;i++)
    {
        num3=num1+num2;
        num1=num2;
        num2=num3;
        cout<< num3 << " , ";
    }

    cout<<endl<<endl;



    }

int cgpa()
{
    cout<<endl<<"\t\t-- CGPA Calculator --"<<endl<<endl;
    float sum,mark_total,math,phy,ip,ics,eng;
    cout<<"Enter Marks is Math ";
    cin>>math;
    cout<<endl<<"Enter Marks is Physics ";
    cin>>phy;
    cout<<endl<<"Enter Marks is Introduction to Programming ";
    cin>>ip;
    cout<<endl<<"Enter Marks is Introduction to Computer Studies ";
    cin>>ics;
    cout<<endl<<"Enter Marks is English ";
    cin>>eng;

    sum = math+phy+ip+ics+eng;
    mark_total=(sum*100)/500;


    if ( math > 100 || phy > 100 || eng > 100 || ip > 100 || ics > 100)
    cout<<endl<<"Invalid Mark"<<endl;

    else if (mark_total>=91 && mark_total<=100)
    cout<<endl<<"Your cgpa is 4.00"<<endl;

    else if (mark_total>=86 && mark_total<=90)
    cout<<endl<<"Your cgpa is 3.75"<<endl;

    else if (mark_total>=81 && mark_total<=85)
    cout<<endl<<endl<<"Your cgpa is 3.50"<<endl;

   else if (mark_total>=76 && mark_total<=80)
    cout<<endl<<"Your cgpa is 3.25"<<endl;

   else if (mark_total>=71 && mark_total<=75)
    cout<<endl<<"Your cgpa is 3.00"<<endl;

    else if (mark_total>=66 && mark_total<=70)
    cout<<endl<<"Your cgpa is 2.75"<<endl;

    else if (mark_total>=61 && mark_total<=65)
    cout<<endl<<"Your cgpa is 2.50"<<endl;

    else if (mark_total>=50 && mark_total<=60)
    cout<<endl<<"Your cgpa is 2.25"<<endl;

    else if (mark_total>=0 && mark_total<=49)
    cout<<endl<<"Your are Failed"<<endl;

}

int credit()
{
    cout<<endl<<endl <<"\t"<<" Developed By Muhammad Al Amin Rifat"<<"\t"<<endl <<endl;
}


int main()
{

   char choice1;


   do{
    int choice;

    cout<<"\t\t------------------------"<<endl;
    cout<<"\t\tMultiFunctional Program"<<endl;
    cout<<"\t\t------------------------"<<endl<<endl;;
    cout<<"1. Simple Calculator "<<endl;
    cout<<"2. Leap Year checker "<<endl;
    cout<<"3. Fibonacci series "<<endl;
    cout<<"4. CGPA Calculator"<<endl;
    cout<<"5. Exit"<<endl;

    cin>>choice;
    switch(choice)
    {
    case 1:
        calculator();
        break;
    case 2:
        leapyear();
        break;
    case 3:
        fibonacci();
        break;
    case 4:
        cgpa();
        break;
    case 5:
        credit();
        exit(0);
    }

    cout<<endl<<endl<<"Type y or Y if you want more"<<endl;
    cin>>choice1;
    system("CLS");
   } while(choice1 == 'y' || choice1 == 'Y');
    credit();
}

