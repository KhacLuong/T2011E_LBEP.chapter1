#include <stdio.h>
int main(){
	int n = 200;
	int S = 0;
// cach 1 dùng ham for	

	
	for(int i=1; i<=n; i +=2){
		S = S + i;
		
	}
	
	printf(" Gia tri tong S = %d\n", S);
	
	
// cach 2 dung ham while	
	int i= 1;
	S =0;
	while(i<=n){
		S= S+i;	
		i+=2;
	}
	printf("Gia tri tong S = %d\n", S);
	
	
	
//=========================== cach 2( cau truc tong quat hon)


	int x = 0;
	for(int i = 0, j =0; i<100; j++){
		if(j%2==1){
			x+=j;
		}
		i++;
	}
	printf("x = %d", x);

}
