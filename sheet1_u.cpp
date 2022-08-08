#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,y;
    cin>>n;

    int x = n;

    y = n - x;

    if(y==0)
    {
        cout<<"int "<<x;
    }
    else
    {
        cout<<"float "<<x<<" "<<y;
    }




    return 0;
}
