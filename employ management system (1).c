#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int employeeId;
    float salary;
};

void addEmployee(struct Employee employees[], int *count) {
    printf("Enter employee name: ");
    scanf("%s", employees[*count].name);
    printf("Enter employee ID: ");
    scanf("%d", &employees[*count].employeeId);
    printf("Enter employee salary: ");
    scanf("%f", &employees[*count].salary);
    (*count)++;
}

void displayEmployees(struct Employee employees[], int count) {
    printf("\nEmployee List:\n");
    printf("ID\tName\tSalary\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n", employees[i].employeeId, employees[i].name, employees[i].salary);
    }
}

void searchEmployee(struct Employee employees[], int count, int searchId) {
    for (int i = 0; i < count; i++) {
        if (employees[i].employeeId == searchId) {
            printf("\nEmployee Found:\n");
            printf("ID\tName\tSalary\n");
            printf("%d\t%s\t%.2f\n", employees[i].employeeId, employees[i].name, employees[i].salary);
            return;
        }
    }
    printf("\nEmployee not found with ID %d\n", searchId);
}

int main() {
    struct Employee employees[50];  // Assuming a maximum of 50 employees
    int count = 0;

    int choice, searchId;

    do {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                printf("Enter employee ID to search: ");
                scanf("%d", &searchId);
                searchEmployee(employees, count, searchId);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}