#pragma warning(disable:4996)
#include <cstdio>
#include <cstring>

using namespace std;

long long int stringToInt(char * string, int len)
{
	long long int ans = 0;
	long long int count = 1;
	for (int i = len - 1; i >= 0; i--)
	{
		ans += count * (int)(string[i] - '0');
		count *= 10;
	}

	return ans;
}
int main(void)
{
	char n1[15], n2[8], n3[15], n4[8];
  
	scanf("%s %s %s %s", n1, n2, n3, n4);
  
	strcat(n1, n2);
	strcat(n3, n4);
	printf("%lld", stringToInt(n1, strlen(n1)) + stringToInt(n3, strlen(n3)));
  
  return 0;
}
