#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	float a,b,c;
		printf("kiem tra xem co phai tam giac khong...???\n");
		printf("nhap vao gia tri 3 canh a, b, c :  ");
		scanf("%f   %f   %f", &a, &b, &c );
			if(a+b>c&&a+c>b&&b+c>a&&a>0&&b>0&&c>0){
				float p = a+b+c;
					printf("day la mot tam giac co chu vi va dien tich la: (P,S) = (%.0f, %0.3f)",p,sqrt(p*(p-a)*(p-b)*(p-c)));
			} 
		
			else{
					printf("day khong phai la tam giac");
			}

}


