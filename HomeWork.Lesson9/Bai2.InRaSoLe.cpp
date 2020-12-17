#include <stdio.h>
void inPutArray(int arr[], int n){
	for(int i=0; i<n; i++){
		printf(" nhap vao gia tri thu %d: ", i);
		scanf("%d", &arr[i]);
	}
}
void outPutArray(int arr[], int n){
	printf("\n mang sau khi nhap la: ");
	for(int i=0; i<n; i++){
		printf("%3d", arr[i]);
	}
}
void inRaSoLe(int arr[], int n){
	int j=0;
	printf("\n cac so le trong mang la: ");
	for(int i=0; i<n; i++){
		if(arr[i]%2!=0){
			printf(" %3d", arr[i]);
			j++;
		}
	}
	if(j==0)
		printf(" mang khong co so le nao ca");
}
int main(){
	int n;
	int array[n];
	printf(" nhap vao gia tri n: ");
	scanf("%d", &n);
	inPutArray(array, n);
	outPutArray(array, n);
	inRaSoLe(array, n);

}

