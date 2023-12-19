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

vi ar[2001];
int vis[2001],col[2001];

bool dfs(int node,int c)
{
    vis[node] =1;
    col[node] =c;

    for(int child : ar[node])
    {
        if(vis[child] == 0)
        {
            bool res = dfs(child , c^1);
            if(res   == false)
            return false;
        }

        else
            if(col[node]==col[child])
            return false;

    }

    return true;
}

int main()
{
 int t,n,m,a,b;

 cin >> t;

 for(int tc=1;tc<=t;tc++)
 {
   cin >> n >> m;


   for(int i=1;i<=n;i++)
   ar[i].clear(), vis[i]=0;

   for(int i=1;i<=m;i++)
    cin >> a >> b , ar[a].pb(b) , ar[b].pb(a);

    bool flag = true;

    for(int i=1;i<=n;i++)
        if(vis[i] == 0)
    {
        bool res = dfs(i,0);

        if(res == false)
           flag = false;
    }

    cout << "Scenario #" << tc <<":"<<endl;

    if(flag==false)
        cout << "Suspicious bugs found" << endl;
    else
        cout << "No suspicious bugs found" << endl;
    }

    return 0;
}





