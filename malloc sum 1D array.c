#include <stdio.h>
#include <stdlib.h>
int main() {
int n, sum = 0;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
// Allocate memory for array dynamically
int* ptr;
ptr = (int *)malloc(n * sizeof(int));
if (ptr == NULL) {
printf("Memory allocation failed. Exiting...");
return -1;
}
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", &ptr[i]);
sum =sum + ptr[i];
}
printf("The elements in the array are: ");for (int i = 0; i < n; i++)
printf("%d",ptr[i]);
printf("\nThe sum of the elements in the array is: %d\n", sum);
// Free dynamically allocated memory
free(ptr);
return 0;
}