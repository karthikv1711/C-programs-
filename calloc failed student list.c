#include <stdio.h>
#include <stdlib.h>
struct Student
{
char name[50];
int marks;
};
int main()
{
int n;
const int Range = 40;
int flag=0;
printf("Enter the number of students: ");
scanf("%d", &n);
if(n<=0)
{
printf("Invalid Input");
}
// Allocate memory for 'n' students
struct Student *ptr = (struct Student *)calloc(n, sizeof(struct
Student));
if (ptr == NULL)
{
printf("Memory allocation failed. Exiting...");
return -1;
}
// Input data for each student
for (int i = 0; i < n; i++)
{
printf("\nEnter name of student %d: ", i + 1);
scanf("%s", ptr[i].name);
printf("Enter marks of student %d: ", i + 1);
scanf("%d", &ptr[i].marks);
if (ptr[i].marks < Range)
{
flag++;
}
}
// Displaying list of failed students
if (flag > 0)
{
printf("\nList of Failed Students:\n");
for (int i = 0; i < n; i++)
{
if (ptr[i].marks < Range)
{
printf("Student Name: %s, Marks: %d\n", ptr[i].name,
ptr[i].marks);
}
}
}
else
{
printf("No One Failed\n");
}
// Free dynamically allocated memory
free(ptr);
return 0;
}