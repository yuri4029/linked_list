#include <bits/stdc++.h>
#define MAXN 100005
#define INF 1000000000000000005
#define mod 1000000007
#define rep(i,n) for (int i=0;i<n;i++)
#define rep1(i,n) for (int i=1;i<=n;i++)
#define ll long long
#define debug(x) cout << #x << ": "; _print(x); cout<<endl;



using namespace std;

int dx[] ={ 0, 1, 0, -1}; // left, up, right, down
int dy[] ={-1, 0, 1,  0};

int dxx[] ={-1,-1, 1,  1}; // up left, down left, down right,  up right
int dyy[] ={-1, 1, 1, -1};

template<class T>  void _print(vector<int> v1){ for (int i : v1) cout<< i<< " ";}
void _print(long long a) {cout<< a;}
void _print(char a) {cout<< a;}
void _print(string  a) {cout<< a;}
void _print(bool a) {cout<< a;}

struct node{
    int data;
    struct node *link;
};


int main (){
	
	freopen("inp.txt","r",stdin);
	freopen("out.txt","w",stdout);
	// g++ -o c c.cpp
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *end = malloc(sizeof(struct node));
    end->data =-1;
    head->link =NULL;

	return 0;
} 