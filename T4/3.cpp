#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define M 1e9+7
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

class a{
public:
	a():x(100){};
	a(int k):x(k){};
	int getX(){ return x;};
private:
	int x;
};

int main(){
	a *p = new a;
	cout<<p->getX()<<endl;

	a*q = new a(200);
	cout<<q->getX()<<endl;
	return 0;
}