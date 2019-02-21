#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next,*prev;
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
	void insert_first(int);
	void insert_last(int);
	void insert_after(int, int);
	void insert_before(int, int);
	int Delete_first();
	int Delete_last();
	void Delete_spec(int);
	void forward_travel();
	void travel_backward();
};

void List::insert_first(int ele)
{
	struct node *temp;
	temp = new node;
	temp->data = ele;
	temp->next = head;
	temp->prev = NULL;
	if (head != NULL)
	{
		head->prev = temp;
	}
	head = temp;

}
void List::insert_last(int ele)
{
	struct node *temp, *curr = head;
	temp = new node;
	temp->data = ele;
	temp->next = NULL;
	
	if (head == NULL)
	{
		temp->prev = NULL;
		head = temp;
	}
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = temp;
		temp->prev = curr;
	}

}

void List::insert_after(int pos, int ele)
{
	
	if (head != NULL)
	{
		struct node *curr=head, *temp;
		while (curr != NULL && curr->data != pos)
		{
			curr = curr->next;
		}
		if (curr != NULL)
		{
			temp = new node;
			temp->data = ele;
			temp->next = curr->next;
			temp->prev = curr;
			if (curr->next != NULL)
			{
				curr->next->prev = temp;
			}
			curr->next= temp;
		}
		else
			cout << "Position not found" << endl;
	}
	else
		cout << "Empty List" << endl;
}
void List::insert_before(int pos, int ele)
{
	if (head != NULL)
	{
		struct node *curr=head, *temp;
		while (curr!= NULL && curr->data != pos)
		{
			curr = curr->next;
		}
		if (curr!=NULL)
		{
			temp = new node;
			temp->data = ele;
			temp->prev = curr->prev;
			temp->next = curr;
			if (curr->prev != NULL)
			{
				curr->prev->next = temp;
			}
			else
			{
				head = temp;
			}
			curr->prev = temp;
			}

		else
		{
				cout << "Position not found" << endl;
		}
	}
	else
		cout << "List is Empty" << endl;
}
int List::Delete_first()
{
	int item = -999;

	if (head != NULL)
	{
		struct node* curr = head;
		if (curr->next != NULL)
		{
			curr->next->prev = NULL;
			head = curr->next;
			item = curr->data;
			delete curr;
		}
	}
	else
		cout << "Empty List" << endl;
	return item;
}
int List::Delete_last()
{
	int item = -1;
	if (head != NULL)
	{
		struct node *curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		item = curr->data;
		if (curr->prev != NULL)
		{
			curr->prev->next = NULL;
		}
		else
			head = NULL;
		delete curr;
	}
	else
	{
		cout << "list is empty";
	}
	return item;
}
void List::Delete_spec(int ele)
{
	if (head != NULL)
	{
		struct node *curr = head;
		while (curr != NULL && curr->data != ele)
		{
			curr = curr->next;
		}
		if (curr != NULL)
		{
			if (curr->prev != NULL)
				curr->prev->next = curr->next;
			else
				head = curr->next;
			if (curr->next != NULL)
			{
				curr->next->prev = curr->prev;
			}
			delete curr;
		}
		else
		{
			cout << "Element not found";
		}
	}
	else
		cout << "List is empty";
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
void List::travel_backward()
{
	struct node* temp = head;
	if (head != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->prev;
		}
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
	cout << "Inserted element 1(first):" << endl;
	l1.insert_first(1);
	cout << "Inserted element 2(first):" << endl;
	l1.insert_first(2);
	l1.forward_travel();
	cout << "Insert element 10(last):" << endl;
	l1.insert_last(10);
	cout << "Insert element 3 (after 2):" << endl;;
	l1.insert_after(2, 3);
	cout << "Insert element 9(before 10):" << endl;
	l1.insert_before(10, 9);
	cout << "forward travel:" << endl;
	l1.forward_travel();
	cout << "Backward travel:" << endl;
	l1.travel_backward();
	cout << "Deleted first element" << l1.Delete_first() << endl;
	cout << "Deleted last element" << l1.Delete_last() << endl;
	cout << "Deleting element 9" << endl;
	l1.Delete_spec(9);
	l1.forward_travel();
	system("pause");
	return 0;

}








