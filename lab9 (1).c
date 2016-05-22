#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int mat2;
int mat1;
int addResult;
int sum = 0;
int mulresult;

struct Matrix {
	int row;
	int column;
	int **array;

};

struct Matrix A;
struct Matrix B;

void initMatrix(struct Matrix *A, int rows, int columns);
void addMatrix(int result, struct Matrix *ptr1);
void mulMatrix(struct Matrix *A, struct Matrix *B);
void init_myStruct(struct Matrix *ptr2, int row, int col);

int main(){
	
	Matrix A;
	Matrix B;
	
	initMatrix(&A, 2, 2);
	initMatrix(&B, 2, 2);
	mulMatrix(&A, &B);


	getchar();
	return 0;

}





void initMatrix(struct Matrix *A, int rows, int col){

	Matrix array1;
	A->row = rows;
	A->column = col;
	A->array = malloc(rows * sizeof(int *));
	for (int i = 0; i < rows; i++)
	{
	
		for (int j = 0; j < col ; j++)
			A->array[i][j] = 1;
	}
	

}




void mulMatrix(struct Matrix *A, struct Matrix *B) {

	int r1 = A->row;
	int c1 = A->column;
	int multiply[50][50];

	int r2 = B->row;
	int c2 = B->column;
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			sum = 0;
			for (int k = 0; k < r2; k++) {
				sum = sum + (A->array[i][k]) * (B->array[k][j]);

			}
			multiply[i][j] = sum;
		}
			
	}

	for(int i = 0; i < r1; i++) {
		for (int j = 0; j < r2; j++)
			printf("%d\t", multiply[i][j]);

		printf("\n");
	}
}



void init_myStruct(Matrix* ptr, int row, int col){

	ptr->row = row;
	ptr->column = col;
}


