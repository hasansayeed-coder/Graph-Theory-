#include<bits/stdc++.h>

using namespace std ;

int vis[100] , in[100] , low[100] ;

vector<int> ar[1000] ;

int timer ;

void dfs(int node , int par) {


    vis[node] = 1;
    in[node] = timer ;
    low[node] = timer ;

    timer++ ;

    for(int child : ar[node] ){
        if(par==child) continue ;

        if(vis[child] == 1) {
            low[node] = min(low[node] , in[child]);
        }

        else{
            dfs(child , node) ;

            if(low[child]>in[node]){
                cout << node << " -> " << child << " is a bridge" << endl;
            }

            low[node] = min(low[node] , low[child]) ;
        }
    }
}

int main() {

    int n ,m , a, b ;

    cin >> n >>  m ;

    for(int i = 1 ; i<= m ; i++) {
        cin >>a >> b , ar[a].push_back(b) , ar[b].push_back(a) ;
    }

    dfs(1 , -1) ;



}
