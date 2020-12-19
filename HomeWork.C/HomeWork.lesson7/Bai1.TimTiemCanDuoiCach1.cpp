#include <stdio.h>
int main(){
	int n;
	printf(" nhap so luong phan tu trong mang n\n");
	scanf("%d", &n);
	int array[n];
		for(int i=0; i<n; i++){
			printf(" nhap phan tu thu %d : ",i);
			scanf("%d", &array[i]);
			
		}
	int j,x, k=0;
	printf(" nhap gia tri x");
	scanf(" %d", &x);
	for(int i=0; i<n; i++){

		if(array[i]<x){
			j=array[i];
			k++;
			break;
		}
	}
	for(int i; i<n; i++){
		if(array[i]<x&&array[i]>j){
			j= array[i];
		}
		
	}
	if(k==0) {
	printf("khong co gia tri nao trong mang nho hon x");
	}else { 
	
	printf(" gia tri tiem can duoi cua X la: %d", j);	
	}

}

