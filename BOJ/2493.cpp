#include <cstdio>
#include <stack>
using namespace std;

stack< pair<int, int> > nums;

int main(void)
{
	int N, num;
    bool check;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
        check = true;
		scanf("%d", &num);
        
        while(nums.empty() == false)
        {
            if(nums.top().first >= num)
            {
                printf("%d ", nums.top().second);
                check = false;
                break;
            }
            nums.pop();
        }
		
        if(check)
            printf("0 ");
        
        nums.push(pair<int, int> (num, i));
	}
    
    return 0;
}
