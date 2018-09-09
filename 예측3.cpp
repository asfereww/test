#include <stdio.h>
int main()
{
	int input[10];
	int result[5] = {0, 0, 0, 0, 0};
	int j;
	printf("10개의 나이를 입력하세요 \n");
	for(j = 0; j<10;j++)
	scanf("%d", &input[j]);
	for(j=0; j<10;j++)
	{
		switch(input[j]/10)
		{
			case 1 : result[0]++;break;
			case 2 : result[1]++;break;
			case 3 : result[2]++;break;
			case 4 : result[3]++;break;
			case 5 : result[4]++;break;
		}
	}
	for(j = 0;j<5;j++)
	{
		printf("%d대 : %d\n", 10*(j+1), result[j]);
	}
 } 
