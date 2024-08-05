
#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num1,num2,rt,x,y, factorial=1,name,choice;
    char count;
    do
    {
        printf("\t\tMain Menu\n");
        printf("Press 1 For Entering Your Name And Father Name\n");
        printf("Press 2 For Subtraction\n");
        printf("Press 3 For Multiplication\n");
        printf("Press 4 For Division\n");
        printf("Press 5 For Square Root\n");
        printf("Press 6 To Find Even OR Odd Numbers\n");
        printf("Press 7 For Square of A Number \n");
        printf("Press 8 For Cube of a Number\n");
        printf("Press 9 For Table\n");
        printf("Press 10 For ASCII character\n");
        printf("Press 11 For Factorial\n");
        printf("Press 12 For Prime and Composite Numberl\n");
        printf("Press 13 For Addition\n");
        printf("\n");
        printf("Select Any One Operation\n");
        scanf("%d",& choice);
        switch(choice)
        {
            case 1:
            {
          char name[10];
         printf("Enter Your Name Here : \n");
         scanf("%s" ,&name);
         printf("Your Name is %s \n",name);

         printf("Enter Your Father Name Here : \n");
         scanf("%s" ,&name);
         printf("Your father name is %s \n",name);
         break;
        }
            
            case 2:
            {
                printf("You Selected Subtraction Operation\n");
                printf("Enter First Number\n");
                scanf("%d",&num1);
                printf("Enter Second Number\n");
                scanf("%d",&num2);
                printf("%d-%d=%d\n",num1,num2,num1-num2);
                break;
            }
            case 3:
            {
                printf("You Selected Multiplication Operation\n");
                printf("Enter First Number\n");
                scanf("%d",&num1);
                printf("Enter Second Number\n");
                scanf("%d",&num2);
                printf("%d*%d=%d\n",num1,num2,num1*num2);
                break;
            }
            case 4:
            {
                printf("You Selected Division Operation\n");
                printf("Enter First Number\n");
                scanf("%d",&num1);
                printf("Enter Second Number\n");
                scanf("%d",&num2);
                printf("%d/%d=%d\n",num1,num2,num1/num2);
                break;
            }
            case 5:
            {
                printf("You have selected square root operation\n");
                printf("Enter a number\n");
                scanf("%d",& num1);
                rt = sqrt(num1);
                printf("Square root of a %d = %d\n" , num1,rt);
                break;
            }
            case 6:
            {
                printf("You Selected Even OR Odd Operation\n");
                printf("Enter Any Number\n");
                scanf("%d",&num1);
                if(num1%2==0)
                {
                    printf("%d is Even Number\n",num1);
                }
                else
                {
                    printf("%d is Odd Number\n",num1);
                }
                break;
            }
            case 7:
            {
                printf("You Selected Sqaure Operation\n");
                printf("Enter Any Number\n");
                scanf("%d",&num1);
                printf("Square Of %d is %d\n",num1,num1*num1);
                break;
            }
            case 8:
            {
                printf("You Selected Cube Operation\n");
                printf("Enter Any Number\n");
                scanf("%d",&num1);
                printf("Cube Of %d is %d\n",num1,num1*num1*num1);
                break;
            }
            case 9:
            {
                printf("You Selected Table Operation\n");
                printf("Enter Any Number\n");
                scanf("%d",&num1);
                int i;
                for(i=1;i<=10;i++)
                {
                    printf("%d x %d = %d\n",num1,i,i*num1);
                }
                break;
            }
            case 10:
            {
                printf("You Selected ASCII Operation\n");
                printf("Enter Any Number\n");
                scanf("%d",&num1);
                printf("ASCII Of %d is %c \n",num1,(char)num1);
                break;
            }
            case 11:
            {
            printf("You have selected Factorial Operation\n");
            printf("Enter Any Number\n");
            scanf("%d" , &x);
            for(y=1 ; y<=x ; y++)
            factorial= factorial*y;
            printf("Your factorial is = %d\n" ,factorial);
            break;
            }
            case 12:
            {
            int i,n,c=0;
            printf("You Have Selected Prime and Composite Operation\n");
           printf("Enter Any Value \n");
           scanf("%d",&n);
           for(i=1;i<=n;i++)
          {
          if(n%i==0)
          c=c+1;
          }
          if(c==2)
          printf("It is a prime number\n");
          else
          printf("It is a composite number\n");
          break;
          }
          case 13:
          {
         printf("You Selected Addition Operation\n");
        printf("Enter First Number\n");
        scanf("%d",&num1);
        printf("Enter Second Number\n");
        scanf("%d",&num2);
        printf("%d+%d=%d\n",num1,num2,num1+num2);
        break;
        }
        default:
        {
       printf("Invalid operator"); 
        }
        }
        printf("Do You Want To Continue This Program\n");
       scanf(" %c" ,&count);
     }
       while(count=='y' || count=='Y');
         return 0;
        }
        
        