#include <stdio.h>


typedef struct dn
{
	int cnt;
	int number;
	int y;
}dn;
dn point_return(int input);
int ans_retrun(int  number, int y);
int check(int number);
int numberMake(int y, int x);

int main(void)
{
	dn n;
	int input; // 입력값, 출력값

	scanf("%d", &input);
    
	if (input > 1022) printf("-1");
	else if (input == 1022) printf("9876543210");
	else if (input <= 10) printf("%d", input);
	else 
	{
		n = point_return(input);
		//printf("%d %d\n", n.cnt, n.number);

		while (n.cnt != input)
		{
			n.number = ans_retrun(n.number + 1, n.y);
			n.cnt++;
		}
		printf("%d",n.number);
	}
}
dn point_return(int input)
{
	dn v;
	int point[11][11] = { 0, }; // y자릿수이고 x로시작하는 감소하는 수 개수
	int ans = 9;
	for (int i = 0; i < 10; i++) point[1][i] = 1; // 1자릿수 감소하는수

	for (int y = 2; y < 10; y++) // 자릿수
	{
		for (int x = 1; x < 10; x++)
		{
			point[y][x] = point[y][x - 1] + point[y - 1][x - 1];
			if (ans < input)
			{
				ans += point[y][x];
				if (ans >= input)
				{
					v.y = y;
					v.cnt = ans - point[y][x] + 1;
					v.number = numberMake(y, x);
					//printf("y :%3d x : %d \npoint_return : cnt %d  number %d\n",y,x, v.cnt, v.number);
					return v;
				}
			}
		}
	}
}
int ans_retrun(int number, int y)
// number : n.cnt번째 감소하는 수 + 1 y : 자릿수
{
	int ans = number;
	int n1 = 0;
	int n2 = 0;
	int mul = 10;
	int n10;
	int temp;
	int num;
	while ( check(ans) )
	{
		//printf("%5d 는 감소하는 수 가 아니다.\n", ans);
		temp = ans; // 300
		n1 = temp % mul; // 1번째 자리 0
		temp = temp / mul;  // 30
		n2 = temp % mul; // 2번째 자리 0
		n10 = 10; // n2의 자릿수
		while (temp >= 10)
		{
			if (n2 <= n1) // 감소하는 수가 아니다.
			{
				
				num = ans % n10; // n2번쨰 자릿수 미만 숫자들
				// num = 0;
				//printf("%5d = a=%5d + (%d - %d)\n", ans + (n10 - num), ans, n10, num);
				ans = ans + (n10 - num);
				break;
				// number + 10; 310
			}
			n1 = n2;
			temp = temp / mul;
			n2 = temp % mul;
			n10 = n10 * 10;
		}
	}
	//printf("%5d 는 감소하는 수이다.\n", ans);
	return ans;
}
int check(int number)
{
	int n1 = 0;
	int n2 = 0;
	int mul = 10;
	n1 = number % mul; // 1번째 자리
	number = number / mul;
	n2 = number % mul; // 2번째 자리

	while (number > 0 )
	{
		if (n1 >= n2) // 감소하는 수가 아니다
		{
			return 1;
		}
		n1 = n2;
		number = number / mul;
		n2 = number % mul;
	}
	return 0; // 정상적인 while문 종료 감소하는 수이다.
}
int numberMake(int y, int x) // y자리수 x로시작하는 1번째 감소하는 수 반환
{
	int number = 0;
	int n = 0;
	int mul = 1;
	for (int i = 1; i < y; i++)
	{
		number += (n*mul);
		n++;
		mul *= 10;
	}
	number = number + (x * mul);
	//printf("numberMake : number %d \n", number);
	return number;

}
