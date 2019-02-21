
#include<iostream>
#include<string>
using namespace std;

struct stackstruc {
	int top;
	char *s;
	int size;
};

class stack
{
	struct stackstruc st;
public:
	stack()
	{
		st.top = -1;
		//strcpy(st.s, "");
		st.size = 0;
	}

	~stack() {
		delete st.s;
	}
	void push(char);
	char pop();
	char peek();
	bool IsEmpty();
	bool IsFull();
	void display();
	void getsize(int);
	void balancing(char *string);
};

void stack::getsize(int n)
{
	st.size = n;
	st.s = new char[n];
	for (int i = 0; i < n; i++)
	{
		st.s[i] = 0;
	}
}

bool stack::IsFull()
{
	return(st.top == (st.size - 1));
}

bool stack::IsEmpty()
{
	return(st.top == -1);
}

void stack::push(char ele)
{
	if (!IsFull())
	{
		st.top++;
		st.s[st.top] = ele;
	}
	else
		cout << "Stack is Full" << endl;
}

char stack::pop()
{
	char x = '\0';
	if (!IsEmpty())
	{
		x = st.s[st.top];
		st.top--;
	}
	else
		cout << "Stack Empty";
	return x;
}
char stack::peek()
{
	char x = '\0';
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

void stack::balancing(char *str)
{
	int i, flag = 0;
	char c, r;
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		switch (c)
		{
		case '{':
		case '[':
		case '(': push(c);
			break;
		case '}':
		case ']':
		case ')': if (!IsEmpty())
		{
			if ((c == '}' && peek() == '{') || (c == ']' && peek() == '[') || (c == ')' && peek() == '('))
			{
				r = pop();
			}
			else
			{
				flag = 1;
				break;
			}

		}
				  else
					  flag = 1;
		default:;
		}
		if (flag == 1)
		{
			break;
		}
	}

	if (!IsEmpty() || flag == 1)
	{
		cout << "Not balanced";
	}
	else
		cout << "Balanced";
}
int main()
{
	stack s;
	char str1[20];
	int n;
	cout << "Enter size of stack" << endl;
	cin >> n;
	s.getsize(n);
	cin >> str1;
	s.balancing(str1);
	system("Pause");
	return 0;
}


