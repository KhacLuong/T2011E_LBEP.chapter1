#include<stdio.h>
int main(){
	int n;
	int S=0;
	printf(" nhap vao gia tri n:   ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(n%i==0){
			S +=i;
		}
	}
	printf(" tong cac uoc cua n la: S = %d", S);
	
	
	
}
