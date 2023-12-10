// write a program to determine whether the input character is capital or small letters, digits or special symbols in c

#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("%c is a capital letter\n",ch);
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("%c is a small letter\n",ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("%c is a digit\n",ch);
    }
    else{
        printf("%c is a special character\n",ch);
    }
    return 0;
}