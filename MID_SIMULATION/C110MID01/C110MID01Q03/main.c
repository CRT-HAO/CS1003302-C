#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>


//10 15 23 15 55 75 55 15 55 11 12
int main()
{
	int arr[10], ar[10] = { 0 }, a = 0, t,sum=0;
	
	for (int i = 0; i < 10 - 1; i++)
	{
		scanf_s("%d ", &arr[i]);
	}
	scanf_s("%d", &arr[10 - 1]);
	bool isrepeat = false;
	for (int i = 0; i < 10; i++)
	{
		isrepeat = false;
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j] && i != j)
			{
				isrepeat = true;
			}
			for (int k = 0; k < a; k++)
			{
				if (arr[i] == ar[k])
				{
					isrepeat = false;
				}
			}
			if (isrepeat)
			{
				ar[a] = arr[i];
				a++;
			}
		}
	}
	for (int i = 0; i < 10; i++) { sum =sum+ar[i]; }
	
	printf("%d", sum);
    return 0;
}