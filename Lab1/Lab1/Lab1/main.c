#include<stdio.h>
#include<stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int sum, n;
	char AddChoice;
	printf("1+2+.....+n=?�п�Jn= ");
	scanf("%d", &n);
	scanf("%c", &AddChoice,1);
	fflush(stdin);
	printf("�а��_�ƩM(O)�A���ƩM(E)�A�٬O��ƩM(I)�A�п�ܡG ");
	scanf("%c", &AddChoice,1);
	switch (AddChoice)
	{
	case 'O':
		sum = Odd(n);
		break;
	case 'E':
		sum = Even(n);
		break;
	case 'I':
		sum = TotalSum(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d\n", sum);
	system("pause");
	return 0;
}

int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i += 2)
		total = total + i;
	return total;
}

int Even(int U)
{
	int i, total = 0;
	for (i = 0; i <= U; i += 2)
		total = total + i;
	return total;
}

int TotalSum(int U)
{
	return Odd(U) + Even(U);
}