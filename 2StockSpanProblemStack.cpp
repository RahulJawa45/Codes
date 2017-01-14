/*it is based on the formula that to cal span of day i, we find that day before i in which
price of that day h(i) is greater than price of day i
means span[i] = i - h(i)
we store days in stack
*/
#include<iostream>
#include<stack>
using namespace std;

void calculateSpan(int arr[], int N, int span[]){
	
	stack<int> s;
	int i;
		s.push(0);
		span[0] = 1;
	   for(i = 1;i < N;i++){
			
			while(!s.empty() &&  arr[s.top()] <= arr[i] ){
				s.pop();
			}
			if(s.empty()){
				span[i] = i + 1;
			}else
				span[i] = i - s.top();
			
			s.push(i);
		}
}
int main(){
	int arr[1000],span[1000];
	int i,k,T,N;
	cin>>T;
	for(k = 0;k < T;k++){
		cin>>N;
		for(i=0;i<N;i++){
			cin>>arr[i];
		}
		calculateSpan(arr, N, span);
 
		for(i=0;i<N;i++){
			cout<<span[i]<<" ";
		}
		cout<<endl;	
	}

	return 0;
}