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


/*vi ar[1000001];
int vis[1000001] , cc[1000001];
int curr_cc;

void dfs(int node)
{
    vis[node] = 1;
    cc[node] = curr_cc;

    for(int child : ar[node])
        if(vis[child] == 0)
        dfs(child);
}



int main()
{
    int t,n,k,a,b;
    string op;

    cin >> t;


    while(t--)
    {

        cin >> n >> k;
        int curr_cc = 0;

        vector<pair<int,int> > edgeList;

        for(int i=1;i<=n;i++)
            ar[i].clear() , vis[i] = 0;


        for(int i=1;i<=k;i++){
            cin >> a >> op >> b;

        if(op == "=")
            ar[a].pb(b) , ar[b].pb(a);

        else
            edgeList.pb({a,b});
    }

    for(int i=1;i<=n;i++)
        if(vis[i] == 0)
    {
        curr_cc++;
        dfs(i);
    }

    bool flag = true;


    for(int i=0;i<edgeList.size();i++)
    {
        a = edgeList[i].ff;
        b = edgeList[i].ss;

        if(cc[a] == cc[b])
        {
            flag = false;
            break;
        }

    }

    if(flag) cout << "Yes" << endl;
    else
        cout << "No" << endl;
    }
}

*/

vi ar[1000001];
int vis[1000001],cc[1000001];
int curr_cc;

void dfs(int node)
{
    vis[node] = 1;
    cc[node] = curr_cc;


    for(int child : ar[node])
        if(vis[child] == 0)
        dfs(child);
}

int main()
{
    int t,n,k,a,b;

    cin >> t;
    string op;

    while(t--)
    {
        cin >> n >> k;

        curr_cc = 0;

        vector<pair<int,int> > edgeList;

        for(int i=1;i<=n;i++)
            ar[i].clear() , vis[i]= 0;

        for(int i=1;i<=k;i++){

            cin >> a >> op >> b;

        if(op=="=")
            ar[a].pb(b) , ar[b].pb(a);

        else
        edgeList.pb({a,b});

        }

        for(int i=1;i<=n;i++)
        if(vis[i] == 0){
            curr_cc++;
            dfs(i);
        }

        bool flag = true;

        for(int i=0;i<edgeList.size();i++)
        {
            a = edgeList[i].first;
            b = edgeList[i].second;

            if(cc[a]==cc[b])
            {
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }
}





