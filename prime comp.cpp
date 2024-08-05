#include<iostrea>
int main()
{
int i,n,c=0;
printf("Enter a number n");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
    if(n%i==0)
    c=c+1;
    }
    if(c==2)
    printf("It is a prime number");
    else
    printf("It is a composite number");
    return 0;
    }
    