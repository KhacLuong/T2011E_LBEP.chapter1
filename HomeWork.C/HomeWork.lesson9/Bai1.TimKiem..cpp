#include <stdio.h>
void inPutArray(int array[], int n){
	for(int i=0; i<n; i++){
		printf(" nhap vao gia tri thu %d: ", i );
		scanf(" %d", &array[i]);
	}
}
void outPutArray(int array[], int n){
	printf("\nmang sau khi nhap la:	");
	for(int i=0; i<n; i++){
		printf("%3d", array[i]);
	}
}
void timKiem(int array[], int n, int x ){
	int i;
	for( i=0; i<n; i++){
		if(x==array[i]){
			printf(" %d co trong mang", x);
			break;
		}	
		
	}
	if(i==n) printf("%d khong co trong mang", x);
	
}


int main(){
	int n;
	int array[n];
	int x;
	printf(" nhap gia tri n: ");
	scanf("%d", &n);
	inPutArray(array, n);
	outPutArray(array, n);
	printf("\n nhap gia tri can tim kiem trong mang: ");
	scanf("%d",&x);
	timKiem(array, n,x);


}

