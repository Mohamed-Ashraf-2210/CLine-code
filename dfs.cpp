#include<bits/stdc++.h>
using namespace std;

#define popcnt(bits)            __builtin_popcountll(bits)
#define all(v) 	                v.begin(),v.end()
#define rall(v) 	            v.rbegin(),v.rend()
#define rep(i,a,n)              for(int i=a ; i<=n ; i++)
#define cin(v)                  for(auto&i:v) cin>>i;
#define cout(v)                 for(auto&i:v) cout<<i<<" ";
#define cin2(v,n,m)             for(int i=0;i<n;i++) for(int j=0;j<m && cin>>v[i][j]; j++);
#define cout2(vec, n, m)        for(int i=0; i<n; i++,cout<<"\n") for(int j=0;j<m && cout<<v[i][j]<<" "; j++);
#define cout_map(mp)            for(auto& i : mp) cout << i.F << "  " << i.S << "\n";
#define ceil(n, m)              (n / m + !(n % m))
#define fixed(n)                fixed << setprecision(n)
#define sz(x)                   int(x.size())
#define dl                      cout<<"\n";
#define sqr(x)                  x*x
#define PB                      push_back
#define MP                      make_pair
#define F                       first
#define S                       second
#define INF                     1'000'000'007
#define OO                      2'000'000'0000
#define PI 	                    acos(-1.0)
#define EPS                     1e-9

//memset(dp, -1, sizeof(dp));
typedef long long                   ll;
typedef unsigned long long          ull;
typedef vector<int>                 vi;
typedef vector<ll>                  vll;
typedef pair<int,int>               pi;
typedef pair<ll,ll>                 pll;
typedef vector<pi>                  vpi;
typedef vector<pll>                 vpll;

const int mod = 1e9+7;
void AShraaf(){
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
    //freopen("name.in", "r", stdin);
}




int N = 10;
vector<int> adj[N];
bool visited[N];

void dfs(int node) {
    if (visited[node]) 
        return;
    visited[node] = true;
    for (auto u: adj[node])
        dfs(u);
}



int main() {
    AShraaf();
    
    return 0;
}