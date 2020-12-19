#include <stdio.h>
int main(){
	int n;
	printf("nhap vao so nguyen duong khong qua 4 chu so n:");
	scanf("%d", &n);
	
	int x= x*10 +n%10;
	n/=10;
	if(n!=0){
		x= x*10 +n%10;
		n/=10;	
	}
	if(n!=0){
		x= x*10 +n%10;
		n/=10;	
	}
	if(n!=0){
		x= x*10 +n%10;
		n/=10;	
	}
	printf(" so dao nguoc cua n la: %d", x);

}

