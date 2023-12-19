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

/*vector<int> ar[1001];
int vis[101],low[101],in[101];
int timer;

void dfs(int node , int parent)
{
    vis[node] = 1;
    in[node] = low[node] = timer;

    timer++;

    for(int child : ar[node])
    {
        if(child == parent)  continue;

        if(vis[child] == 1)
        {
            //this edge is a back edge;

            low[node] = min(low[node],in[child]);
        }


        else{
            // this is a forward edge
            dfs(child , node);

            if(low[child] > in[node])
                cout << node << " - " << child << " is a bridge\n";

            low[node] = min(low[node] , low[child]);
        }
    }
}

int main()
{
    int n,m,x,y;

    cin >> n >> m;

    while(m--)
        cin >> x >> y  , ar[x].pb(y)  , ar[y].pb(x);

    dfs(1,-1);
}

*/

vector<int > ar[101];
int vis[101],low[101],in[101];
int timer;


void dfs(int node,int parent)
{
    vis[node] = 1;
    low[node] = in[node] = timer;
    timer++;


    for(int child : ar[node])
    {
        if(child == parent)  continue;

        if(vis[node] == 1)
        {
            //this is a back edge

            low[node] = min(low[node],in[child]);

        }

        else{

                dfs( child , node);

               if(low[child] > in[child])
                cout << node << " - " << node<< " is a bridge\n";

               low[node] = min(low[node],low[child]);
        }
    }
}
int main()
{
    cin >. n >> m;

    while(m--)
        cin >> x >> y  , ar[x].pb(y) ,ar[y].pb(x);

    dfs(1,-1);

}
