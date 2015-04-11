#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ��������� ������ʼλ�� */
int Maxsum_location(int * arr, int size, int *start, int *end)
{
	int i;
	int maxSum = -99999999;
	int sum = 0;
	int curstart = *start;  /* curstart��¼ÿ�ε�ǰ��ʼλ�� */
	for(i = 0; i < size; ++i)
	{
		if(sum < 0)
		{
			sum = arr[i];
			curstart = i;     /* ��¼��ǰ����ʼλ�� */
		}
		else
			sum += arr[i];
		if(sum > maxSum)
		{
			maxSum = sum;
			*start = curstart; /* ��¼�����������������ʼλ�� */
			*end = i;
		}
	}
	return maxSum;
}

int main()
{
	int n, i, start, end, sum, *array;
	while(scanf("%d", &n) != EOF)
	{
		if(n == 0)
			return;

		array = (int *)malloc(n * sizeof(int));
		for(i = 0;i < n;i++)
			scanf("%d", &array[i]);
		start = 0;
		end = n - 1;
		sum = Maxsum_location(array, n, &start, &end);
		printf("%d %d %d\n", sum, array[start], array[end]);

		free(array);
	}
	return 0;
}