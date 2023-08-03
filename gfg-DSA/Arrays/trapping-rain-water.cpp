/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/
#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <cstdlib> 
#include <exception>
#include <fstream>
#include <functional>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <tuple>
#include <string>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define ll long long 
#define all(n)          n.begin(),n.end()
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define fi               first
#define s               second
#define pb              push_back
#define mp              make_pair
#define lli             long long int
#define inf             1e18
#define w(x)            int x; cin>>x; while(x--)
#define f(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define out cout<<
#define in cin>>
using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	int a[] = { 3,0,1,2,5 };
	int n = sizeof(a)/sizeof(a[0]);
	int ans=0;
	// f(i,1,n) {
	// 	out a[i] << " " ;
	// 	if(a[i]<=max) {
	// 		ans+=max - a[i];
	// 	}
	// }
	// out ans;

	// taking min(max(leftside, rightside))
	// maintaining 2 arrays
	int l[n], r[n];
	l[0] = a[0];
	f(i,1,n) {
		l[i] = max(l[i-1], a[i]);
	}
	r[n-1] = a[n-1];
	for(int i=n-2; i>=0; i--){
		r[i] = max(r[i+1], a[i]);
	}

	f(i,0,n) {
		out l[i] << " " << r[i] << " " << a[i] << endl;
		ans += min(l[i], r[i]) - a[i];
	}

	out ans;

   return 0;
}




















