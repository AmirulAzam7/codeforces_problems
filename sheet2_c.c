    #include<stdio.h>
     
    int main ()
    {
        int n,a,i,e=0,o=0,p=0,na=0;
        scanf("%d",&n);
     
     
        for(i=0; i<n; i++)
        {
             scanf("%d",&a);
     
           if(a%2==0)
           {
               e++;
           }
           else if(a%2!=0)
           {
               o++;
           }
     
           if(a>0)
           {
               p++;
           }
           else if(a<0)
           {
               na++;
           }
        }
        printf("Even: %d\n",e);
         printf("Odd: %d\n",o);
          printf("Positive: %d\n",p);
           printf("Negative: %d\n",na);
     
     
     
     
        return 0;
    }
