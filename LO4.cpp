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

/*vi ar[10001];
int vis[10001];
int dis[10001];

void dfs(int node , int d)
{
    vis[node] = 1;
    dis[node] = d;

    for(int child : ar[node])
        if(vis[child]==0)
        dfs(child , dis[node] + 1);

}


int main()
{
    int n,m,a,b;
    cin >> n >> m;

    for(int i=1;i<=m;i++)
        cin >> a >> b , ar[a].pb(b) , ar[b].pb(a);

    dfs(1,0);

    for(int i=1;i<=n;i++)
    {
        cout << dis[i] << endl;
    }


}
*/

vi ar[10001];
int dis[10001],vis[10001];

void dfs(int node, int d)
{
    vis[node] = 1;
    dis[node] = d;

    for(int child : ar[node])
        if(vis[child] == 0)
        dfs(child, dis[node]+1);
}

int main()
{
    int n,m,a,b;
    cin >> n >> m;

    for(int i=1;i<=m;i++)
        cin >> a >> b , ar[a].pb(b) , ar[b].pb(a);

    dfs(1,0);

    for(int i=1;i<=n;i++)
        cout << dis[i] << endl;
}
