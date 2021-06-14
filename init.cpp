/*Coder:DongYinuo*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int mod = 1e9 + 7;
#define F(i, l, r) for (int i = l; i <= r; ++i)
#define REP(i, r, l) for (int i = r; i >= l; --i)
#define mem(a,b) memset(a, b, sizeof(a));
#define MP make_pair
#define PB push_back
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define all(a) begin(a), end(a)
#define sz(a) ((int)a.size())
#define lson ind * 2 
#define rson ind * 2 + 1

const int N = 100010;

namespace IO{
    int I(){
        char c; int x = 0, f = 1;
        while (c = getchar()){ if (c == '-') f = -1;if (isdigit(c)) break;}
        while (isdigit(c)){ x = (x << 1) + (x << 3) + (c ^ 48), c = getchar();}
        return x * f;
    }
    template <typename T>
    void Rd(T& arg){
        arg = I();
    }
    template <typename T, typename...Types>
    void Rd(T& arg, Types&...args){
        arg = I();
        Rd(args...);
    }

    ll L(){
        char c; ll x = 0, f = 1;
        while (c = getchar()){ if (c == '-') f = -1;if (isdigit(c)) break;}
        while (isdigit(c)){ x = (x << 1) + (x << 3) + (c ^ 48), c = getchar();}
        return x * f;
    }
    template <typename T>
    void RLd(T& arg){
        arg = L();
    }
    template <typename T, typename...Types>
    void RLd(T& arg, Types&...args){
        arg = L();
        Rd(args...);
    }

} // namespace IO

namespace REGULAR{
    void test(int x){
        cout << x << " ";
    }
    template <typename T>
    void debug(T& arg){
        test(arg);
    }
    template <typename T, typename...Types>
    void debug(T& arg, Types&...args){
        test(arg);
        debug(args...);
    }

    ll qpow(ll a, ll b, ll c){
        ll ans = 1 % c; a = a % c;
        while (b){
            if (b & 1){
                ans = ans * a % c;
            }
            b = b >> 1, a = a * a % c;
        }
        return ans;
    }

    struct ufSet{
        int f[N];
        void init(){
            F(i, 1, N){
                f[i] = i;
            }
        }
        int find(int x){
            return x ^ f[x] ? f[x] = find(f[x]) : x;
        }
        void merge(int x, int y){
            f[find(x)] = find(y);
        }
    };

} // namespace REGULAR

using namespace IO;
using namespace REGULAR;

namespace SOLVE{
    
    void input(){

    }

    void main(){
        input();

    }
}

// #define int long long

// signed main(){
int main(){

#ifndef ONLINE_JUDGE
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--){
        SOLVE::main();
    }

    return 0;
}
