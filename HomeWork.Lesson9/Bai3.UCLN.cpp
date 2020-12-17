#include <stdio.h>
int UCLN(int x, int y){
	while(x*y!=0){
		if(x>y){
			x%=y;
		}else{
			y%=x;
		}
	}
	return x+y;
}
void inRaUCLN(int x, int y){
	if(x==0&&y==0){
		printf(" Khong Tim duoc UCLN cua 0 ");
	}else{
		printf("UCLN cua X va Y la: %d",UCLN(x,y));
	}
}

int main(){
	int x, y;
	printf(" nhap vao 2 gia tri X va Y: ");
	scanf("%d %d", &x, &y);
	inRaUCLN(x,y);
}

