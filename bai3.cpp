#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    	long long n,m;
	cin>>n>>m;
	long long a[n+1]={0};
	for(int j=0;j<m;j++){
		long long u,v,k;
		cin>>u>>v>>k;
		for(int i=u;i<=v;i++){
			a[i]+=k;
		}
	}
//	for(int i=0;i<n;i++)cout<<a[i]<<" ";
//	cout<<endl;
	long long q;
	cin>>q;
	while(q--){
		long long q1,q2;
		cin>>q1>>q2;
		long long ma=a[q1];
		for(int i=q1;i<=q2;i++){
			if(ma<a[i])ma=a[i];
		}
		cout<<ma<<endl;
	}
    return 0;
}

