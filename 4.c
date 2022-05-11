#include <stdio.h>
#include <stdlib.h>
#define N 5
int main() {
  int matrix[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      matrix[i][j] = 0;
    }
  }
  matrix[N / 2][N / 2] = N * N;
  int counter = 1;

  for (int k = 1; k <= N / 2; k++) {
    for (int i = k - 1; i < N - k + 1; i++) {
      matrix[k - 1][i] = counter++;
    }
    for (int i = k; i < N - k + 1; i++) {
      matrix[i][N - k] = counter++;
    }
    for (int i = N - k - 1; i >= k - 1; --i) {
      matrix[N - k][i] = counter++;
    }
    for (int i = N - k - 1; i >= k; i--) {
      matrix[i][k - 1] = counter++;
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%3d "
             " ",
             matrix[i][j]);
    }
    printf("\n");
  }
}
