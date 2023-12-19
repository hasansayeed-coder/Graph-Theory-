#include<bits/stdc++.h>
#define REP(i,n) for (int i=1;i<=n;i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define N 101
#define endl '\n'
using namespace std;

/*int vis[100001];
vi ar[100001];
int cc_size;

void dfs(int node)
{
    vis[node] = 1;
    cc_size++;

    for(int child : ar[node])
        if(vis[child] == 0)
        dfs(child);

}
int main()
{
    int t,n,m,a,b;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        REP(i,n) vis[i] = 0 , ar[i].clear();

        REP(i,m) cin >> a >> b , ar[a].pb(b) , ar[b].pb(a);

        int cnt =0 ;

        lli res =1;

        REP(i,n) if(vis[i]==0){
            cc_size=0;
            dfs(i),cnt++;

        res=(res*cc_size)%mod;

        }

        cout << cnt << " " << res <<endl;
    }
}
*/
vi ar[10001];
int vis[10001];
int cc_size ;

void dfs(int node)
{
    vis[node] =1;
    cc_size++;

    for(int child : ar[node])
        if(vis[child]==0)
         dfs(child);
}


int main()
{
    int t,n,m,a,b;

    cin >> t;

    while(t--)
    {
        cin >> n >> m;
        for(int i=1;i<=n;i++)
            vis[i]=0 , ar[i].clear();

        for(int i=1;i<=m;i++)
            cin >> a >> b , ar[a].pb(b) , ar[b].pb(a);

        int cnt = 0;
        lli res = 1;

        for(int i=1;i<=n;i++)
            if(vis[i]==0){
                cc_size = 0;
                dfs(i) , cnt++;

        res = (res * cc_size)%mod;
            }

            cout << cnt << " " << res <<endl;
    }
}

