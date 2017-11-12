#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i;
	do
	{
		printf("請輸入正一個整數： ");
		scanf("%d", &a);
		if (a == 1) 
		{
			printf("%d 不是質數\n", a);
		}
		if (a == 2)
		{
			printf("%d 是質數\n", a);
		}
			for (i = 2; i<a; i++)
			{
				if (a%i == 0)
				{
					
					printf("%d 不是質數\n", a);
					break;
				}
				else
				{
					printf("%d 是質數\n", a);
				}
				break;
			}
	} while (a>0);
	system("pause");
	return 0;
}