#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,r,sum=0,sum2=0;
    cin>>n>>a>>b;

    for(int i=a; i<=n; i++)
    {
       int x = i;
       sum = 0;

         while(x>0)
         {
             r = x%10;
             sum = sum + r;
             x = x/10;
         }
         if(sum>=a && sum<=b)
         {
             sum2 = sum2 + i;
         }
    }

    cout<<sum2;





    return 0;
}
