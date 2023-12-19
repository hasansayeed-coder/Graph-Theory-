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

vi ar[1000001];
int vis[1000001],level[1000001],dis[1000001];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    dis[src] = 0;

    while(!q.empty())
    {
        int curr  = q.front();
        q.pop();

        for(int child : ar[curr])
            if(vis[child] == 0)
        {
            dis[child] = dis[curr]+1;
            q.push(child);
            vis[child] = 1;
            level[dis[child]]++;
        }
    }
}


int main()
{
    int n,m,a,b,src,q,d;

    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
        cin >> a >> b;
        ar[a].pb(b)  , ar[b].pb(a);
    }

    cin >> q;

    while(q--)
    {
        cin >> src >> d;

        for(int i=0;i<=n;i++)
            level[i] = 0 , vis[i] = 0;

        bfs(src);

        cout << level[d] << endl;
    }

}

