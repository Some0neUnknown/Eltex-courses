#include <stdio.h>
#define N 5



int main() {
	int matrix[N][N];
	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = j+1 + (N * i);
			printf("%d " " ", matrix[i][j]);
		}
		
		printf("\n");
	}
	
}
