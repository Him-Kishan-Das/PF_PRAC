// Write a program to print number in reverse order with a difference of 2?

#include<stdio.h>

int main(){
    int num, reverseNum=0, r, originalNum;
    printf("Enter your number: ");
    scanf("%d",&num);
    originalNum = num;
    while(num!=0){
        r = num %10;
        num = num / 10;
        reverseNum =reverseNum*10 + r;
    }
    printf("The reverse nummber of %d with a difference of 2 is: %d",originalNum, reverseNum-2);
    return 0;
}