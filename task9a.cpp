#include<iostream>
using namespace std;
main()
{ 
int kiloofveg,kilooffruit;
float pricea,priceb,costa,costb,exchange,total;
cout<<"enter kilo ofveg";
cin>>kiloofveg;
cout<<"enter kilo of fruit";
cin>>kilooffruit;
cout<<"cost of veg";
cin>>pricea;
cout<<"cost of fruit";
cin>>priceb;
costa=pricea*kiloofveg;
costb=priceb*kilooffruit;
total=costa+costb;
exchange=total*1.94;
cout<<"total prices in rupee" <<exchange;
}
 
