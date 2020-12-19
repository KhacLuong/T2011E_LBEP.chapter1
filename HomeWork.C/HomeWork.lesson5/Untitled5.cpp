#include<stdio.h>
int main(){
	int a,b,i;
	printf(" nhap vao 2 gia tri a va b:   ");
	scanf(" %d %d", &a,&b);
	for(i=a; true; i++){
		if(i%a ==0 && i%b==0){
			break;
		}
	}
	printf(" BCNN cua a,b la %d", i);
	
}
