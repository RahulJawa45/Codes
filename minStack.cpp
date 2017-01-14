#include<iostream>
#include<stack>
using namespace std;

class minStack{
	stack<int> s1;
	stack<int> s2;
public:
	void push(int data){
		if(s1.empty() &&s2.empty()){
			s1.push(data);
			s2.push(data);
		}else{
			if(s2.top() > data){
				s2.push(data);
			}
			s1.push(data);
		}
	}

	int pop(){
		if(s1.top() == s2.top()){
			s2.pop();
		}
		int data = s1.top();
		s1.pop();
		return data;	
	}

	int getMinimum(){
		if(s2.empty()){
			return -1;
		}
		return s2.top();
	}

};

int main(){
	minStack s1;
	s1.push(20);
	s1.push(19);
	s1.push(18);
	s1.push(21);
	s1.push(29);
	s1.push(15);
	s1.push(16);
	cout<<"minimum element of stack is "<<s1.getMinimum()<<endl;
	cout<<s1.pop()<<endl; 
	cout<<"minimum element of stack is "<<s1.getMinimum()<<endl;
	cout<<s1.pop()<<endl;
	cout<<"minimum element of stack is "<<s1.getMinimum()<<endl;
	cout<<s1.pop()<<endl; 
	cout<<"minimum element of stack is "<<s1.getMinimum()<<endl;
	cout<<s1.pop()<<endl;
	cout<<"minimum element of stack is "<<s1.getMinimum()<<endl;
	cout<<s1.pop()<<endl; 
	cout<<"minimum element of stack is "<<s1.getMinimum()<<endl;

	cout<<"new stack : "<<endl;
	minStack s2;
	s2.push(10);
    s2.push(20);
    s2.push(30);
    cout<<s2.getMinimum()<<endl;
    s2.push(5);
    cout<<s2.getMinimum()<<endl;
	
	return 0;
}