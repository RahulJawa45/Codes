#include<iostream>
using namespace std;

int main(){
	int arr1[1000],arr2[1000];
	int i,j,k,count = 0;
	int T,N;

	cin>>T;
	for(k = 0;k < T;k++){
		cin>>N;
		for(i=0;i<N;i++){
			cin>>arr1[i];
		}
		for(i = 0;i < N;i++){
			for(j = 0;j <= i;j++){
				if(arr1[i] >= arr1[j]){
					count++;
				}else{
					count = 0;
				}
			}
			arr2[i] = count;
			count = 0;
		}
		for(i=0;i<N;i++){
			cout<<arr2[i]<<" ";
		}
		cout<<endl;	
	}


	return 0;
}