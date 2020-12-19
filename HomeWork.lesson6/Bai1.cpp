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
	int k=0;
	for(int i=n-1; i>=0;i--){
		if(array[i]%2!=0){
			printf(" so le cuoi cung la:  %d", array[i]);
			k=1;
			break;
		}
	}
	if(k==0) printf(" mang khong co so le nao");
	
	
	


}

