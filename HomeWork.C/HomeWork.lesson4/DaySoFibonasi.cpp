#include<stdio.h>
int main(){
	int n;
	int s= 0;
	int a=0;
	int b =1;
	int k= 3;
	printf(" nhap vao so  thu n trong day Fibonasi:  ");
	scanf(" %d", &n);
	if(n==1){
	printf(" Gia tri dau tien cua day so fibonasi la: 0");
	}else  if(n==2) printf(" gia tri thu 2 cua day so fibonasi la: 1\n=");
	else {
	while(k<= n){
		s= a+b;
		a = b;
		b = s;
		k++;	
	}
	printf(" gia tri thu %d cua day so fibonasi la: %d\n ", n, s);
	}
	printf("cach 2 =======================================\n");
	
/////////////////////////////////////////////////////////////////////////
	s =  0;
	k =  1;
	a = -1;
	b =  1;
	k =1;
	do{
		s = a +b; 
		a = b;    
		b = s;    
		k ++;     
	}while( k <=n);
	printf(" gia tri thu  %d cua day so fibonasi la:  %d", n, s);
	
	

}
