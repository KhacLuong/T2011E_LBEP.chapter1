#include <stdio.h>
int main(){
	int a,b,c;
	printf(" nhap vao 3 so a,b,c: ");
	scanf(" %d %d %d", &a, &b, &c);
	if(a>=b&&a>=c){
		printf(" GTLN la: %d", a);
	}else if(b>=a&&b>=c){
		printf("GTLN la: %d", b);
		
	}else{
		printf("GTLN la: %d", c);
	}


}

