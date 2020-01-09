#include <stdio.h>

int n[1000002] = { 0, };
int ml, mr, p,temp;
void swap(int a, int b);
void sort(int *arr,  int lt, int rt);

void sort(int *arr, int lt, int rt) // a는 왼쪽, b는 오른쪽, c는 가운데
{
	ml = lt;
	mr = rt;
	p = (lt + rt) / 2;
	p = arr[p];
	while (ml <= mr)
	{
		while (arr[ml] < p)
		{
			ml++;
		}
		while (arr[mr] > p)
		{
			mr--;
		}
		if (ml <= mr)
		{
			swap(ml, mr);
			ml++;
			mr--;
		}
	}
	if (lt < mr)
	{
		sort(n, lt, mr);
	}
	if (rt > ml)
	{
		sort(n, ml, rt);
	}

}

void swap(int a, int b)
{
	temp = n[a];
	n[a] = n[b];
	n[b] = temp;
}

int main(void)
{
	int c;
	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		scanf("%d", &n[i]);
	}
	sort(n,0, c-1);
	for (int i = 0; i < c; i++)
	{
		printf("%d\n", n[i]);
	}
  
  return 0;
}
