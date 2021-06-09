#include <iostream>
using namespace std;
class Node{
     public:
     int data;
     Node *next;
     
     Node(int data){
          this->data=data;
          next=NULL;
     }
     
};
     
     void print(Node *head){
          Node *temp =head;//storing head here
          while(temp!=NULL){
               cout<<head->data<<" ";
               head=head->next;
          }
          
          /*temp=head;//print 2 times
          while(temp!=NULL){//after storing head it will print 2 times
               cout<<head->data<<" ";
               head=head->next;
          }*/
          // it will not print 2 times bcoz in previous while head =NULL
          //1st node head is lost now
          
     }
     

int main() {
	// your code goes here
	//statically
	Node n1(1);
	Node *head=&n1;
	Node n2(2);
	n1.next=&n2;
	Node n3(3);
	Node n4(4);
	Node n5(5);
	
	n2.next=&n3;
	n3.next=&n4;
	n4.next=&n5;
	print(head);
	//print(head); make 2 calls for print
	//2 times it will print coz 1st while will change it to null but main head is havin its prevoius value
	
	
	cout<<n1.data<<" "<<n2.data<<endl;
	
	//dyanamically
	Node *n3=new Node(10);
	Node *head=n3;
	Node *n4=new Node(20);
	
	n3->next=&n4;
	
	
	
	return 0;
}
 