#include<iostream>
using namespace std;
int main()
{
 int n,d,s=0;
 cout<<"enter number";
 cin>>n;
 while(n!=0){


 d=n%10;
 s=s+d;
 n=n/10;
}
 cout<<"sum ofnumber is "<<s;
 return 0;
}
