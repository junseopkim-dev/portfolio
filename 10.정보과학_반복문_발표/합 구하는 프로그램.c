#include <stdio.h>

int main()

{

int count, N, sum = 0;

printf("1~N까지의 합을 구하는 프로그램");

printf("\nN=");

scanf("%d",&N);

for (count = 1; count <= N; count++)

{

sum += count;

}

printf("\n1 ~ %d 까지의 합 = %d \n", N, sum);

}
