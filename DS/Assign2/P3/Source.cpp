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
	void selfadjust(int);
	void insert_first(int);
	void forward_travel();

};
void List::selfadjust(int ele) {
	struct node *curr = head,*temp;
	if (head != NULL)
	{
		while (curr->next != NULL && curr->next->data != ele)
		{
			curr = curr->next;
		}
		if (curr->next != NULL)
		{
			temp = curr->next;
			curr->next = temp->next;
			temp->next = head;
			head = temp;
		}
		else
			cout << "Given Element not found in the list" << endl;


    }
	else
		cout << "Empty List"<<endl;

}
void List::insert_first(int ele)
{
	struct node *temp;
	temp = new node;
	temp->data = ele;
	temp->next = head;
	head = temp;
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
	List l;
	int i=1,r;
	cout << "Enter 5 elements to be inserted" << endl;
	for (i = 1; i <= 5; i++)
	{
		cin >> r;
		l.insert_first(r);
	}
	l.forward_travel();
	cout << "Enter an elements to self adjust:" << endl;
	cin >> r;
	l.selfadjust(r);
	l.forward_travel();
	system("Pause");
	return 0;
}