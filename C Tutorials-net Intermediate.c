// This repository is a sequel to the previous one.
// Here we will be continuing our C programming but a step further
// Topics: C Functions 
//         C Control Flow 
//.        C arrays 
//.        C strings 
//.        C pointers
//.   
/*
// C program to show function
// call and definition
#include <stdio.h>

// Function that takes two parameters 
// a and b as inputs and returns 
// their sum
int sum(int a, int b) 
{ 
  return a + b; 
}

// Driver code
int main()
{
  // Calling sum function and 
  // storing its value in add variable
  int add = sum(10, 30);
  
  printf("Sum is: %d", add);
  return 0;
}



#include <stdio.h>
int sum(int a, int b) {
  return a+b;
}

int main() {
  int add = sum(10,20);
  printf("Sum:%d", add);
  return 0;
}




#include <stdio.h>  // Include standard input-output library

// Function to take two numbers from the user and return their sum
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    // Asking user for input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call sum function and store result
    result = sum(num1, num2);

    // Display result
    printf("The sum is: %d\n", result);

    return 0;
}


  
// A calculator program from user input 

#include <stdio.h>
int sum(int a,int b){
  return a+b;
}

int diff(int a, int b){
  return a-b;
}
int mul(int a, int b){
  return a*b;
}
int div(int a, int b){
  return a/b;
}

int main() {
  int num1,num2,add,min,prod,quo;
  printf("Enter the values:");
  scanf("%d", &num1);
  scanf("%d", &num2);
  add = sum(num1,num2);
  min = diff(num1,num2);
  prod = mul(num1, num2);
  quo = div(num1, num2);
  printf("Sum is:%d\n", add);
  printf("Diff is:%d\n", min);
  printf("Mul is:%d\n", prod);
  printf("Div is:%d\n", quo);
  
  return 0;
  
  
}


// Arrays
// C langauge have the built in arrays feature where we do operations on arrays
// Declaring arrays


// C Program to demonstrate the use of array
#include <stdio.h>

int main()
{
    // array declaration and initialization
    int arr[2][3] = { 10, 20, 30, 40, 50 };

    // modifying element at index 2
    arr[2] = 100;

    // traversing array using for loop
  printf("Elements in Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


// 2D Array
 #include <stdio.h>
 int main() {
   int arr[2][3] = {10,20,30,40,50,60};
   
   for(int i = 0; i<2; i++) {
     for(int j = 0; j<3; j++){
       printf("%d", arr[i][j]);
     }
     printf("\n");
     
   }
   return 0;
 }
 
 
   
// Pointers in C
#include <stdio.h>

int main()
{

    // taking an integer variable
    int m = 100;

    // pointer variable ptr that stores
    // the address of variable m
    int *ptr = &m;

    // printing the value of variable m
    printf("The Value of Variable m is: %d\n", m);

    // printing the memory address of variable m
    // in hexadecimal format
    printf("The Memory Address of Variable m is: %p\n", &m);

    // printing the value of ptr i.e.
    // printing the memory address of variable m
    // in hexadecimal format using pointer variable
    printf("The Memory Address of Variable m is using ptr: %p\n", ptr);

    return 0;
}




#include <stdio.h>
int main() {
  int x;
  printf("Enter the values");
  scanf("%d", &x);
  
  int *ptr = &x;
  
  
  printf("%d", x);
  return 0;
}

  
// Strings in C 

// C program to illustrate strings

#include <stdio.h>
#include <string.h>

int main()
{
    // declare and initialize string
    char str[] = "Geeks";

    // print string
    printf("%s\n", str);

    int length = 0;
    length = strlen(str);

    // displaying the length of string
    printf("Length of string str is %d", length);

    return 0;
}


// This C tutorial is finished here 