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
int vis[10001], dis[10001];

void dfs(int node,int d)
{
  vis[node]=1;
  dis[node] = d;

  for(int child : ar[node])
    if(vis[child]==0)
    dfs(child , dis[node] + 1);
}

int main()
{
    int n,q,a,b;
    cin >> n;

    for(int i=1;i<=n-1;i++)
        cin >> a >> b , ar[a].pb(b) , ar[b].pb(a);

    dfs(1,0);

    cin >> q;

    int ans = -1, min_dis = INF;

    while(q--)
    {
        int girl_city;
        cin >> girl_city;

        if(dis[girl_city] <min_dis)
            min_dis = dis[girl_city], ans = girl_city;

        else
            if(dis[girl_city] == min_dis && girl_city < ans)
            ans = girl_city;
    }

    cout << ans;

}
*/

vi ar[10001];
int vis[10001],dis[10001];

void dfs(int node, int d)
{
    vis[node] = 1;
    dis[node] = d;

    for(int child : ar[node])
        if(vis[child] == 0 )
         dfs(child, dis[node]+1);
}

int main()
{
    int n,a,b,q;
    cin >> n;

    for(int i=1;i<=n-1;i++)
        cin >> a >> b , ar[a].pb(a), ar[b].pb(a);

    dfs(1,0);

    cin >> q;
    int ans = -1 , min_dis = INF;

    while(q--)
    {
        int girl_city;
        cin >> girl_city;

        if(girl_city<min_dis)
            min_dis = dis[girl_city] , ans = girl_city;

        else
            if(dis[girl_city]==min_dis && girl_city<ans)
            ans  = girl_city;
    }

    cout << ans << endl;


}
