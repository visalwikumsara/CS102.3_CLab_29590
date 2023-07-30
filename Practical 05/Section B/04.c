#include <stdio.h>

int main() {
    int employeeNo;
    float basicSalary;
    int count = 0;

    printf("Enter the employee number and basic salary (-999 to end):\n");

    while (1) {
        printf("Employee No: ");
        scanf("%d", &employeeNo);

        if (employeeNo == -999)
            break;

        printf("Basic Salary: ");
        scanf("%f", &basicSalary);

        if (basicSalary >= 5000)
            count++;
    }

    printf("Number of employees with basic salary >= $5000: %d\n", count);

    return 0;
}
