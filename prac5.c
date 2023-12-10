// Write a program to check whether a number is Palindrome or not.

#include<stdio.h>

int main(){
    int num, originalNum, reverseNum=0, r;
    printf("Enter the number: ");
    scanf("%d",&num);
    originalNum = num;
    while(num!=0){
        r = num %10;
        num = num / 10;
        reverseNum =reverseNum*10 + r;
    }
    if(reverseNum==originalNum){
        printf("%d is a palindrome!",originalNum);
    }
    else{
        printf("%d is a not a palindrome!",originalNum);
    }
    return 0;
}
