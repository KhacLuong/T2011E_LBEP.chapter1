#include <stdio.h>
#include <math.h>
bool KTra3CanhTamGiac(int a, int b, int c){
	return a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a;	
}
int TinhChuViTamGiac(int a, int b, int c){
	if(KTra3CanhTamGiac(a,b,c))
		return a+b+c;
	return 0;
}
float TinhDienTichTamGiac(int a, int b, int c){
	if(KTra3CanhTamGiac(a,b,c)){
		float p = 	(float)TinhChuViTamGiac(a,b,c)/2;
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}
	return 0;
}
int main(){
	int a,b,c;
	printf(" nhap  ba so nguyen duong cho do dai ba canh cua mot tam giac a,b,c: ");
	scanf("%d %d %d", &a, &b, &c);
	float S =TinhDienTichTamGiac(a,b,c);
	if(S==0){
		printf(" ba so a,b,c khong phai la do dai ba canh cua mot tam ");
	}else{
		printf(" Dien tich cua tam giac la: %.3f", S);
	}
	
	
}




