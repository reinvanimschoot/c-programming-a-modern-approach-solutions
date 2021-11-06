#include <stdio.h>

int main(void)
{
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n13, n12, n14, n15, n16;

  printf("Enter numbers from 1 to 16 in any order:\n");

  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n13, &n12, &n14, &n15, &n16);

  printf("\n%2d %2d %2d %2d\n", n1, n2, n3, n4);
  printf("%2d %2d %2d %2d\n", n5, n6, n7, n8);
  printf("%2d %2d %2d %2d\n", n9, n10, n11, n13);
  printf("%2d %2d %2d %2d\n", n12, n14, n15, n16);

  printf("\nRow sums: %d %d %d %d", (n1 + n2 + n3 + n4), (n5 + n6 + n7 + n8), (n9 + n10 + n11 + n12), (n13 + n14 + n15 + n16));
  printf("\nColumn sums: %d %d %d %d", (n1 + n5 + n9 + n12), (n2 + n6 + n10 + n14), (n3 + n7 + n11 + n15), (n4 + n8 + n12 + n16));
  printf("\nDiagonal sums: %d %d", (n1 + n6 + n11 + n16), (n12 + n10 + n7 + n4));

  return 0;
}