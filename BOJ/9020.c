#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int decimal[10002] = { 0, }; // 소수 따로 배열에 저장
	int d[170]; // 소수 총 169개 680바이트
	int sum,t,n1, n2,t1, t2;
	int cnt = 0;
    int cntsub;
	int *ans[2]; // 답인 소수 저장할 변수
	int *n; // 정수 입력받을 변수
    
	scanf("%d", &t);

	n = (int *)malloc((sizeof(int) * (t + 1)));
	ans[0] = (int *)malloc((sizeof(int) * (t + 1))); // 작은 소수 저장
	ans[1] = (int *)malloc((sizeof(int) * (t + 1))); // 큰 소수 저장

	for (int i = 2; i < 10000; i++) //0값을 가지면 소수이다.
	{
		if (decimal[i] == 0) 
		{
			d[cnt] = i;
			cnt++;
			int n = 2;
			while (i * n < 10000) // 소수의 배수에 1 저장
			{
				decimal[i*n] = 1;
				n++;
			}
		}
	}
    cntsub = cnt - 1;

	for (int i = 0; i < t; i++) // 가장 작고, 가장 큰 2개 소수 찾기
	{
		cnt = cntsub;
		scanf("%d", &n[i]);
		ans[0][i] = 0;
		while (d[cnt] >= n[i]) cnt--; // 소수 중에서 입력받은 값보다 작은 소수 찾기
		ans[1][i] = cnt;
	}

	for (int i = 0; i < t; i++) // 가장 차이가 적은 소수 찾기
	{
		t1 = ans[0][i];
		t2 = ans[1][i];
		while (t1 <= t2)
		{
			sum = d[t1] + d[t2];
			if (sum > n[i])
			{
				t2--;
			}
			else if (sum < n[i])
			{
				t1++;
			}
			else
			{
				n1 = t1;
				n2 = t2;
				t2--;
			}
		}
        
		ans[0][i] = n1;
		ans[1][i] = n2;
    }
    
	for (int i = 0; i< t; i++)
	{
		printf("%d %d\n", d[ans[0][i]], d[ans[1][i]]);
	}
}
