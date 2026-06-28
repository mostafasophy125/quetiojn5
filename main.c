/*
  Write a C program to input three numbers and display the largest number using nested if statements.
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x,y,c;
    puts("Enter three num:");
    scanf("%d%d%d",&x,&y,&c);
    if((x>y)&&(x>c)){
        printf("%d",x);
    }
    else if((y>x)&&(y>c)){
        printf("%d",y);
    }
    else{
        printf("%d",c);

    }
}
