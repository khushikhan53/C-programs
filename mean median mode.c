#include<stdio.h>

 int main() {
    int num;
    int temp=0;

    printf("Enter Number of elements:\t\n");
    scanf("%d", &num);

    int array[num];
    printf("Give Numbers : \n");
    for (int i=0; i < num; i++)
        {
        scanf("%d", &array[i]);
        }

    printf("Numbers of original array are: ");    
    for (int i = 0; i < num; i++)
        {     
        printf("%d ", array[i]);     
        }      

    for (int i = 0; i < num; i++)
    {     
        for (int j = i+1; j < num; j++)
        {     
           if ( array[i] > array[j])
           {    
               temp = array[i];    
               array[i] = array[j];    
               array[j] = temp;    
           }     
        }     
    }    

    printf("\nAfter Ascending order: \n");    
    for (int i = 0; i < num; i++)
    {     
      printf("%d\n ", array[i]);
    }
//Mean

    float mean=0;
    
    for (int i = 0; i < num; i++) {
        
        mean += array[i];
    }
    mean /=num;
    printf("The mean is:%.2f\n", mean);
    
    // Median
    float median;
    if (num % 2 == 0)
    {
        median = (array[num/2 - 1] + array[num/2]) / 2.0;
    } else {
        median = array[num/2];
    }
    printf("The Median is: %.2f\t\n", median);
    
  // Mode

    int mode = 0;
    int maxCount = 0;
    
    for (int i = 0; i < num; i++) {
        int count = 0;
        
        for (int j = 0; j < num; j++) {
            if ( array[j] == array[i]) {
                count++;
            }
        }
        
        if (count > maxCount) {
            maxCount = count;
            mode = array [i];
        }
    }
    
    printf("The mode is: %d\n", mode);
    
    return 0;
}