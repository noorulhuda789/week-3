#include<iostream>
using namespace std;
main()
{
string moviename;
int adultprice,childprice,numberofaticket,numberofcticket,total,adult,child;
float per,remaining;
cout<<"movie name";
cin>>moviename;
cout<<"enter price of adult ticket";
cin>>adultprice;
cout<<"price of child ticket ";
cin>> childprice;
cout<<"number of adult tickets sold";
cin>>numberofaticket;
cout<<"number of childern tickets sold";
cin>>numberofcticket;
cout<<"number of percentage u want to donate";
cin>>per;
adult=adultprice*numberofaticket;
child=childprice*numberofcticket;
total=adult+child;
remaining=total*per/100;
cout<<"total amount"   <<total <<endl;
cout<<"amount remain " <<remaining;
}








