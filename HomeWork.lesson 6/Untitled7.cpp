#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang array[n] ");
	scanf("%d", &n);
	int array[n+1];
	
	for(int i=0; i<n; i++){
		
		printf(" nhap phan tu thu %d: ", i);
		scanf(" %d",&array[i]);
	}
	printf("===========================================================================\n cach 1\n \n \n ");
 
	array[n]=0;
	int k=0;
	int j=0;
	
	for(int i=0; i<n+1;i++){
		if(array[i]>0){
			j++;
		}else { 
			if(k<j){
				k=j;
			}
			j=0;	
		}
	}if(k==0){
		printf(" khong co so duong trong mang");
	}else{
	printf(" so luong cac so duong lien tiep nhieu nhat trong mang la: %d\n",k);
	}
printf("===========================================================================\n cach 2\n \n \n \n ");
 
	 j=0,k=0;
	 for(int i=0; i<n;i++){
	 	if(array[i]>0){
	 		j++;
	 		if(j>k){
	 			k=j;
			 }
		 }else{
		 	j=0;
		 }
	 	
	 }
	 if(k==0){
	 	printf(" khong co so duong trong mang");
	 }else{
	 	printf(" so luong so duong lien tiep nhieu nhat co trong mang la:  %d", k);
	 }
	 


}

