#include<iostream>
#include "Node.h"
using namespace std;

template<typename T>
class QueueLL{
	Node<T>*front;
	Node<T>*rear; // not necessary
public:
	QueueLL() : front(NULL) , rear(NULL) {}

	bool isEmpty(){
		return front == NULL? true: false;
	}
	
	void enQueue(T data){
		if(front == NULL){
			Node<T>*n = new Node<T>(data);
			front = n;
			rear = n;
		}else{
			Node<T>*n = new Node<T>(data);
			rear->next = n;
			rear = n;
		}
	}

	T deQueue(){
		if(isEmpty()){
			return -1;
		}
		Node<T>*temp = front;
		T data = temp->data;
		front = front->next;
		delete temp;
		return data;
	}

	T getFront(){
		return front->data;
	}

	T getRear(){
		return rear->data;
	}

	T size(){
		Node<T>*temp = front;
		int count = 0;
		while(temp != NULL){
			count++;
			temp = temp->next;
		}
		return count;
	}
};

int main(){

	QueueLL<int> q;
	
	for (int i = 0; i < 5; ++i)	{
		q.enQueue(i);
	}
	cout<<"size of queue is "<<q.size()<<endl;
	cout<<"first element is "<<q.getFront()<<endl;
	cout<<"last element is "<<q.getRear()<<endl;
	cout<<"actual queue : "<<endl;
	while(!q.isEmpty()){
		cout<<q.deQueue()<<endl;
	}

	return 0;
}

