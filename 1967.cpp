#include <iostream>
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
int MaxCostNode(int node)
{
	return -1;
}

int main(void)
{
	int n, pivot, node, cost;

	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		cin >> pivot >> node >> cost;
		v[pivot].push_back(Data(node, cost));
		v[node].push_back(Data(pivot, cost));
	}

	Data BigNode = farNode(Data(1, 0), 0);
	BigNode = farNode(Data(BigNode.node, 0), 0);
	cout << BigNode.cost << endl;

	return 0;
}
