#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueueUsingStack(queue<int> &q,stack<int> &s){

	while(!q.empty()){
		s.push(q.front());
		q.pop();
	}
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
}

int main(){
	queue<int> q1;
	stack<int> s;

	for(int i=0;i<5;i++)
		q1.push(i);

	reverseQueueUsingStack(q1,s);
	while(!q1.empty()){
		cout<<q1.front()<<" ";
		q1.pop();
	}
	
	cout<<endl;
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	cout<<"actual queue : "<<endl;
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	
	q.push(1);
	q.push(2);
	q.push(3);
	reverseQueueUsingStack(q,s);
	cout<<"reverse queue : "<<endl;
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	
	return 0;
	return 0;
}