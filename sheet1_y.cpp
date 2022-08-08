#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,x;

    cin>>a>>b>>c>>d;

    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;

    x = (a*b*c*d)%100;


    if(x<10)
    {
         cout<<0<<x;

    }
    else
    {
        cout<<x;
    }





    return 0;
}
