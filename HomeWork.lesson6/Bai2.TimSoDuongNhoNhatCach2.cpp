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
	int x=0;
	// tim so duong dau tien
	for(int i=0; i<n; i++){
	
		if(array[i]>0){
			x = array[i];
			break;
		}
	}
	// tim so duong nho nhat
	if(x==0) {
		printf(" mang ko co so duong nao ca");
	}else{
		for(int i=0; i<n; i++){
			if(array[i]>0 && array[i]<x){
				x= array[i];
			}
		}
		printf(" so duong nho nhat trong mang la:  %d ", x);
	}
	

}


