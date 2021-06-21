#include <bits/stdc++.h>

#define PB push_back
#define MP make_pair
#define LB lower_bound
#define UP upper_bound
#define F(i, l, r) for (int i = l; i <= r; ++i)
#define REP(i, r, l) for (int i = r; i >= l; --i)
#define mem(a, b) memset(a, b, sizeof(a))
#define all(a) begin(a), end(a)
#define rall(a) rbegin(a), rend(a)
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define VI vector<int>
#define VLL vector<ll>
#define lson (ind << 1)
#define rson (ind << 1 | 1)
#define sz(a) ((int)a.size())

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll mod = 1e9 + 7;


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

string to_string(string s){
	return '"' + s + '"';
}

string to_string(const char *s){
	return to_string ((string) s);
}

string to_string(bool b){
	return (b ? "true" : "false");
}

template<typename A, typename B>
string to_string(pair<A, B> p){
	return "(" + to_string (p.first) + ", " + to_string (p.second) + ")";
}

template<typename A>
string to_string(A v){
	bool first = true;
	string res = "{";
	for (const auto &x : v){
		if (!first){
			res += ", ";
		}
		first = false;
		res += to_string(x);
	}
	res += "}";
	return res;
}

void debug_out(){
	cout << endl;
}

template<typename Head, typename... Tail>
void debug_out(Head H, Tail... T){
	cout << to_string (H) << " ";
	debug_out (T...);
}

#ifdef LOCAL
#define dbg(...) cout << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define dbg(...) do{} while(0)
#endif

template<typename T, typename S>

bool upmin(T &a, const S &b){
	return a > b ? a = b, 1 : 0;
}

template<typename T, typename S>
bool upmax(T &a, const S &b){
	return a < b ? a = b, 1 : 0;
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




namespace SOLVE{

	void main(){
		
	}
}

// #define int long long

// signed main(){
int main(){

#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif

	std::ios::sync_with_stdio(false);

	int T = 1;
	// cin >> T;
	while (T--){
		SOLVE::main();
	}

	return 0;
}

