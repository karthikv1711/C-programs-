#include <stdio.h>
struct Student
{
char name[50];
int marks;
};
int main() {
int n;
float total = 0, average;
printf("Enter the number of students: ");
scanf("%d", &n);
struct Student S[n];
// Input data for each student
for (int i = 0; i < n; i++) {
printf("Enter name of student %d: ", i + 1);
scanf("%s", S[i].name);
printf("Enter marks of student %d: ", i + 1);
scanf("%d", &S[i].marks);
total = total + S[i].marks;
}
// Calculating average
average = total / n;
// Displaying the total and average marks
printf("\nTotal marks of all students: %f\n", total);
printf("Average marks of all students: %f\n", average);
return 0;
}