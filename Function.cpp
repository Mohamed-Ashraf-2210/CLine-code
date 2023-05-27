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


int gcd(int num1 ,int num2){
    return ( num2 == 0  ?  num1 : gcd(num2 , num1 % num2) );
}
int lcm(int num1 ,int num2){
    return num1 / gcd(num1,num2) * num2;
}
int pow(int num1 , int num2){
    if(num2 == 0) return 1;
    int x = pow(num1,num2/2);
    x *= x;
    if(num2&1) x *= num2;
    return x;
}




bool comp(pair<int,int>p1,pair<int,int>p2){
    return p1.second < p2.second;
}

bool is_prime(ll n){
    if (n < 2 || ((n&1) == 0 && n!=2))    return 0;
    for (ll i = 3; i*i <=  n; i+=2)
        if (n%i == 0)
            return 0;
    return 1;
}
vector<int> factors(int n){
    vector<int> f;
    for(int a = 2; a*a <= n; a++){
        while (n%a == 0) {
            f.push_back(a);
            n /= a;
        }
    }
    if(n > 1) f.push_back(n);
    return f;
}
void sieve_of_eratosthenes(int n)
{
    vector<int> is_prime(n+1 , true);
    for(int i=2 ; i*i <= n ; i++){
        if(is_prime[i]){
            for(int j = i*i; j <= n; j+=i)
                is_prime[j] = false;
        }
    }
    // Print prime Number between 2-n
    for(int i = 2; i <= n; i++){
        if(is_prime[i])
            cout<<i<<" ";
    }
}
ll factorial(ll n){
    return ( n < 2 )  ?  1 : n * factorial(n-1);
}
int MOd(int x , int k){
    return (x%k + k) % k;
}
ll fib(ll n){
    if (n < 2)
        return n;
    return fib(n-1) + fib(n-2);
}

void Print_Permutation(vector<int>& nums){
    sort(all(nums));
    do{
        for(auto& i : nums)
            cout << i << " ";
        cout << "\n";
    }while( next_permutation(all(nums)) );
}
void Print_Permutation(string s){
    sort(all(s));
    do{
        cout << s << "\n";
    }while( next_permutation(all(s)) );
}
string to_binary(int n){
    string s = "";
    while(n > 0) {
        s += (n % 2 ? '1' : '0');
        n /= 2;
    }
    reverse(all(s));
    //cout << bitset<8>(n);
    return s;
}
ll nCr(ll n, ll r){
    if(r > n)   return 0;
    ll p = 1, k = 1;
    if (n - r < r) r = n - r;
    // condition for minimum choose
    if(n < 1) return 0;
    while (r > 0){
        p *= n, k *= r;
        ll m = __gcd(p, k);
        p /= m, k /= m, n--, r--;
    }
    return p;
}
ll nPr(ll n, ll r){
    if(r > n)
        return 0;
    ll ans = 1;
    while(r-- > 0)
        ans *= n--;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    return 0;
}