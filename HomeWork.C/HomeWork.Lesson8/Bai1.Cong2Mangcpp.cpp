#include <stdio.h>
int main(){
	int m,n;
	printf(" nhap 2 gia tri m va n:  ");
	scanf("%d  %d", &m, &n);
	int array[m][n];
	int array1[m][n];
	int array2[m][n];
	printf(" nhap cac gia  tri mang array1\n");
	for(int i=0; i<m; i++){
		for(int j =0; j<n; j++){
			printf(" nhap gia tri array1[%d][%d]:  ", i,j);
			scanf("%d", &array1[i][j]);
		}
	}
	for(int i=0; i<m; i++){
		for(int j =0; j<n; j++){
			printf(" nhap gia tri array2[%d][%d]:  ", i,j);
			scanf("%d", &array2[i][j]);
		}
	}
	for(int i =0; i<m; i++){
		for(int j =0; j<n; j++){
			array[i][j]= array1[i][j] + array2[i][j];
		}
	}
	printf(" mang sau khi cong la: array[%d][%d ]\n ", m, n);
	for(int i=0;i<m; i++){
		printf("\n");
		for(int j=0; j<n; j++){
			printf(" %3d", array[i][j]);
		}
	}

}

