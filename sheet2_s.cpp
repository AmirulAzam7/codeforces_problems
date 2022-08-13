#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,sum=0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        sum = 0;
        cin>>a>>b;

        int minn = min(a,b);
        int maxx = max(a,b);

        for(int j=minn+1; j<maxx; j++)
        {
            if(j%2!=0)
            {
                sum = sum + j;
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}

# codeforces_problems
