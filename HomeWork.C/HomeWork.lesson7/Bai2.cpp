#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++){
		int x,f;
		do{
			f=0;
			printf(" nhap vao gia tri Array[%d]: ", i);
			scanf(" %d", &x);
			for(int j=0; j<i; j++){
				if( x==array[j]){
					f=1;
					break;
				}
			}
			
			
		}while(f==1);
		array[i]=x;
	}
	printf("mang sau khi nhap la: ");
	for(int i=0; i<n; i++){
		printf("%5d", array[i]);
	}


}

