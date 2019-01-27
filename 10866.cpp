#pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <cstring>

#define maxSize 5000

using namespace std;

class Deque
{
	int queue[maxSize];
	int front, rear;
public: 
	Deque():front(0), rear(0) 
	{}
	bool isEmpty() 
	{ 
		return front == rear;
	}
	int getSize() 
	{
		return (rear - front) >= 0 ? rear - front : maxSize - (front - rear);
	}
	void pushFront(int x)
	{
		queue[front] = x;
		front = (front + maxSize - 1) % maxSize;
	}
	void pushBack(int x)
	{
		rear = (rear + 1) % maxSize;
		queue[rear] = x;
	}
	int popFront()
	{
		if (isEmpty())
			return -1;
		front = (front + 1) % maxSize;
		return queue[front];
	}
	int popBack()
	{
		if (isEmpty())
			return -1;
		int temp = queue[rear];
		rear = (rear + maxSize - 1) % maxSize;
		return temp;
	}
	int getFront()
	{
		if (isEmpty())
			return -1;
		else
			return queue[(front + 1) % maxSize];
	}
	int getBack()
	{
		if (isEmpty())
			return -1;
		else
			return queue[rear];
	}
};

int main(void)
{
	Deque deque;
	int N, num;
	char order[20];

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		scanf("%s", order);
		if (!strcmp(order, "push_front"))
		{
			cin >> num;
			deque.pushFront(num);
		}
		else if (!strcmp(order, "push_back"))
		{
			cin >> num;
			deque.pushBack(num);
		}
		else if (!strcmp(order, "pop_front"))
		{
			cout << deque.popFront() << endl;
		}
		else if (!strcmp(order, "pop_back"))
		{
			cout << deque.popBack() << endl;
		}
		else if (!strcmp(order, "size"))
		{
			cout << deque.getSize() << endl;
		}
		else if (!strcmp(order, "empty"))
		{
			cout << deque.isEmpty() << endl;
		}
		else if (!strcmp(order, "front"))
		{
			cout << deque.getFront() << endl;
		}
		else if (!strcmp(order, "back"))
		{
			cout << deque.getBack() << endl;
		}
	}
    
    return 0;
}
