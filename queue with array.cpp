// queue with array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"queue.h"
#include<iostream>
using namespace std;
int main()
{
	queue object;
	int flag (0);
	do
	{
		cout << "Enter the operation to be performed:"
			<< " 1) Enqueue"
			<< " 2) Dequeue"
			<< " 3) Display"
			<< " 4) Front"
			<< " 5) Exit\n";
		cin >> flag; cin.ignore();
		switch (flag)
		{
		case 1:
			int value;
			cout << "Enter value:";
			cin >> value;
			object.qinser(value);
			break;
		case 2:
			object.qdelete();
			break;
		case 3:
			object.qdisplay();
			break;
		case 4:
			cout<<"Front:"<<object.getfront()<<endl;
			break;
		default:
			break;
		}

	} while (flag!=5);
	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
