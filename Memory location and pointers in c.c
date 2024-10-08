//Made by Abubakar Aamir.

//Practise of memory location and pointers in c language.
//Defination and basic concepts:
// (1) When a variable is created in C, a memory address is assigned to the variable.

// (2) The memory address is the location of where the variable is stored on the computer.

// (3)When we assign a value to the variable, it is stored in this memory address.

// (4)To access it, use the reference operator (&), and the result represents where the variable is stored:
// A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the %p format specifier.

#include<stdio.h>
int main(){

// int myAge = 43;
// printf("%p", &myAge); 


//int myAge = 43; // an integar variable

//printf("%d \n", myAge);  // Outputs the value of myAge (43)
//printf("%p \n", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)




//int myAge = 43;     // An int variable
//int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
//printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
//printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
//printf("%p\n", ptr);

 

       //Use the & operator to store the memory address of the myAge variable, and assign it to the pointer.

       //Now, ptr holds the value of myAge's memory address.



//int myAge = 43;     // Variable declaration
//int* ptr = &myAge;  // Pointer declaration

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
//printf("%p\n", ptr);

// Dereference: Output the value of myAge with the pointer (43)
//printf("%d\n", *ptr);


                   //You can also use pointers to access arrays.
                   //Consider the following array of integers:
//	int myage = 20;
//	printf("%d",myage);
//	printf("\n");
//	printf("%p",&myage );
//	

//******************************************************************************************//
//
//int mynumbers [5]= {10,20,30,40,50};
//int i;
//for(i=0; i<5; i++){
//	printf("%p\n",&mynumbers[i]);
//}

//This is  the method to find out the size of your data type :

// int myintegar;
// printf("%lu",sizeof(myintegar));
 
// jaise apne integar ka size nikla ha ase he ap double aur float ka bhi nikl sakhte ha same method.

//___________________________________________________________________________________________//

// int Mynumbers[5]={12,23,45,56,45};
// printf("%lu",sizeof(Mynumbers));









    return 0;
}