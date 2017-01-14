#include<iostream>
#include<string.h>
#include "Stack.h"
using namespace std;

bool checkDuplicates(char *str){
	Stack<char> s;
	bool flag = true;
	int i = 0; 
	while(str[i] != NULL){
		if(str[i] == '('){
			s.push('(');
			flag = true;
		}
		else if(str[i] != '(' && str[i] != ')' && flag == true){
			s.push('+');  // insert anything doesn't matter
			flag = false;
		}
		else if(str[i] == ')'){
			if(s.top() == '('){
				return true;
			}else{
				s.pop();
				s.pop();
				flag = true;
			}	
		}
		i++;
	}
	return false; // means no duplicate
	//return s.isEmpty() == 1 ? true : false;
	
}

int main(){
	char str[100];
	cin.getline(str,100);
	checkDuplicates(str)==1? cout<<"duplicate found"<<endl : cout<<"no duplicate found"<<endl;
	return 0;
}