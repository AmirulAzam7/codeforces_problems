#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n,y,m,d;
   cin>>n;

   y = n/365.0;
   n =n%365;

   m = n/30.0;
   n = n%30;

   d = n;

   cout<<y<<" years"<<endl<<m<<" months"<<endl<<d<<" days"<<endl;


    return 0;
}
