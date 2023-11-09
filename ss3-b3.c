
#include<stdio.h>
int main(){
	float toan, van, anh;
	printf("nhap diem mon toan:");
	scanf("%f",&toan);
	printf("nhap diem mon van:");
	scanf("%f",&van);
	printf("nhap diem mon anh:");
	scanf("%f",&anh);
	float average = (toan + van + anh)/3;
	printf ("diem trung binh:%.2f", average);
}
