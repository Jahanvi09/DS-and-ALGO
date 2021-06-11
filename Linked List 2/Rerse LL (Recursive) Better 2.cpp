/*Given a singly linked list of integers, reverse it using recursion and return the head to the modified list. You have to do this in O(N) time complexity where N is the size of the linked list.
  with O(n) complexity and pair class with multivalue return  */

/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
class Pair{
     public:
     Node* head;
     Node* tail;
};


Pair *reverseLinkedListRecbetter(Node *head)
{
    //Write your code hereead
    if(head==NULL || head->next==NULL){
      
       Pair ans;
       ans.head=head;
       ans.tail=head;
       return ans;
    }
      Pair smallans=reverseLinkedListRecbetter(head->next);
     smallans->tail=head;
     head->next=NULL;
     ans.head=smallans.head;
     ans.tail=head;
     return ans;
    
}


#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;
#include "solution.h"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedListRecbetter(head);
		print(head);
	}

	return 0;
}