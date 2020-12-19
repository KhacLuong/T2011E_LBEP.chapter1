#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang array[n] ");
	scanf("%d", &n);
	int array[n];
	for(int i=0; i<n; i++){
		
		printf(" nhap phan tu thu %d: ", i);
		scanf(" %d",&array[i]);
	}
	int max = 0;
	for(int i=0; i<n;i++){
		if(array[i]> max){
			max= array[i];
		}
	}
	int min = max;
	if(min == 0){
		printf(" khong ton tai so duong trong mang");
	}else{
		for(int i =0; i<n; i++){
			if(array[i]<min&&array[i]>0){
				min = array[i];
			}
		}
		printf( " so duong nho nhat trong mang array[n]  la: %d", min );
	}


}

