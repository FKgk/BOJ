#include <cstdio>
#include <vector>
using namespace std;
struct Data
{
	int node;
	int cost;
	Data(int a = 0, int b = 0) :node(a), cost(b) {}
};
vector<Data> v[100001];

Data farNode(Data node, int prenode)
{
	Data temp, max = node;
	for (vector<Data>::size_type i = 0; i < v[node.node].size(); i++)
	{
		if (v[node.node][i].node != prenode)
		{
			temp = farNode(Data(v[node.node][i].node, 
				v[node.node][i].cost + node.cost), node.node);
			if (temp.cost > max.cost)
				max = temp;
		}
	}
	return max;
}

int main(void)
{
	int n, pivot, node, cost;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &pivot);
		scanf("%d", &node);
		while (node != -1)
		{
			scanf("%d", &cost);
			v[pivot].push_back(Data(node, cost));

			scanf("%d", &node);
		}
	}

	Data BigNode = farNode(Data(1, 0), 0);
	BigNode = farNode(Data(BigNode.node, 0), 0);
    printf("%d\n", BigNode.cost);

	return 0;
}
