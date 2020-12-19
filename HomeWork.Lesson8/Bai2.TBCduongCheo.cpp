#include <stdio.h>
int main(){
	int m;
	printf(" nhap  gia tri m:   ");
	scanf("%d", &m);
	int array[m][m];
	
	printf(" nhap cac gia  tri mang array\n");
	for(int i=0; i<m; i++){
		for(int j =0; j<m; j++){
			printf(" nhap gia tri array[%d][%d]:  ", i,j);
			scanf("%d", &array[i][j]);
		}
	}
	int d1=0, d2=0;
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
		
			if(i==j){
				d1 +=array[i][j];
			}
			if(i+j==m-1){
				d2 +=array[i][j];
			}
		}
	}
	printf(" TBC cua duong cheo d1: %f\n", (float)d1/m);
	printf(" TBC cua duong cheo d2: %f", (float)d2/m);
}


