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
		//strcpy(st.s,"empty");
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
	void infixtopostfix(char s[20]);
	int priority(char a);
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

void stack::infixtopostfix(char s[20])
{
	char str1[20];

	int i,j;
	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (isalpha(s[i]))
			str1[j++] = s[i];
		else if (s[i] == '[' || s[i] == '(' || s[i] == '{')
		{
			push(s[i]);
		}
		else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
		{
			while (peek() != '[' && peek() != '(' && peek() != '{')
			{
				s[j++] = pop();
			}
		}
		else if (!IsEmpty())
		{
			while (priority(s[i]) <= peek())
			{
				str1[j++] = pop();
			}
			push(s[i]);
		}
		else
			push(s[i]);
	}
	cout << "infix to postfix conversion:" << str1;
}

int stack::priority(char a)
{
	switch (a)
	{
	case '*':
	case '/': return 3;
		break;
	case '+':
	case '-':return 2;
		break;
	case '[':
	case '(':return 1;

	}
}

int main()
{
	stack s;
	char str[20];
	int n;
	cout << "Enter size of stack" << endl;
	cin >> n;
	s.getsize(n);
	cout << "Enter expression:" << endl;
	cin >> str;
	s.infixtopostfix(str);
    system("Pause");
	return 0;
}
