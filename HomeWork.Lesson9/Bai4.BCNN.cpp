#include <stdio.h>
int BCNN(int x, int y){
	if(x==0||y==0){
		return 0;
	}else{
		for(int i=x; i<=x*y;i+=x ){
			if(i%x==0&&i%y==0)
				return i;
		}
			
	}
	

}
void inRaBCNN(int a, int b){
	if(BCNN(a,b)==0){
		printf("khong ton tai boi cua 0 ");
	}else{
		printf(" BCNN cua X va Y la:  %d", BCNN(a,b));
	}
	
}
int main(){
	int x,y;
	printf(" nhap 2 so X va Y: ");
	scanf("%d %d", &x,&y);
	inRaBCNN(x,y);
		
	}

	




