#include <stdio.h>
struct Address {
    int houseno;
    char street[100];
    int pincode;
};
struct Employee {
    char name[50];
    int age;
    struct Address address;
};

void main() {
    struct Employee emp;
    printf("Enter Employee Name: ");
    scanf(" %s", emp.name);
    printf("Enter Employee Age: ");
    scanf("%d", &emp.age);
    printf("Enter House Number: ");
    scanf("%d", &emp.address.houseno);
    printf("Enter Street Name: ");
    scanf(" %s", emp.address.street);
    printf("Enter Pincode: ");
    scanf("%d", &emp.address.pincode);
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Address:\n");
    printf("  House Number: %d\n", emp.address.houseno);
    printf("  Street: %s\n", emp.address.street);
    printf("  Pincode: %d\n", emp.address.pincode);
}
