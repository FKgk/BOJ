#include <stdio.h>

int main(void) 
{
	int ansHeight; // 가져가야 할 높이
	int treeCount; // 나무 개수
	long long int getHeight; // 가져가는 높이
	int maxTreeHeight = 1; // 가장큰 나무 높이
	int cutTree; // 자를 기준 나무 높이
	int sub = 0; // 자를 기준 나무 높이 이전단계 꺼
	int down, up;
	int treeHeight[1000001];// 각각의 나무 높이 입력 받을 배열 생성
	scanf("%d %d", &treeCount, &ansHeight); // 나무 개수, 가져가고 싶은 나무 총 길이

	
	
	for (int i = 0; i < treeCount; i++)
	{
		scanf("%d", &treeHeight[i]);
		if (treeHeight[i] > maxTreeHeight) 
            maxTreeHeight = treeHeight[i];
	}

	down = 0;
	up = maxTreeHeight;

	while (down <= up) 
	{
		cutTree = (down + up) / 2;

	    getHeight = 0;
	    for (int ans, i = 0; i < treeCount; i++)
	    {
		    ans = treeHeight[i] - cutTree;
		    if (ans > 0) getHeight += ans;
	    }
		if (getHeight >= ansHeight)
		{
			if (sub < cutTree) 
                sub = cutTree;
			down = cutTree + 1;
		}
		else
		{
			up = cutTree - 1;
		}

	}
	printf("%d", sub);
}
