#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r;
    cin>>n;
    long long int t,sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>t;
        int flag=0;
        sum=0;

        while(t>0)
        {
            r = t%2;
            if(r==1)
            {
            flag++;
            }
            t = t/2;
        }
        for(int j=0; j<flag; j++)
        {
            int z = pow(2,j);

            sum = sum + z;
        }
         cout<<sum<<endl;
    }



    return 0;
}
