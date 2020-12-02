#include <stdio.h>
int main(){
	int n;
	float S =0;
	printf("nhap gia tri n :   ");
	scanf("%d", &n);

	for(int i=1; i<=n;i++){
		
		S = S+1/(float)i;
	}
	printf("Gia tri tong S =  %.3f", S);
}
