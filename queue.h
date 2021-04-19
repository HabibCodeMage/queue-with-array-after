#pragma once
#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;
class queue
{
private:
	int array[10];
	int rear,
		front;
public:
	queue() :array{ {},{},{},{},{},{},{},{},{},{} }, rear(-1), front(-1)
	{}
	bool empty()
	{
		return (rear == -1 && front == -1);
	}
	void qinser(int value)
	{
		if (rear == 9)
			cout << "QUEUE IS FULL\n";
		else if (empty())
		{
			++rear, ++front;
			array[rear] = value;
		}
		else
		{
			++rear;
			array[rear] = value;
		}


	}
	void qdelete()
	{
		if (empty())
			cout << "EMPTY QUEUE\n";
		++front;

	}
	void qdisplay()
	{
		if (!empty())
		{
			cout << "the queue is:";
			for (size_t i = front; i < this->rear + 1; i++)
			{
				cout << array[i] << "  ";
			}
			cout << endl;
			return;
		}
		cout << "EMPTY QUEUE\n";
	}
	int getfront()
	{
		if (!(front == -1))
			return array[front];
	}

};
#endif // !QUEUE_H
