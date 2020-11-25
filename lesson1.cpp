#include <Stdio.h>
int main(){
	int a;

	
	printf("input a= ");
	scanf("%d",&a);
	
	int b;
	printf("input b=  ");
	scanf("%d",&b);
	
	int c;
	printf("input c= ");
	scanf("%d",&c);
	
	
//	tong hia gia tri
	int d= a + b;
	printf("tong hia gia tri la\n");
	printf("Display  d = %d\n" , d);
	
	
// gia tri lon nhat

	printf("Gia tri lon nhat la\n");
	
	if(a>b){
		printf("max : %d\n", a);
	}else{
		printf("max : %d\n",b);
	}
//	tim so am duong
	if(a>=0){
		if(a==0){
			printf("a = 0\n");
		}else{
			printf("a la so duong\n");
		}
	}else{
		printf("a la so am\n");
	}
	
	
	int max = a;
	if(a>=b&&a>=c){
		printf("GTLN= %d", a);
		
	}else{
		if(b>=c){
			printf("GTLN = $d", b);
		}else{
			printf("GTLN = %d",c);
		}
	}
	
	
	




}
