//task 1
#include<conio.h>
int main()
{
int i , sum;
sum=0;
do
{
printf("Enter any no");
scanf("%d", &i);
if(i>=0)
{
sum=sum+i;
printf("%d" ,sum);
}
else
{
printf("Negative Num");
}
}
while (i!=0);
return 0;
}


