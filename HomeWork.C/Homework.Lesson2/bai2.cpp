#include<stdio.h> 

int main(){
	int a, b;
	printf (" nhap vao gia tri a va b: ");
	scanf ("%d %d", &a, &b);
	if(a<b){
		printf(" Gia tri a*b =  %d", a*b);
		
	}else{
		if(b==0){
			printf(" khong ton tai gia tri a/b ");
		}else{
			printf("Gia tri a/b = %.3f ", (float)a/b);
			
		}
	}
}
	
