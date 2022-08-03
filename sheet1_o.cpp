#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x;
    char ch;

    cin>>a>>ch>>b;
    if(ch=='+')
    {
        x = a+b;
    }
    else if(ch=='-')
    {
        x = a-b;
    }
    else if(ch=='*')
    {
        x = a*b;
    }
    if(ch=='/')
    {
        x = a/b;
    }

    cout<<x<<endl;



    return 0;
}
