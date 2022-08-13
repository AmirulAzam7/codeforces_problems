#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m,n,sum = 0;

    while(1)
    {
        sum=0;
         cin>>m>>n;
         if(m<=0 || n<=0)
        {
            break;
        }
        else
        {
            int minn = min(m,n);
            int maxx = max(m,n);

            for(int i=minn; i<=maxx; i++)
            {
                cout<<i<<" ";
                sum = sum + i;
            }
            cout<<"sum ="<<sum<<endl;
    }
    }


    return 0;
}
