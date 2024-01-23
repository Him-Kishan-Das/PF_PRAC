#include <stdio.h>

struct company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployees;
};

int main() {
    int n;
    printf("Enter the total number of companies: ");
    scanf("%d",&n);
    struct company companies[n]; 
    for (int i = 0; i < n; ++i) {
        printf("Enter details for Company %d:\n", i + 1);

        printf("Enter company name: ");
        scanf("%s", companies[i].name);  

        printf("Enter company address: ");
        scanf("%s", companies[i].address);  

        printf("Enter company phone: ");
        scanf("%s", companies[i].phone);  

        printf("Enter number of employees: ");
        scanf("%d", &companies[i].noOfEmployees);
    }

    printf("\nCompany Information:\n");
    printf("\nName\tAdress\tPhone\tNumber of Employee\n");
    for (int i = 0; i < n; ++i) {
        printf("%s\t  ", companies[i].name);
        printf("%s\t  ", companies[i].address);
        printf("%s\t", companies[i].phone);
        printf("%d\n", companies[i].noOfEmployees);
    }

    return 0;
}
