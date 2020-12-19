#include<stdio.h>
int main(){
	
	int n;
	printf(" nhap gia tri n:  ");
	scanf(" %d", &n);
	if(n<=2)printf("khong co  so chan nao be hon n");
	else{
	
		
		
		printf(" cac so chan be hon n la");
		for(int i =1; i<n; i++){
			if(i%2==0){
				printf(" %d", i);
			}
	
		}
	}
}	
