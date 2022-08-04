#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,tem,x,y,z;
    cin>>a>>b>>c;

    x = a;
    y = b;
    z = c;

    if(a<b)
    {
        tem = a;
        a = b;
        b = tem;
    }
    if(a<c)
    {
        tem = a;
        a = c;
        c = tem;
    }
    if(b<c)
    {
        tem = b;
        b = c;
        c = tem;
    }

    cout<<c<<endl<<b<<endl<<a<<endl<<endl<<x<<endl<<y<<endl<<z<<endl;




    return 0;

}
