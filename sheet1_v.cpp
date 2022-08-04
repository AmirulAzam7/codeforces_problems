#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b;
   char ch;

   cin>>a>> ch >>b;

   if(a>b && ch=='>')
   {
       cout<<"Right"<<endl;
   }
   else if(a>b && ch=='<')
   {
       cout<<"Wrong"<<endl;
   }
   else if(a>b && ch=='=')
   {
       cout<<"Wrong"<<endl;
   }

  if(b>a && ch=='<')
   {
       cout<<"Right"<<endl;
   }
   else if(b>a && ch=='>')
   {
       cout<<"Wrong"<<endl;
   }
   else if(b>a && ch=='=')
   {
       cout<<"Wrong"<<endl;
   }

   if(a==b && ch=='>')
   {
       cout<<"Wrong"<<endl;
   }
   else if(a==b && ch=='<')
   {
       cout<<"Wrong"<<endl;
   }
   else if(a==b && ch=='=')
   {
       cout<<"Right"<<endl;
   }

    return 0;
}
