#include<stdio.h>
#include<stdlib.h>

int main()
{
	int select;
	do {
		system("cls");
		printf("|=================程式選單====================|\n");
		printf("0. 結束程式 \n");
		printf("1. 求兩數之和 \n");
		printf("2. 求一元二次方程式之根\n");
		printf("3. 列印99乘法表\n");
		printf("|=============================================|\n");
		printf("請輸入你的選擇:");
		scanf_s("%d", &select);
		if (select == 0)
		{
			printf("結束程式\n");
			break;
		}
		switch(select)
		{
		case 1:
			int x,y,z;
			printf("Please enter x:");
			scanf_s("%d",&x);
			printf("Please enter y:");
			scanf_s("%d",&y);
			z=x+y;
			printf("x+y = %d \n", z);
			system("pause");
			break;
		case 2:
			float a,b,c,t;
			printf("請依序輸入a, b, c 之值,兩數之間以空格隔開： ");
			scanf_s("%f %f %f",&a,&b,&c);
			t=b*b-4*a*c;
			if (t>0)
				printf("兩相異實根 \n");
			else
			{
				if (t==0)
					printf("相同實根\n");
				else
					printf("共軛虛根\n");
			}
			system("pause");
			break;
		case 3:
			int i,j;
			for (i=1;i<=9;i++)
			{
				for(j=1;j<=9;j++)
				{
					printf("%d*%d=%3d\t",j,i,i*j);
				}
				printf_s("\n");
			}
			system("pause");
			break;
		default:
			printf("Error\n");
			system("pause");
		}
	} while (1);
	system ("pause");
}
