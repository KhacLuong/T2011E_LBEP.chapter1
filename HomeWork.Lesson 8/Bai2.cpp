#include <stdio.h>
int main(){
	int m,n;
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
	int Sum =0;
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			if(i==j){
			
			Sum =Sum + array[i][j]+ array[m-1-i][m-1-j];
			}
		}
	}
	printf(" tong gia tri cua 2 duong cheo la: %d", Sum);

}

