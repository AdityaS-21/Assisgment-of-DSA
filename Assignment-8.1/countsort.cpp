#include<bits/stdc++.h>
using namespacestd std;
int main(){
	vector<int>A={1,1,3,2,3,2,4,5,4,1};
	vector<int> B(6);
	for(int i=0;i<A.size();i++){
		B[A[i]]++;
	}
	int k=0;
	for(int i=0;i<B.size();i++){
		for(int j=0;j<B[i];j++){
			A[k++]=i;
		}
	}
	return 0;
}
