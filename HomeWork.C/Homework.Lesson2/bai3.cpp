#include<stdio.h> 

int main(){
	int date, month, Nodate = -1, Re;
	printf (" nhap vao gia tri  date/month : ");
	scanf("%d %d", &date, &month);
	if (month==1&&date>0&&date<32){
		Nodate = date; 
	}
	else{
	if (month==2&&date>0&&date<29){
		Nodate = date + 31;
	}
	else{
	if (month==3&&date>0&&date<32){
		Nodate = date + 31 +28;
	}
	else{
	if (month==4&&date>0&&date<31){
		Nodate = date + 31 + 28 + 31;
	}
	else{
	if (month==5&&date>0&&date<32){
		Nodate = date + 31 + 28 + 31+30;
	}
	else{
	if (month==6&&date>0&&date<31){
		Nodate = date+ 31 + 28 + 31+30+31;
	}
	else{
	if (month==7&&date>0&&date<32){
		Nodate = date + 31 + 28 + 31+30+31+30;
	}
	else{
	if (month==8&&date>0&&date<32){
		Nodate = date+ 31 + 28 + 31+30+31+30+31;
	}
	else{
	if (month==9&&date>0&&date<31){
		Nodate = date+31 + 28 + 31+30+31+30+31+31;
	}
	else{
	if (month==10&&date>0&&date<32){
		Nodate = date +31 + 28 + 31+30+31+30+31+31 + 30;
	}
	else{
	if (month==11&&date>0&&date<31){
		Nodate = date +31 + 28 + 31+30+31+30+31+31 + 30 +31;}
	else{
	if (month==12&&date>0&&date<32){
		Nodate = date +31 + 28 + 31+30+31+30+31+31 + 30+31+30;			
	}else{
		printf(" day khong phai 1 ngay trong nam");
		return(0);
	}}}}}}}}}}}}
	Re =  (Nodate-1)%7;
	if(Re==0){
		printf("Hom nay la thu 2");
	}
	if(Re==1){
		printf(" Hom nay la thu 3");
	}
	if(Re==2){
		printf(" Hom nay la thu 4");
	}
	if(Re==3){
		printf(" Hom nay la thu 5");
	}
	if(Re==4){
		printf(" Hom nay la thu 6");
	}
	if(Re==5){
		printf(" Hom nay la thu 7");
	}
	if(Re==6){
		printf(" Hom nay la thu CN");
	}
}
