    #include<iostream>
    using namespace std;
     
    int main ()
    {
        int n,i,fib[1000];
        cin>>n;
     
        fib[1]=0;
        fib[2]=1;
     
        for(i=3; i<=n; i++)
        {
            fib[i] = fib[i-1] + fib[i-2];
        }
        for(i=1; i<=n; i++)
        {
            cout<<fib[i]<<" ";
        }
     
     
     
     
        return 0;
    }
