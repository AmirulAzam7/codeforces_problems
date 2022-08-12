#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int n,a;

    cin>>ch;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a;

        for(int j=1; j<=a; j++)
        {
            cout<<ch;
        }
        if(i!=n)
        {
             cout<<endl;
        }

    }

    return 0;
}
