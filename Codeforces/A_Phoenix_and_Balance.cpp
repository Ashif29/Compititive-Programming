#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,T;
    scanf("%d",&T);
    if(T>0&&T<101)
    {
        for(j=1;j<=T;j++)
        {
            int a=0,b=0;
            scanf("%d",&n);
            if(n<31&&n>1&&n%2==0)
            {
                for(i=1;i<n;i++)
                {
                    if(i<n/2)
                    a+=pow(2,i);
                    else
                    b+=pow(2,i);
                }
                a+=pow(2,n);
                printf("%d\n",a-b);
            }
        }
    }
    return 0; 
}