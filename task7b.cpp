#include <iostream>
using namespace std;
main()
{
double bit,bytes,kilo,mega;
cout<<"enter bits";
cin>>bit;
bytes=bit/8;
kilo=bytes/1024;
mega=kilo/1024;
cout<<"megabytes is  " <<mega;
}