#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int k=i; k<n; k++)
        {
            cout<<" ";
        }
            for(int k=1; k<=2*i-1; k++)
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

