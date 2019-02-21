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
	void Enque(int);
	int Deque();
	void forward_travel();
};
void List::Enque(int ele)
{
	struct node *temp, *curr = head;
	temp = new node;
	temp->data = ele;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = temp;
	}


}
int  List::Deque()
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
	cout << "Enter 5 elements to insert into Queue:" << endl;
	for (i = 1; i <= 5; i++)
	{
		cin >> r;
		l1.Enque(r);
	}

	cout << endl;
	l1.forward_travel();
	cout << "1st element deleted:" << l1.Deque() << endl;
	cout << "2nd element deleted:" << l1.Deque() << endl;
	l1.forward_travel();
	system("Pause");
	return 0;

}