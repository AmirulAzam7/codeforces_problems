    #include<stdio.h>
     
    int main ()
    {
        int i,n;
     
        for(i=0; i<1; i--)
        {
            scanf("%d",&n);
     
            if(n==1999)
            {
                printf("Correct");
                break;
            }
            else
            {
                printf("Wrong\n");
            }
        }
     
     
     
        return 0;
    }
