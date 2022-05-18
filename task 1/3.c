#include <stdio.h>
#include <stdlib.h>
#define N 5
int main() {
  int matrix[N][N];

  for(int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if(j>i){ 
        matrix[i][j] = 1;
        }
      if(j<i){
        matrix[i][j] = 0;
      }
      if(i==j){
        matrix[i][j] = rand()%10;
         }
      printf("%d " " ",matrix[i][j]);
    }
    printf("\n");
  }
  
}
