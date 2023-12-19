
#include<bits/stdc++.h>

using namespace std ;

vector<int> ar[100001] ;
int vis[100001] ;
int col[100001] ;

bool dfs(int node , int c) {

    vis[node] = 1 ;
    col[node]  = c ;

    for(int child : ar[node]) {
        if(vis[child]==0) {
            if(dfs(child , c ^ 1)) == false{
                return false;
            }
        }

        else {
            if(col[node]==col[child]) return false;
        }
    }
    return true ;
}


int main() {


    int n , m ,a,b ;

    cin >> n >> m ;

    while(m--) {
        cin >> a >> b ;

        ar[a].pb(b) , ar[b].pb(a) ;
    }

    bool res = dfs(1 , 0) ;

    if(res)cout << "YES" << endl;
    else cout <<"NO" << endl;

}
