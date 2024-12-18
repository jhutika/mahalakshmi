# include <stdio.h>
int main() {
  int number_of_terms;
  // initialize first and second terms
  int fibonacci_1 = 0, fibonacci_2 = 1;

  // initialize the next term (3rd term)
  int fibonacci_3 = fibonacci_1 + fibonacci_2;

  // get no. of terms from user
  printf("Enter the number of terms (greater than 2): ");
  scanf("%d", &number_of_terms);

  // print the first two terms
  printf("Fibonacci Series: \n%d \n%d", fibonacci_1, fibonacci_2);

  // print 3rd to nth terms
  /*for (int i = 3; i <= number_of_terms; i++) {
    printf("\n%d", fibonacci_3);
    fibonacci_1 = fibonacci_2;
    fibonacci_2 = fibonacci_3;
    fibonacci_3 = fibonacci_1 + fibonacci_2;
  }*/
  int i = 3;
  /*while (i <= number_of_terms) {
    printf("\n%d", fibonacci_3);
    fibonacci_1 = fibonacci_2;
    fibonacci_2 = fibonacci_3;
    fibonacci_3 = fibonacci_1 + fibonacci_2;
    i++;
  }*/
  do {
   printf("\n%d", fibonacci_3);
    fibonacci_1 = fibonacci_2;
    fibonacci_2 = fibonacci_3;
    fibonacci_3 = fibonacci_1 + fibonacci_2;
    i++;   
  } while (i <= number_of_terms);

  return 0;
}
/*Enter the number of terms (greater than 2): 56
Fibonacci Series: 
0 
1
1
2
3
5
8
13
21
34
55
89
144
233
377
610
987
1597
2584
4181
6765
10946
17711
28657
46368
75025
121393
196418
317811
514229
832040
1346269
2178309
3524578
5702887
9227465
14930352
24157817
39088169
63245986
102334155
165580141
267914296
433494437
701408733
1134903170
1836311903
-1323752223
512559680
-811192543
-298632863
-1109825406
-1408458269
1776683621
368225352
2144908973

=== Code Execution Successful ===*/
