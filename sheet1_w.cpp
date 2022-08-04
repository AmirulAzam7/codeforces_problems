#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c;
   char ch,cha;

   cin>>a>> ch >>b>> cha >>c;

   if(ch=='+' && a+b==c)
   {
       cout<<"Yes"<<endl;
   }
   else if(ch=='+' && a+b!=c)
   {
       cout<<a+b<<endl;
   }

   if(ch=='-' && a-b==c)
   {
       cout<<"Yes"<<endl;
   }
   else if(ch=='-' && a-b!=c)
   {
       cout<<a-b<<endl;
   }

   if(ch=='*' && a*b==c)
   {
       cout<<"Yes"<<endl;
   }
   else if(ch=='*' && a*b!=c)
   {
       cout<<a*b<<endl;
   }

    return 0;
}
