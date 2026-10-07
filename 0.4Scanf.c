// /*
// scanf() is a C function used to take input from the user through the keyboard.
// */
// #include <stdio.h>

// int main(){
//     int b;
//     printf("Enter the value of b: ");
//     scanf("%d",& b);
//     printf("taking value from users %d", b );
//     return 0;
// }



#include <stdio.h> //stdio.h = Standard Input Output Header File

int main(){
    int age ;
    printf("enter the value here:");
    scanf("%d",&age);
    printf(" the value is %d",age);
    if (age>18){
        printf("YOU CAN RIDE");
    }
    else if (age <=18){
        printf("YOUR NOT ELIGIBLE");
    }
    else if(age<55){
        printf("your age is upper ride safely");
    }
    return 0;
}