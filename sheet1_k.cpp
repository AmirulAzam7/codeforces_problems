#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int a,b,c,temp;

   cin>>a>>b>>c;

    if(a<b)
    {
      temp = a;
      a = b;
      b = temp;
      }
    if(a<c)
    {
        temp = a;
         a = c;
         c = temp;
    }
    if(b<c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    cout<<c<<" "<<a;


    return 0;
}

