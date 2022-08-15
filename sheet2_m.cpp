#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,r,cnt=0;
    cin>>a>>b;

    for(int i=a; i<=b; i++)
    {
        int flag=0;
        int x=i;
        while(x>0)
        {
            r = x%10;
            if(r!=4 && r!=7)
            {
              flag++;
            }
            x = x/10;
        }
        if(flag==0)
        {
            cout<<i<<" ";
            cnt++;
        }

    }
   if(cnt==0)
   {
       cout<<-1;
   }



    return 0;
}
