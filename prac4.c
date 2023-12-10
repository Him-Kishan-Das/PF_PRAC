// Write a program to print the sum of digits of a number using for loop?

#include<stdio.h>

int main(){
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int temp = num; temp!=0; temp=temp/10){
        sum = sum + temp%10;
    }

    printf("The sum of the digit of %d is %d",num, sum);
    return 0;
}