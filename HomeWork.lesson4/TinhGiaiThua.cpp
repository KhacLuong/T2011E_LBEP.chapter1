#include<stdio.h>
//#include<math.h>
int main(){
	int x=1;
	int n;
	printf(" nhap gia tri n:  ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		
		x = x*i;
	}
	printf("Gia tri giai thua cua n la: %d", x);
}
