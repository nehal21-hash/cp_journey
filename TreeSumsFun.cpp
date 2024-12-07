#include<iostream>


using namespace std;

long long calculate(long long n,long long h){
	long long result = 0;
	while(h>0 && n>0){
		result+=h;
		n--;
		h/=2;
	}
	return result;
}
long long binary_search(long long n,long long x){
	long long l = 1, h = 1e18+100;
	while(h-l>1){
		long long mid = (l+h)/2;
		long long val = calculate(n,mid);
		if(val>x){
			h = mid-1;
		}else{
			l = mid;
		}
	}
	long long val1 = calculate(n,l),val2 = calculate(n,h);
	if(val1 == x){
		return l;
	}
	if(val2 == x){
		return h;
	}
	return -1;
}

void solve(){
	long long n,x;
	cin>>x>>n;
	long long result =  binary_search(n,x);
	cout<<result<<endl;
	return ;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}