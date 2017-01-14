// queue using 2 stacks
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class Queue{
	stack<int> s1;
	stack<int> s2;
public:	
	void enQueue(int data){
		s1.push(data);
	}

	int deQueue(){
		if(s1.empty()){
			return -1;
		}
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		int top = s2.top();
		s2.pop();
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}

		return top;
	}

	int size(){
		return s1.size();
	}

};

int main(){
	Queue q1;
	q1.enQueue(1);
	q1.enQueue(2);
	q1.enQueue(3);
	q1.enQueue(4);
	q1.enQueue(5);
	q1.enQueue(6);
	cout<<q1.deQueue()<<endl;	
	cout<<q1.deQueue()<<endl;	
	cout<<q1.deQueue()<<endl;
	cout<<q1.deQueue()<<endl;
	cout<<q1.deQueue()<<endl;
	cout<<q1.deQueue()<<endl;
	cout<<q1.deQueue()<<endl;
	return 0;
}
