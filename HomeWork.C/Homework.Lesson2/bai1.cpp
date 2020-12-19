#include<stdio.h> 

int main(){
	int a;
	printf (" nhap vao gia tri a : ");
	scanf ("%d", &a);
	if(2<=a&&a<=7){
		printf("Day la thu:  %d", a);
		
	}else{
		if (a==8){
			printf("Day la chu nhat");
		}else{
			printf(" day khong phai la ngay trong tuan");
		}
		
	}
	getchar();
}

