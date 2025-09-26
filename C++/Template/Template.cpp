#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

// Macros para operaciones bitwise
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n)-1)

#define modulo(S, N) ((S) & (N-1)) // Retorna S % N, donde N es una potencia de 2
#define isPowerOfTwo(S) (!(S) & (S-1))
#define nearestPowerOfTwo(S) (1 << lround(log2(S)))
#define turnOffLastBit(S) ((S) & (S-1))
#define turnOnLastZero(S) ((S) | (S+1))
#define turnOffLastConsecutiveBits(S) ((S) & (S+1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S-1))


typedef long long ll;
typedef short int si;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui;
typedef string str;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;




int main(){
    fast;
    ui n; cin >> n;
    vi v;
    v.resize(n);
    for (ui i =0 ; i  <n; ++i) cin >> v[i];


    // Swap dos números
    int num = 2;
    const auto itr = find(all(v), num);
    auto indx = distance(v.begin(), itr);
    iter_swap(v.begin() + num, v.begin() + indx);




    return 0;
}


// Obtener los subconjuntos de una mascara en binario
vector<int> subset_bitmask(int mask){
    vector<int> subsets;
    for (int subset = mask; subset; subset = (mask & (subset -1))) subsets.push_back(subset);
    return subsets;
}


void swap_two_iters(vi vec, int n){
    const auto itr = find(all(vec), n);
    auto indx = distance(vec.begin(), itr);
    iter_swap(vec.begin() + n, itr);
    iter_swap(vec.begin() + n, vec.begin() + indx);

}


/*
// cp_toolbox.cpp
// Competitive Programming Toolbox - big single-file collection of useful snippets
// Usage: include or paste into your solution and call the utilities you need.
// Compile with: g++ -std=gnu++17 -O2 -pipe cp_toolbox.cpp

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// ----------------------------- Type aliases ---------------------------------
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
template<class T> using V = vector<T>;

// ----------------------------- Constants -----------------------------------
const int INF_INT = 0x3f3f3f3f;
const ll INF = (ll)4e18;
const ll MOD = 1000000007LL;

// ----------------------------- Fast IO -------------------------------------
static inline void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// ----------------------------- Macros / small helpers -----------------------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) int((x).size())
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

#ifdef LOCAL
  #define dbg(...) do { cerr << "DBG: "; _dbg(#__VA_ARGS__, __VA_ARGS__); } while(0)
#else
  #define dbg(...) do {} while(0)
#endif

// debug helpers
template<typename T>
void _print_one(const T &x) { cerr << x; }
void _print_one(const string &s) { cerr << '"' << s << '"'; }
template<typename T, typename U>
void _print_one(const pair<T,U>&p) { cerr << "("; _print_one(p.first); cerr<<","; _print_one(p.second); cerr<<")"; }
template<typename T>
void _print_one(const vector<T>&v) { cerr << "["; bool f=1; for(auto &x:v){ if(!f) cerr<<","; _print_one(x); f=0;} cerr<<"]"; }

template<typename... Ts>
void _dbg(const char *s, Ts... args) {
    // naive name printing - okay for simple debugging
    ((cerr << s) , ...);
    cerr << " = ";
    (( _print_one(args), cerr << " "), ...);
    cerr << "\n";
}

// ----------------------------- Random --------------------------------------
std::mt19937_64 rng((ull)chrono::high_resolution_clock::now().time_since_epoch().count());
ll rll(ll a, ll b) { uniform_int_distribution<ll> d(a,b); return d(rng); }

// ----------------------------- Math / Number Theory ------------------------
ll gcdll(ll a, ll b){ while(b){a%=b; swap(a,b);} return llabs(a); }
ll lcmll(ll a, ll b){ return a/gcdll(a,b)*b; }

ll mod_pow(ll a, ll e, ll mod = MOD){
    a %= mod; if(a<0) a+=mod;
    ll r=1;
    while(e){
        if(e&1) r = (__int128)r*a % mod;
        a = (__int128)a*a % mod;
        e >>= 1;
    }
    return r;
}

ll mod_inv(ll a, ll mod = MOD){
    // mod must be prime for this to work reliably: Fermat inverse
    return mod_pow(a, mod-2, mod);
}

// Sieve (linear or classic)
vector<int> sieve_primes(int n){
    vector<int> primes;
    vector<char> is_composite(n+1,false);
    for(int i=2;i<=n;i++){
        if(!is_composite[i]) primes.push_back(i);
        for(int p:primes){
            if((ll)i*p>n) break;
            is_composite[i*p]=true;
            if(i%p==0) break;
        }
    }
    return primes;
}

// ----------------------------- Combinatorics -------------------------------
struct Comb {
    int N;
    ll mod;
    vector<ll> fact, ifact;
    Comb(int maxN=1, ll modv=MOD): N(maxN), mod(modv), fact(N+1), ifact(N+1){
        fact[0]=1;
        for(int i=1;i<=N;i++) fact[i]=fact[i-1]*i%mod;
        ifact[N]=mod_pow(fact[N], mod-2, mod);
        for(int i=N;i>0;i--) ifact[i-1]=ifact[i]*i%mod;
    }
    ll nCr(int n,int r){
        if(r<0||r>n||n<0) return 0;
        return fact[n]*ifact[r]%mod*ifact[n-r]%mod;
    }
};

// ----------------------------- DSU / Union-Find ----------------------------
struct DSU {
    int n;
    vector<int> p, r, sz;
    DSU(int n=0){ init(n); }
    void init(int n_){
        n=n_; p.resize(n); r.assign(n,0); sz.assign(n,1);
        iota(p.begin(), p.end(), 0);
    }
    int find(int x){ return p[x]==x?x:p[x]=find(p[x]); }
    bool unite(int a,int b){
        a=find(a); b=find(b);
        if(a==b) return false;
        if(r[a]<r[b]) swap(a,b);
        p[b]=a; sz[a]+=sz[b];
        if(r[a]==r[b]) r[a]++;
        return true;
    }
    bool same(int a,int b){ return find(a)==find(b); }
    int size(int a){ return sz[find(a)]; }
};

// ----------------------------- Fenwick / BIT -------------------------------
struct Fenwick {
    int n; vector<ll> bit;
    Fenwick(int n=0){ init(n); }
    void init(int n_){ n=n_; bit.assign(n+1,0); }
    void add(int idx, ll val){
        for(++idx; idx<=n; idx += idx & -idx) bit[idx-1]+=val;
    }
    ll sumPrefix(int idx){ // sum [0..idx]
        ll r=0;
        for(++idx; idx>0; idx -= idx & -idx) r += bit[idx-1];
        return r;
    }
    ll sumRange(int l,int r){ if(r<l) return 0; return sumPrefix(r) - (l?sumPrefix(l-1):0); }
};

// ----------------------------- Segment Tree (iterative) --------------------
struct SegTree {
    int n;
    vector<ll> seg;
    ll NEUT = 0; // sum
    SegTree(int n_=0){ init(n_); }
    void init(int n_){
        n=1; while(n<n_) n<<=1;
        seg.assign(2*n, NEUT);
    }
    void build(const vector<ll>&arr){
        init((int)arr.size());
        for(size_t i=0;i<arr.size();++i) seg[n+i]=arr[i];
        for(int i=n-1;i>0;--i) seg[i]=seg[i<<1]+seg[i<<1|1];
    }
    void pointSet(int p, ll value){
        p+=n; seg[p]=value;
        for(p>>=1;p;p>>=1) seg[p]=seg[p<<1]+seg[p<<1|1];
    }
    void pointAdd(int p, ll delta){
        p+=n; seg[p]+=delta;
        for(p>>=1;p;p>>=1) seg[p]=seg[p<<1]+seg[p<<1|1];
    }
    ll rangeQuery(int l,int r){ // inclusive l..r
        if(r<l) return NEUT;
        l+=n; r+=n;
        ll resL=NEUT, resR=NEUT;
        while(l<=r){
            if(l&1) resL = resL + seg[l++];
            if(!(r&1)) resR = seg[r--] + resR;
            l>>=1; r>>=1;
        }
        return resL + resR;
    }
};

// ----------------------------- Lazy Segment Tree (range add, range sum) ----
struct LazySeg {
    int n;
    vector<ll> st, lazy;
    LazySeg(int n_=0){ init(n_); }
    void init(int n_){
        n=1; while(n<n_) n<<=1;
        st.assign(2*n,0);
        lazy.assign(2*n,0);
    }
    void build(const vector<ll>&a){
        init((int)a.size());
        for(int i=0;i<(int)a.size();++i) st[n+i]=a[i];
        for(int i=n-1;i>0;--i) st[i]=st[i<<1]+st[i<<1|1];
    }
    void apply(int v,int len,ll add){
        st[v]+=add*len;
        lazy[v]+=add;
    }
    void push(int v,int lenL,int lenR){
        if(lazy[v]!=0){
            apply(v<<1, lenL, lazy[v]);
            apply(v<<1|1, lenR, lazy[v]);
            lazy[v]=0;
        }
    }
    // add val to interval [ql,qr]
    void add(int v,int l,int r,int ql,int qr,ll val){
        if(ql>r||qr<l) return;
        if(ql<=l&&r<=qr){ apply(v, r-l+1, val); return; }
        int mid=(l+r)>>1;
        push(v, mid-l+1, r-mid);
        add(v<<1, l, mid, ql, qr, val);
        add(v<<1|1, mid+1, r, ql, qr, val);
        st[v]=st[v<<1]+st[v<<1|1];
    }
    ll query(int v,int l,int r,int ql,int qr){
        if(ql>r||qr<l) return 0;
        if(ql<=l&&r<=qr) return st[v];
        int mid=(l+r)>>1;
        push(v, mid-l+1, r-mid);
        return query(v<<1, l, mid, ql, qr) + query(v<<1|1, mid+1, r, ql, qr);
    }
    // helpers:
    void range_add(int l,int r,ll val){ add(1,0,n-1,l,r,val); }
    ll range_sum(int l,int r){ return query(1,0,n-1,l,r); }
};

// ----------------------------- Graph algorithms ----------------------------
using Edge = pair<int,ll>; // (to, weight)
vector<vector<Edge>> graph_adj(int n){ return vector<vector<Edge>>(n); }

// Dijkstra
vector<ll> dijkstra(int n, const vector<vector<Edge>>& adj, int src){
    vector<ll> dist(n, INF);
    dist[src]=0;
    using pli = pair<ll,int>;
    priority_queue<pli, vector<pli>, greater<pli>> pq;
    pq.push({0, src});
    while(!pq.empty()){
        auto [d,u]=pq.top(); pq.pop();
        if(d!=dist[u]) continue;
        for(auto [v,w]: adj[u]){
            if(dist[v] > d + w){
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

// BFS (0-1 BFS variant for 0/1 weights)
vector<int> bfs01(int n, const vector<vector<pair<int,int>>>& adj0_1, int src){
    deque<int> dq;
    vector<int> dist(n, INF_INT);
    dist[src]=0; dq.push_back(src);
    while(!dq.empty()){
        int u = dq.front(); dq.pop_front();
        for(auto [v,w]: adj0_1[u]){
            int nd = dist[u] + w;
            if(nd < dist[v]){
                dist[v]=nd;
                if(w==0) dq.push_front(v); else dq.push_back(v);
            }
        }
    }
    return dist;
}

// Topological sort (Kahn)
vector<int> topo_kahn(int n, const vector<vector<int>>& adj){
    vector<int> indeg(n,0);
    for(int u=0;u<n;u++) for(int v:adj[u]) indeg[v]++;
    queue<int> q;
    for(int i=0;i<n;i++) if(indeg[i]==0) q.push(i);
    vector<int> topo;
    while(!q.empty()){
        int u=q.front(); q.pop();
        topo.pb(u);
        for(int v:adj[u]) if(--indeg[v]==0) q.push(v);
    }
    if((int)topo.size()!=n) return {}; // cycle exists
    return topo;
}

// ----------------------------- Geometry helpers ----------------------------
struct Pt {
    long long x,y;
    Pt():x(0),y(0){}
    Pt(long long _x,long long _y):x(_x),y(_y){}
};
long long cross(const Pt&a,const Pt&b){ return a.x*b.y - a.y*b.x; }
Pt operator-(const Pt&a,const Pt&b){ return Pt(a.x-b.x, a.y-b.y); }
long double cross_ld(const pair<long double,long double>&a,const pair<long double,long double>&b){
    return a.first*b.second - a.second*b.first;
}

// ----------------------------- Hashing helpers ------------------------------
struct HashPair {
    size_t operator()(const pair<int,int>&p) const noexcept {
        return ((uint64_t)p.first<<32) ^ (uint64_t)p.second;
    }
};

// ----------------------------- Ordered set (policy based) ------------------
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// Methods: os.order_of_key(x), *os.find_by_order(k)

// ----------------------------- String / hashing / rolling ------------------
struct RollingHash {
    // simple polynomial rolling hash for strings
    static const uint64_t B = 127;
    vector<uint64_t> pref, powb;
    RollingHash(const string &s){
        int n = (int)s.size();
        pref.assign(n+1,0); powb.assign(n+1,1);
        for(int i=0;i<n;i++){
            pref[i+1] = pref[i]*B + (unsigned char)s[i];
            powb[i+1] = powb[i]*B;
        }
    }
    uint64_t get(int l,int r){ // [l,r)
        return pref[r] - pref[l]*powb[r-l];
    }
};

// ----------------------------- IO helpers ----------------------------------
template<class T>
vector<T> read_vector(int n){
    vector<T> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    return a;
}

template<class T>
void print_vector(const vector<T>&a, const string &sep=" "){
    for(size_t i=0;i<a.size();++i){
        if(i) cout<<sep;
        cout<<a[i];
    }
    cout<<"\n";
}

// ----------------------------- Examples / usage in main --------------------
int main(){
    fast_io();

    // Example usage of a few utilities
    // 1) Sieve
    auto primes = sieve_primes(100);
    // 2) DSU
    DSU dsu(10);
    dsu.unite(1,2); dsu.unite(2,3);
    // 3) Fenwick
    Fenwick fw(10);
    fw.add(3, 5);
    fw.add(1, 2);
    // 4) SegTree
    vector<ll> arr = {1,2,3,4,5};
    SegTree st; st.build(arr);
    // 5) Dijkstra small example
    int n = 5;
    vector<vector<Edge>> adj(n);
    adj[0].push_back({1, 3});
    adj[1].push_back({2, 4});
    auto dist = dijkstra(n, adj, 0);

    // Print a tiny summary so program doesn't do nothing
    cout << "primes upto 100: " << primes.size() << "\n";
    cout << "dsu find(3): " << dsu.find(3) << " size component: " << dsu.size(1) << "\n";
    cout << "fenwick sum prefix(3): " << fw.sumPrefix(3) << "\n";
    cout << "segment sum [1..3]: " << st.rangeQuery(1,3) << "\n";
    if(dist.size()) cout << "dijkstra dist[2]: " << (dist[2]==INF? -1: dist[2]) << "\n";

    // End
    return 0;
}

/*
  Notes:
  - This file aims to be a large grab-bag for practice. Remove unused parts to speed compile.
  - Add more algorithms (flow, SCC, bridges, articulation points, centroid decomposition, suffix arrays)
    as you need them. Keep functions small and tested.
  - Use -DLOCAL to enable dbg(...) macro printing.
*/
