#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i;
	do
	{
		printf("�п�J���@�Ӿ�ơG ");
		scanf("%d", &a);
		if (a == 1) 
		{
			printf("%d ���O���\n", a);
		}
		if (a == 2)
		{
			printf("%d �O���\n", a);
		}
			for (i = 2; i<a; i++)
			{
				if (a%i == 0)
				{
					
					printf("%d ���O���\n", a);
					break;
				}
				else
				{
					printf("%d �O���\n", a);
				}
				break;
			}
	} while (a>0);
	system("pause");
	return 0;
}