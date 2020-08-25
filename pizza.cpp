#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0,deg=361;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum+=a[j];
			deg=min(deg,abs(360-2*sum));
			if(sum>180)
				break;
		}
		sum=0;
	}	cout<<deg<<endl;
}
