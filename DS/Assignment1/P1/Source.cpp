
#include<iostream>
using namespace std;

struct stackstruc {
	int top;
	int *s;
	int size;
};

class stack
{
	struct stackstruc st;
public:
	stack()
	{
		st.top = -1;
		st.s = NULL;
		st.size = 0;
	}

	~stack() {
		delete st.s;
	}
	void push(int);
	int pop();
	int peek();
	bool IsEmpty();
	bool IsFull();
	void display();
	void getsize(int);
};

void stack::getsize(int n)
{
	st.size = n;
	st.s = new int[n];
}

bool stack::IsFull()
{
	return(st.top == (st.size - 1));
}

bool stack::IsEmpty()
{
	return(st.top == -1);
}

void stack::push(int ele)
{
	if (!IsFull())
	{
		st.top++;
		st.s[st.top] = ele;
	}
	else
		cout << "Stack is Full" << endl;
}

int stack::pop()
{
	int x = -999;
	if (!IsEmpty())
	{
		x = st.s[st.top];
		st.top--;
	}
	else
		cout << "Stack Empty";
	return x;
}
int stack::peek()
{
	int x = -999;
	if (!IsEmpty())
	{
		x = st.s[st.top];
	}
	else
		cout << "Stack Empty";
	return x;
}

void stack::display()
{
	for (int i = 0; i < st.top; i++)
	{
		cout << st.s[i] << endl;
	}

}


int main()
{
	stack s;
	int n, i;
	cout << "Enter size of stack" << endl;
	cin >> n;
	s.getsize(n);
	for (i = 1; i < 15; i = i * 2)

	{
		s.push(i);
	}
	cout << "Top of element at this moment" << s.peek() << endl;
	cout << "Popped element:" << s.pop() << endl;
	s.display();

	system("Pause");
	return 0;
}
