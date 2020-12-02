#include<stdio.h>
int main(){
	int n;
	int k =0;
	printf(" nhap vao so nguyen n:   ");
	scanf("%d", &n);
	if (n==0){
		printf(" day la so nguye to");
	}else{
		
		for(int i=2; i<n; i++){
			if(n%i == 0){
				k++;
			}
			
		}
		if(k==0){
			printf(" day la so nguyen to");
			
		}else printf( "day khong phai la so nguyen to");
	}
}
