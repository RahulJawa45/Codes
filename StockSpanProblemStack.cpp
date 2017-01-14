#include<iostream>
#include<stack>
using namespace std;


int main(){
	stack<int> s;
	int arr[1000],arr2[1000];
	int i,j,k,count = 0;
	int T,N;

	cin>>T;
	for(k = 0;k < T;k++){
		cin>>N;
		for(i=0;i<N;i++){
			cin>>arr[i];
			s.push(arr[i]);
		}
		i = N-1;
		//cout<<i;
		j = N;
		while(i != 0){
			if(arr[i] >= s.top()){
				s.pop();
				j--;
				count++;
				//cout<<"count = "<<count<<"  ";
			}
			else if(s.empty()){
				arr2[i] = count;
				count = 0;
				i--;
			}
			
			else if(s.top() > arr[i]){
				arr2[i] = count;
				count = 0;
				while(j!=i){
					s.push(arr[j]);
					j++;
				}
				i--;
			}
		}
		arr2[0] = 1;
		for(i=0;i<N;i++){
			cout<<arr2[i]<<" ";
		}
		cout<<endl;	
	}

	return 0;
}