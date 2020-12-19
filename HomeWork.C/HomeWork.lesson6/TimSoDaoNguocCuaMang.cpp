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
	for(int i=0; i<n; i++){
		int x=0;
		for( true ; array[i]!=0; true){
			x= x*10 + array[i]%10;
			array[i]/=10;
		}
		printf(" %5d", x);
	}

}

