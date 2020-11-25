#include <stdio.h> 
#include <conio.h>
#include <math.h>
// bài bap nhap vao 3 so tim so nho nhat
int main(){
	
	float a,b,c;
	printf("input a = ");
	scanf("%f", &a);
	printf("input b = ");
	scanf("%f", &b);
	printf("input c = ");
	scanf("%f", &c);
/*	if(a<=b&&a<=c){
		printf("Min = %f\n", a);
	}else{
		if(b<=c){
			printf("Min =  %f\n", b);
		}else{
			printf("Min =  %f\n",c);
		}
		
	}*/
	// Giai phuong trinh bac 2
	printf("Giai phuong trinh bac 2\n");
	if (a==0){
		float x = -c/b;
		printf("phuong trinh co 1 nghiem:\n x= %.2f", x);
	}
	
	else{
		
	float  x1, x2;
	float d = (b*b - 4*a*c);
	if (d<0){
		printf("phuong trinh vo nghiem");
	}
	
	else{
		    if(d==0){
			x1 = (-b/(2*a));
			printf("phuong trinh co nghiem kep\n");
			printf("x1 = x2 =  %.2f", x1);	
		}
		
		else{
			x1 = (-b+sqrt(d))/(2*a);
			x2 = (-b-sqrt(d))/(2*a);
			printf("phuong trinh co 2 nghiem phan biet\n");
			printf("(x1 = %.2f, x2 = %.2f)", x1, x2);
		}
	}

	}
	
	
	getchar();
}


