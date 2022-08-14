    #include<iostream>
    using namespace std;
     
    int main ()
    {
        int a,i,j,count=0;
        cin>>a;
     
        for(i=2; i<=a; i++)
        {
            count = 0;
            for(j=2; j<i; j++)
            {
                if(i%j==0)
                {
                    count++;
                }
     
            }
            if(count==0)
            {
                cout<<i<<" ";
            }
        }
     
     
     
        return 0;
    }
