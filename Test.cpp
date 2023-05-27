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

template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
    //cout<<myMax<int>(2,6);
}

int Mod(int sum , int k){
    return (sum%k + k) % k;
}

/*
// if you want num bigger move l
// else move r
// best with right condition
int binary_search(vector<int>& nums , int target){
    int l = 0, r = nums.size() - 1, index_ans = -1;
    while(l <= r){
        int mid = l + (r - l) / 2;
        (nums[mid] < target) ? l = mid + 1 , index_ans = mid : r = mid - 1;
    }
    return index_ans;
}

typedef bitset<12> MASK;
int memo[1 << 12];

int best (MASK mask){
    int &res = memo[mask.to_ullong()];
    if(~res) return res;
    res = 0;
    for(int i = 0; i < 12; i++){
        MASK NewMask = mask;
        NewMask[i] = 1;
        res = best(NewMask);
    }
    return res;
}
*/

ll n , x , p;

bool binary_search(ll need){
    ll l = 1, r = p;
    while(l <= r){
        ll mid = l + (r - l) / 2;

        ll k = mid * (mid+1) / 2;
        if( k == need or (k+x) % n == 0) return 1;
        if(k > need)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return 0;
}

void solve(){

    cin >> n >> x >> p;
    ll need = n - x;
    rep(i,0,500){
        if(binary_search(need)) {
            cout<<"YES";dl
            return;
        }
        need += n;
    }

    cout<<"NO";dl

}

int main() {
    AShraaf();
    int tt = 1;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}