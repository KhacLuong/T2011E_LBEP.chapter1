#include <stdio.h>
int main(){
	int n;
	printf("Nhap gioi han tren cua so fibonasi can tim n=");
	scanf("%d",&n);
	if(n<=0){
		printf("So fibonasi can tim la: 0");
	}else if(n<=2){
		printf(" so fibonasi can tim la:  1");
	}else{
		int x=0,y=1,z=1;
		for(int i=3;true;i++){
			
			x=y;
			y=z;
			
			z = x+y;
		if(z>n){
				break;
			}
		}
		printf("So fibonasi can tim la %d",y);	
	}
	

	
		
	}


