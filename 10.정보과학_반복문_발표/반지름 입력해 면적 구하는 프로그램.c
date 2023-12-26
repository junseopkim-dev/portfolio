#include <stdio.h>
int main(){
	float R, S;
	printf("반지름을 입력해주세요.(단위 : m)\n");
	scanf("%f",&R);
	S=R*R*3.141592;
	printf("반지름 %fm인 원의 넓이는 %f㎡입니다.",R,S);
}
