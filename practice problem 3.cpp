#include<bits/stdc++.h>
#define REP(i,n) for (int i=1;i<=n;i++)
#define mod 1000000007
#define pb push_back
#define vi vector<int>
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

void dfs(int node)
{
    vis[node] = 1;
    for(int child : ar[node])
        if(vis[child] == 0)
        dfs(child);
}

int main()
{
    int n,m,a,b;
    cin >> n >> m;

    for(int i=1;i<=m;i++)
    {
        cin >> a >> b;
        ar[a].pb(b) , ar[b].pb(a);
    }

    int cc_count = 0;
    for(int i=1;i<=n;i++)
    if(vis[i]==0)
    dfs(i) , cc_count++;

    if(cc_count == 1 && m == n-1)
        cout << "YES";

    else
        cout << "NO";

}
*/

vi ar[10001];
int vis[10001];

void dfs(int node)
{
    vis[node] = 1;

    for(int child : ar[node])
        if(vis[child] == 0)
        dfs(child);
}

int main()
{
    int n,m,a,b;
    cin >> n >> m;

    for(int i=1;i<=n;i++)
        cin >> a >> b , ar[b].pb(a) , ar[a].pb(b);

    int cc_count = 0;
    for(int i=1;i<=n;i++)
        if(vis[i]==0)
        dfs(i) , cc_count++;

    if(cc_count==1 && m==n-1)
        cout << "YES\n";
    else
        cout << "NO\n";
}
