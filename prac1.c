// Write a program to count number of digits in a given integer?

#include<stdio.h>

int main(){
    int originalNum, num, count=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    originalNum = num;
    while(num!=0){
        num = num/10;
        count++;
    }
    printf("The total number of digits in %d is: %d",originalNum,count);
    return 0;
}