#include<bits/stdc++.h>
using namespace std;

int main()
{
   char a,c,d;
   cin>>a;

   if(a>=65 && a<=90)
   {
       c = a+32;
       cout<<c;
   }
   else if(a>=97 && a<=122)
   {
       d = a - 32;
       cout<<d;
   }



    return 0;
}

