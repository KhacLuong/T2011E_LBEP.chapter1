#include <stdio.h>
int main(){
	int m,n;
	printf(" nhap 2 gia tri m va n:  ");
	scanf("%d  %d", &m, &n);
	int array1[m][n];
	int array2[m][n];
	printf(" nhap cac gia  tri mang array1\n");
	for(int i=0; i<m; i++){
		for(int j =0; j<n; j++){
			printf(" nhap gia tri array1[%d][%d]:  ", i,j);
			scanf("%d", &array1[i][j]);
		}
	}
	printf(" nhap cac gia  tri mang array2\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf(" nhap gia tri array2[%d][%d]:  ", i,j);
			scanf(" %d", &array2[i][j]);
		}
	}
	int Sum = 0;
	for(int i=0; i<m;i++){
		for(int j=0; j<n; j++){
			Sum  = Sum + (array1[i][j] + array2[i][j]);
		}
	}
	printf(" tong cua 2 mang la:  %d", Sum);
}

