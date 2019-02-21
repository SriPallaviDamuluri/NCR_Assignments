
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
	void postfixEval(char str[20]);
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


void stack::postfixEval(char str[20])
{
	int i, x, y, sum = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]))
		{
			push(str[i] - '0');
		}
		else
		{
			x = pop();
			y = pop();
			switch (str[i])
			{
			case '^':sum = pow(y, x);
				break;
			case '%': sum = (y%x);
				break;
			case '+': sum = x + y;
				break;
			case '-': sum = (y - x);
				break;
			case '*':  sum = (y*x);
				break;
			case '/': sum = (y / x);
				break;
			default:;
			}
			push(sum);
		}

	}
	cout << "postfix Evaluation:" << pop();
}


int main()
{
	stack s;
	char str[20];
	int n;
	cout << "Enter size of stack" << endl;
	cin >> n;
	s.getsize(n);
	cout << "Enter postfix expression:" << endl;
	cin >> str;
	s.postfixEval(str);
	system("Pause");
	return 0;
}

