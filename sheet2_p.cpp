#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
        {
            cout<<"*";
        }
        if(i!=0)
        {
            cout<<endl;
        }

    }


    return 0;
}
