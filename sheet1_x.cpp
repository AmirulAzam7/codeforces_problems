#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long a,b,c,d,x,y;
    cin>>a>>b>>c>>d;

    x = max(a,c);
    y = min(b,d);

  if(x<y || x==y)
  {
      cout<<x<<" "<<y;
  }
  else if(x>y)
  {
      cout<<"-1";
  }




    return 0;
}
