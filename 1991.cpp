#include <cstdio>
#include <vector>
using namespace std;
int n[32][2];
void preorder(int x)
{
	if (x == 0)
		return;
	printf("%c", x  + 'A' - 1);
	preorder(n[x][0]);
	preorder(n[x][1]);
	
	return;
}
void inorder(int x)
{
	if (x == 0)
		return;
	inorder(n[x][0]);
	printf("%c", x + 'A' - 1);
	inorder(n[x][1]);

	return;
}
void postorder(int x)
{
	if (x == 0)
		return;
	postorder(n[x][0]);
	postorder(n[x][1]);
	printf("%c", x + 'A' - 1);

	return;
}

int main(void)
{
	int N, i = 1;
	char ch;
	scanf("%d", &N);
	while(N--)
	{
		scanf(" %c", &ch);
		i = ch - 'A' + 1;
		scanf(" %c", &ch);
		if (ch == '.')
			n[i][0] = 0;
		else
			n[i][0] = ch - 'A' + 1;
		scanf(" %c", &ch);
		if (ch == '.')
			n[i][1] = 0;
		else
			n[i][1] = ch - 'A' + 1;
	}

	preorder(1);
	printf("\n");
	inorder(1);
	printf("\n");
	postorder(1);
	printf("\n");

	return 0;
}
