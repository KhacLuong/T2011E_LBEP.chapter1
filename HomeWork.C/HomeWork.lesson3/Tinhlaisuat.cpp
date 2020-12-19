#include<stdio.h>
int main(){
	int i = 1;
	float n;
	printf(" nhap so tien ngui ngan hang:  ");
	scanf("%f",&n);
	
	
	if (i==1){
		n= n + n*0.08;
		i++;
	}
	if(i==2){
		n= n + n*0.08;
		i++;
	}
	if(i==4){
		n= n + n*0.08;
		i++;
	}
	if(i==4){
		n= n + n*0.08;
		i++;
	}			
	printf(" tong so tien sau 4 nam la: %f", n);
}
