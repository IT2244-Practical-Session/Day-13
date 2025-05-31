#include<stdio.h>
int main(){
    printf("hello world");
return 0;
}
#############################################################
int age;
age=25;
int age=25;
#include<stdio.h>
int main(){
    int age=25;
    printf(age);
    printf("%d",age);
return 0;
}
###############################################################
// assign new value for same variable
int age =25;
printf("%d",age);
printf("c programming ");

age=31;
printf("\n")

#############################################################
#include<stdio.h>
int main(){
    int firstNumber=25;
    printf("first number:%d",firstNumber);
    int firstNumber = secondNumber;
    printf("first number:%d",secondNumber)
return 0;
}

#############################################
//who to run it.
//gcc file name with extension -o file name without extension
//then "./file name only"
___________________________________________________________

#include<stdio.h>
int main(){
    int age;

    int age;
    printf("\n Enter your age: ");
    //printf("%d",age);
    scanf("%d", &age);

    printf("\n Age=%d",age);
}
user.c: In function ‘main’:
user.c:5:9: error: redeclaration of ‘age’ with no linkage
    5 |     int age;
      |         ^~~
user.c:3:9: note: previous declaration of ‘age’ with type ‘int’
    3 |     int age;
      | 
      ###################################################        ^~~
/*calculator*/
#include<stdio.h>
int main(){
    int num1;
    int num2;

    printf("\n Enter the 1 st number: ");
    scanf("%d", &num1);
    printf("\n Enter the 2 nd number: ");
    scanf("%d", &num2);

   /* int add= num1 + num2;
    int sub = num1 - num2;
    int div = num1 / num2;
    int mul = num1 * num2;*/

    printf("addition:%d",num1 + num2);
    printf("subtraction:%d",num1 - num2);
    printf("Division:%.2f",(float)num1 / num2);
    printf("Multiplication:%d",num1 * num2);

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("\nEnter the 1st number: ");
    scanf("%d", &num1);
    printf("\nEnter the 2nd number: ");
    scanf("%d", &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("\nError: Division by zero is not allowed.\n");
    } else {
        // Perform and display arithmetic operations
        printf("\nAddition: %d", num1 + num2);
        printf("\nSubtraction: %d", num1 - num2);
        printf("\nDivision: %.2f", (float)num1 / num2);  // Use float for accurate division
        printf("\nMultiplication: %d", num1 * num2);
    }

    return 0;
}
