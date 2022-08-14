#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0,flag=1;
    cin>>n;

    l1:
    while(i<n)
    {
        for(int j=flag; j<=flag+2; j++)
        {
            if(j%4==0)
            {
               cout<<"PUM"<<endl;
               flag++;
               i++;
               goto l1;
            }
            else
            {
                cout<<j<<" ";
                flag++;
            }
        }

    }




    return 0;
}
