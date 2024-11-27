#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer (positive or negative): ");
    scanf("%d", &a);
    if (a > 0) {
      printf("The nubmber %d is positive", a);
      if (a %2 == 0)
        printf("\nThe number is even");
      else
        printf("\nThe number is odd");
    }
    else if (a < 0)
      printf("The number %d is negative", a);
    else
        printf("The number %d is zero", a);
    
    return 0;
}

/*Enter an integer (positive or negative): 355
The nubmber 355 is positive
The number is odd

=== Code Execution Successful ===


Enter an integer (positive or negative): -48
The number -48 is negative

=== Code Execution Successful ===*/
