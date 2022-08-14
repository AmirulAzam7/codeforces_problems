    #include<iostream>
    using namespace std;
     
    int main ()
    {
        int t,i,j,n;
        cin>>t;
       long long int fact=1;
        for(i=0; i<t; i++)
        {
            cin>>n;
     
            for(j=1; j<=n; j++)
            {
                fact = fact * j;
            }
            cout<<fact<<endl;
            fact=1;
        }
     
     
     
     
        return 0;
    }

