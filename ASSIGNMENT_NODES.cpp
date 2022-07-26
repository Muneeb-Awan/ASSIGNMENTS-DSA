#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* link;
	Node(int x){
		data = x;
		Node* link = NULL;
		
	}
};
int getFirstElement(Node* head){
	return head->data;
}
int getNthElement(Node* head,int x){
	Node *temp = head;
	for(int i=1;i<x;i++) temp=temp->link;
	return temp->data;
}
int getLastElement(Node* head){
	Node* temp=head;
	while(temp->link!=NULL) temp=temp->link;
	return temp->data;
}
int getLength(Node* head){
	Node* temp=head;
	int x = 0;
	while(temp!=NULL){
	temp=temp->link;
	x++;
	}
	return x;
}
void print(Node* n){
	if(n==NULL) return;
	cout <<n->data << " ";
	print(n->link);	
}

int main(){
	Node * head = new Node(0);
	Node * temp = head;
	int x=1;
	while(x<20){
		temp->link = new Node(x);
		temp=temp->link;
		x++;
	}
	cout<<"First Element is :" <<getFirstElement(head)<<endl;
	cout<<"Last Elemet is :" <<getLastElement(head)<<endl;
	cout<<"Total Elements Are :" <<getLength(head)<<endl;
	cout<<"6th Element is :" << getNthElement(head,6)<<endl;
	cout << "Elements Are Displayed: "<<endl;
	print(head);
	
	
	
}
