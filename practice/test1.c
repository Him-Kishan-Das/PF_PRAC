#include<stdio.h>

int main(){
    int a[5] = {23, 65, 78, 33, 87};
    for(int i =0; i<5;i++){
        printf("Value of a[%d] = %d and address of a[%d] =%d\n",i,a[i],i, &a[i]);
    }
}