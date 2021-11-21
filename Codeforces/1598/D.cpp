#include<bits/stdc++.h>
#define MULTI_CASE
#define SYNC_OFF
#define PI pair<int,int>
#define ll long long
#define int long long
using namespace std;
// const int mod=998244353;
const int mod=1e9+7;
const int maxm=2e6+5;
int ca[maxm];
int cb[maxm];
int a[maxm];
int b[maxm];
int n;
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=1;i<=n;i++){
        ca[i]=cb[i]=0;
    }
    //总方案数减去不满足的
    for(int i=1;i<=n;i++){
        ca[a[i]]++;
        cb[b[i]]++;
    }
    int ans=n*(n-1)*(n-2)/6;//C(n,3)
    //不满足的:
    //A存在相同 and B存在相同
    //题目不存在两对相同的(a,b)
    //那么不满足的一定是:
    //a a x
    //x b b
    //枚举中间的(a,b),求两边的配对数
    //方案数为(ca[a[i]]-1)*(cb[b[i]]-1)
    for(int i=1;i<=n;i++){
        ans-=(ca[a[i]]-1)*(cb[b[i]]-1);
    }
    //
    cout<<ans<<endl;
}
void Main(){
    #ifdef MULTI_CASE
    int T;cin>>T;while(T--)
    #endif
    solve();
}
void Init(){
    #ifdef SYNC_OFF
    ios::sync_with_stdio(0);cin.tie(0);
    #endif
    #ifndef ONLINE_JUDGE
    freopen("../in.txt","r",stdin);
    freopen("../out.txt","w",stdout);
    #endif
}
signed main(){
    Init();
    Main();
    return 0;
}