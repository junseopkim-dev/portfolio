#include <stdio.h>

int main()

{

int count, N, sum = 0;

printf("1~N������ ���� ���ϴ� ���α׷�");

printf("\nN=");

scanf("%d",&N);

for (count = 1; count <= N; count++)

{

sum += count;

}

printf("\n1 ~ %d ������ �� = %d \n", N, sum);

}
