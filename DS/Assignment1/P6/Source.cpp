#include<iostream>
using namespace std;

struct strucqueue
{
	int rear, front, *s, size;

};

class CQueue
{
	strucqueue d;

public:
	CQueue()
	{
		d.rear = -1;
		d.front = -1;
		d.s = NULL;
		d.size = 0;
	}
	~CQueue()
	{
		delete d.s;
	}

	void Enque(int);
	int Deque();
	void Display();
	bool IsOverflow();
	bool IsUnderflow();
	void getsize(int);


};


void CQueue::Enque(int ele)
{
	if (!IsOverflow())
	{
		if (d.rear == d.front && d.front == -1)
		{
			d.front = (d.front + 1) % d.size;
		}
		d.rear = (d.rear + 1) % d.size;
		d.s[d.rear] = ele;
	}
	else
		cout << "Queue Overflow" << endl;

}
int CQueue::Deque()
{

	int x = -1;
	if (!IsUnderflow())
	{
		if (d.front == d.rear)
		{
			x = d.s[d.front];
			d.front = d.rear = -1;
		}
		else
		{
			x = d.s[d.front];
			d.front = (d.front + 1) % d.size;
		}
	}
	else
		cout << "Queue Underflow" << endl;
	return x;

}
void CQueue::Display()
{
	int i;
	for (i = d.front; i <= d.rear; i++)
	{
		cout << d.s[i] << endl;
	}
}
bool CQueue::IsOverflow()
{
	return(d.rear == d.size - 1);
}
bool CQueue::IsUnderflow()
{
	return(d.front == -1 && d.rear == -1);
}
void CQueue::getsize(int n)
{
	d.size = n;
	d.s = new int[n];
}

int main()
{
	CQueue q;
	int i, n;
	cout << "Enter size:" << endl;
	cin >> n;
	q.getsize(n);
	for (i = 0; i < 8; i = i + 2)
	{
		q.Enque(i);
	}
	q.Display();
	cout << "Element deleted :" << q.Deque()<<endl;
	q.Display();
	cout << "Element deleted :" << q.Deque()<<endl;
	
	q.Display();
	for (i = 3; i < 8; i = i + 2)
	{
		q.Enque(i);
	}
	q.Display();
	cout << "Element deleted :" << q.Deque()<<endl;
	cout << "Element deleted :" << q.Deque()<<endl;
	q.Display();
	system("Pause");
	return 0;
}
