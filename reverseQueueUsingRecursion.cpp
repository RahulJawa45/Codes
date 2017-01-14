#include<iostream>
#include<queue> 
using namespace std;

void helper(queue<int> &q,int data){
	q.push(data);
	return;
}

void reverseQueueUsingRecursion(queue<int> &q){
	if(q.empty()){
		return;
	}
	int front = q.front();
	q.pop();
	reverseQueueUsingRecursion(q);
	helper(q,front);
	return;
}

int main(){

	queue<int> q1;
	for(int i=0;i<5;i++)
		q1.push(i);

	reverseQueueUsingRecursion(q1);
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
	reverseQueueUsingRecursion(q);
	cout<<"reverse queue : "<<endl;
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	
	return 0;	
}