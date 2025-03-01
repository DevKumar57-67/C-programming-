// The following file contains C programming language beginner level 
// C intro 
// C data types
// C variables 
// C comments
// C input/output
// C conditions
// C loops 
// C programming problems

// Introduction
// C language is the mother of all programming languages and it is the first language to be taught to computer science students
// C is a compuler based low level language and is one of the fastest language in the world
// This is the first code in C a basic C syntax 

#include <stdio.h>
int main() {
  printf("This is C language");
  return 0;
}


// Data Types
// Like every programming language we have data types in c as well  
// We have int , float , bool , char ,string data types in c

// int datatype
#include <stdio.h>
int main() {
  int x = 67;
  
  printf("%d", x);
  
  return 0;
}



// float datatype 
#include <stdio.h>
int main() {
  float f = 77.8;
  printf("%f", f);
  return 0;
}


// Input / Output 
// For taking input from user in C we use scanf function

#include <stdio.h>
int main() {
  int x;
  printf("Inter a number you want to display");
  
 
  scanf("%d", &x);
  printf("%d", x);
  return 0;
}

  
  
// operations
// Now we will be looking for some mathematical operations in C 
// A basic calculator program in C
#include <stdio.h>
int main() {
  int x;
  int y;
  
  printf("Enter the values:");
  scanf("%d", &x);
  scanf("%d", &y);
  
  int sum = x+y;
  int diff = x-y;
  int prod = x*y;
  int div = x/y;
  printf("%d\n", sum);
  printf("%d\n", diff);
  printf("%d\n", prod);
  printf("%d", div);
  return 0;
 
}


// Conditions in C 
// In C language we have if else and else if conditions 
// We will be implemented all conditions in codes

// Simple Conditional program

#include <stdio.h>
int main() {
  printf("Enter the age:");
  int age;
  scanf("%d", &age);
  if (age > 18) {
    printf("Eligible to vote");
  }
  else {
    printf("Not eligible to vote");
  }
  return 0;
  
}


// Using elif condition

#include <stdio.h>
int main() {
  printf("Enter your age:");
  int age; 
  scanf("%d", &age);
  if(age < 18) {
    printf("Less than 18");
  }
  
  else {
    printf("Age greater than 30");
  }
  return 0;
}



  
// Loops 
// The concept of loops comes in the picture when we have to fullfill some requirements 
// A basic for loop code 
#include <stdio.h>
int main() {
  for(int i=0; i<10; i++) {
    printf("This is a for loop\n");
  }
  return 0;
}


  
#include <stdio.h>
int main() {
  for(int i = 0; i<9; i++) {
    printf("%d\n", i);
  }
  return 0;
}


 
// A basic while loop 

#include <stdio.h>
int main() {
  int i;
  while(i <= 5) {
    printf("%d\n", i);
    i++;
  }
  return 0;
}



