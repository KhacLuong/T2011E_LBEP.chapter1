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
	int sum =0;
	
	for(int i=0, j=0; i<n;i++){
		if(array[i]>0){
			j+=array[i];
			if(j>sum){
				sum=j;
			}
		}else{
			j=0;
		}
	}
	printf(" chuoi cac so duong co tong lon nhat la:  %d",sum);


}

