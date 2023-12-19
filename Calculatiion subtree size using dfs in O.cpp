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

/*vector<int>ar[100001];
int vis[100001],subSize[100001];

int dfs(int node)
{
    vis[node] = 1;
    int curr = 1;

    for(int child : ar[node])
        if(vis[child] == 0)
    {
        curr = curr + dfs(child);
    }

    return subSize[node] = curr;
}

int main()
{
    int a,b,n;
    cin >> n;

    for(int i=1;i<n;i++)

    cin >> a >> b , ar[a].pb(b) , ar[b].pb(a);

    dfs(1);

    for(int i=1; i<=n;i++)
        cout <<"Sub tree of node" << i << " is " << subSize[i] << endl;
}*/

vi ar[10001];
int vis[10001] , subSize[10001];
int dfs(int node)
{
    vis[node] = 1;
    int curr = 1;

    for(int child : ar[node])
    if(vis[child]==0){
        curr = curr + dfs(child);
    }

    return subSize[node] = curr;
}
int main()
{
    int a,b,n;
    cin >> n;

    for(int i=1;i<=n-1;i++)
        cin >> a >> b , ar[a].pb(b), ar[b].pb(a);

    dfs(1);
    for(int i=1;i<=n;i++)
        cout << " Sub tree of node " << i << " is " << subSize[i] << endl;
}
