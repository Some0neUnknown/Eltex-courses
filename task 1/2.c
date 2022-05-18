#include <stdio.h>

#define N 5

int main() {

  int array[N];
  printf("enter a numbers\n");
  for (int i = 0; i < N; i++) {
    scanf("%d", &array[i]);
  }
  printf("array\n");
  for (int i = 0; i < N; i++) {

    printf("%d "
           "",
           array[i]);
  }
  printf("\n");

  printf("inverse array\n");
  for (int i = N - 1; i >= 0; i--) {

    printf("%d "
           "",
           array[i]);
  }
}
