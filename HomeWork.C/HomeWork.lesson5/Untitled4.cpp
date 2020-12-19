#include<stdio.h>
int main(){
	int a,b,i;
	printf(" nhap vao 2 gia tri a va b:  ");
	scanf(" %d %d", &a, &b);
	for( i=b; i>0; i--){
		if ( a%i==0 && b%i ==0){
			break;
		}
		
	}
	printf(" UCLN cua a,b la:  %d", i);
	
}
