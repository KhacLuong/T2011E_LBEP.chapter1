#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	int P;
	float P1;
	float S;
	
	do{
	printf(" nhap 3 camh cua 1 tam giac:  ");
		scanf(" %d  %d  %d", &a,&b,&c);
		if(!(a>0&&b>0&&c>0&&a+b>c && a+c>b && b+c>a))
		{
			printf(" ban nhap sai, yeu cau nhap  lai dung 3 canh tam giac");
		}
	}while(!(a>0&&b>0&&c>0&&a+b>c && a+c>b && b+c>a));
	 
	 P = a+b+c;
	 P1= (float)P/2;
	 S = sqrt(P1*(P1 -a)*(P1-b)*(P1-c));
	 printf(" chu vi tam giac la: %d", P );
	 printf(" Dien tich tam giac la:  %.3f", S);

	
}
