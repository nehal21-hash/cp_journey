
/*
	Author
	Md Nehal

*/

#include<iostream>
#include <vector>
#include <deque>
#include <queue>        
#include <stack>        
#include <set>       
#include <map>          
#include <unordered_set> 
#include <unordered_map>
#include <algorithm>   
#include <numeric>      
#include <functional>   
#include <cmath>        
#include <cstdlib>      
#include <string>
#include <cstring>     
#include <climits>     
#include <limits>       
#include <ctime>        
#include <bitset>
#include <cassert>
#include <complex>
#include <iomanip>
#include <valarray>
#include <random>
#include <memory>
#include <chrono>
#include <tuple>



using namespace std;


const int INF = 1<<30;


// Disclaimer!, There are multiple ways to implement this idea but I found this simple...


// Node Contain the location of left and right Node;



// I'm using right node as set bits and left node as unset bits




struct Node{
	Node *right,*left;
};

struct trie{
	Node *head;
	void init(){
		head = new Node();
		int cnt =30;
		while(cnt--){
			Node *newNode = new Node();
			head->left =newNode;
			head = head->left;
		}
		return ;
	}
	void Insert(int element){
		Node *temp = head;
		insert(temp,INF,element);
		return ;
	}
	void insert(Node *node,int bits,int element){
		if(bits == 0){
			return ;
		}
		if(element&bits){
			if(node->right == NULL){
				Node *newNode =new Node();
				node->right = newNode;
			}
			insert(node->right,bits/2,element);
		}else{
			if(node->left == NULL){
				Node *newNode = new Node();
				node->left = newNode;
			}
			insert(node->left,bits/2,element);
		}
		return ;
	}
	int query1(int element ,int bits,Node *temp){
		if(bits == 0){
			return 0;
		}
		int result = 0;
		if(element&bits){
			if(temp->left){
				result+=bits;
				temp = temp->left;
			}else{
				temp = temp->right;
			}
		}else{
			if(temp->right != NULL){
				result+=bits;
				temp = temp->right;
			}else{
				temp = temp->left;
			}
		}
		return result+query1(element,bits/2,temp);
	}
	int query(int element){
		Node *temp = head;
		int result = query1(element,1<<30,temp);
		return result;
	}
};


void solve(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &x:v){
		cin>>x;
	}
	trie tree;
	tree.init();
	int result =0;
	for(int i=0;i<n;++i){
		tree.Insert(v[i]);
		result = max(result,tree.query(v[i]));
	}
	cout<<"And the max of xor of any two number in the given array is "<<result<<endl;
	return ;
}


int main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}