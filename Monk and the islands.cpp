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
int vis[10001], dis[10001];

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    dis[src] = 0;

    while(!q.empty())
    {
        int curr = q.front();

        q.pop();

        for(int child : ar[curr])
            if(vis[child] == 0)
        {
            q.push(child);
            dis[child] = dis[curr] + 1;
            vis[child] = 1;
        }
    }
}

int main()
{
    int t,n,m,a,b;
    cin >> t;

    while(t--)
    {
        cin >> n >> m;

        for(int i=1;i<=n;i++)
            ar[i].clear() , vis[i] = 0;

        while(m--)
            cin >> a >> b , ar[a].pb(b) , ar[b].pb(a);

        BFS(1);

        cout << dis[n] << endl;
    }
}
*/


vi ar[10001];
int dis[10001], vis[10001];

void BFS(int src)
{
    queue <int> q;
    q.push(src);
    vis[src] = 1;
    dis[src] = 0;

    while(!q.empty()){

        int curr  = q.front();
        q.pop();

        for(int child : ar[curr])
        if(vis[child]==0){
            q.push(child);
            dis[child] = dis[curr] + 1;
            vis[child] = 1;
        }
    }
}


int main()
{
    int t,n,m,a,b;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;

        for(int i=1;i<=n;i++)
            ar[i].clear(), vis[i]=0;

        for(int i=1;i<=m;i++)
            cin >> a >> b , ar[a].pb(b) , ar[b].pb(a);

        BFS(1);

        cout << dis[n]<< endl;
    }
}



