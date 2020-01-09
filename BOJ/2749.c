#include <stdio.h>

int main(void)
{
	long long n;
	int temp, fibo[2] = { 0, 1};
	scanf("%lld", &n);
    n = n % 1500000;
    for (int i = 0; i < n; i++)
    {
        temp = fibo[0];
	    fibo[0] = fibo[1];
	    fibo[1] = (temp + fibo[1]) % 1000000;
    }
    printf("%d\n", fibo[0]);

	return 0;
}
