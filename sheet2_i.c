    #include<stdio.h>
     
    int main ()
    {
        int i,j,n,temp,sum=0,r;
        scanf("%d",&n);
     
        temp=n;
        while(temp!=0)
        {
            r = temp%10;
            sum = sum*10 + r;
            temp= temp/10;
        }
        printf("%d\n",sum);
     
        if(sum==n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
     
     
        return 0;
    }
