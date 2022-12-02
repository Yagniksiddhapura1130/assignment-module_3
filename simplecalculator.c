#include<stdio.h>
main()
{   char operator;
    int num1, num2;

    printf("enter operator (+, -, *, /):");
    scanf("%c" ,&operator);

    printf("enter two value one by one:");
    scanf("%d %d", &num1 ,&num2);

    switch (operator)

   { 
    case '+' :
    printf("%d + %d = %d",num1, num2 , num1 + num2);
    break;
     case '-' :
    printf("%d - %d = %d",num1, num2 , num1 - num2);
    break;
     case '*' :
    printf("%d * %d = %d",num1, num2 , num1 * num2);
    break;
     case '/' :
    printf("%d / %d = %d",num1, num2 , num1 / num2);
    break;
    default :
    printf("invalid operator");
    }
    
    return 0;
}