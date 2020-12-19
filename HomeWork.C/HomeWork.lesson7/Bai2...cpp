#include <stdio.h>
int main(){
	int n;
	printf(" nhap so luong phan tu trong mang n\n");
	scanf("%d", &n);
	int array[n];
	int x, i=1;
	do{
		printf(" nhap gia tri thu %d: ", i);	
		nhay:
		scanf("%d", &array[i]);
		int j=0;
		for(j=0;j<i; j++ ){
			if(array[i]==array[j]){
				printf(" nhap lai gai tri  thu %d: ", i);
				goto nhay;
			}	
		}
		i++;
	}while(i<=n );
} 

