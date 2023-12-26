#include <stdio.h>
int main(){
	float C,F;
	printf("섭씨온도를 입력하세요. \n");
	scanf("%f",&C);
	F=C*1.8+32;
	printf("%f℃는 %f℉입니다.",C,F);
} 
