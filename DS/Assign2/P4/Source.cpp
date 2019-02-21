#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

class List
{
	struct node *head;
public:
	List()
	{
		head = NULL;

	}
	~List();
	void push(int ele);
	int pop();
	int peek();
	void forward_travel();
};
void List::push(int ele)
{
	struct node *temp;
	temp = new node;
	temp->data = ele;
	temp->next = head;
	head = temp;
}
int List::pop()
{

	int item = -999;

	if (head != NULL)
	{
		struct node* curr = head;
		head = head->next;
		item = curr->data;
		delete curr;
	}
	else
		cout << "Empty List" << endl;
	return item;
}
int List::peek()
{
    int item = -999;

	if (head != NULL)
	{
		
		item = head->data;
	}
	else
		cout << "Empty List" << endl;
	return item;
}
void List::forward_travel()
{
	struct node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;

	}

}
List::~List()
{
	struct node* curr;
	while (head != NULL)
	{
		curr = head;
		head = curr->next;
		delete curr;
	}
	cout << "All the nodes are deleted";
}

int main()
{
	List l1;
	int i, r;
	cout << "Enter 5 elements to push into stack:" << endl;
	for (i = 1; i <= 5; i++)
	{
		cin >> r;
		l1.push(r);
	}

	cout << "Top of stack:" << l1.peek()<<endl;
	l1.forward_travel();
	cout << "1st element popped out:" << l1.pop()<<endl;
	cout << "2nd element popped out:" << l1.pop()<<endl;
		l1.forward_travel();
		system("Pause");
		return 0;
}