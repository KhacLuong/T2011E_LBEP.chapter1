#include <stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float delta;
	
	printf(" nhap vao 3 so a, b va c:  \n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a==0){
		if(b==0&&c==0){
			printf("PT vo so nghiem");
			
		}else if (b==0 && c!=0 ){
			printf(" PT vo nghiem");
			
		}else{
			printf(" PT co nghiem la X = %.3f", -(float)c/b);
		}
		
		
	}else{
		delta = b*b -4*a*c;
		if (delta < 0){
			printf(" PT vo nghiem");
		}else if( delta ==0){
			printf(" PT co nghiem kep X = %.3f", -(float)b/(2*a));
		}else {
			printf(" PT co 2 nghiem phan biet la\n");
			printf("X1 = %.3f\n", -((float)b -sqrt(delta))/(2*a));
			printf("X2 = %.3f", -((float)b +sqrt(delta))/(2*a));
		}
	}
		
	}	

