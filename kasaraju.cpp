#include<bits/stdc++.h>

using namespace std ;

#define ll long long

vector<int> ar[10001] ;
vector<int> tr[10001] ;

vector<int> order;
vector<int> SCC;

int vis[10001] ;

void dfs(int node) {
    vis[node] = 1 ;
    for(int child : ar[node]){
        if(vis[child]==0){
            dfs(child) ;
        }
    }

    order.push_back(node) ;

}

void dfs1(int node){
    vis[node]  =1 ;

    for(int child : tr[node]) {
        if(vis[child]==0)dfs1(child) ;
    }

    SCC.push_back(node) ;
}

int main(){

    int n , m , a , b ;

    cin >> n >> m ;

    for(int i = 1 ; i<= m ; i++) {
        cin >> a >> b ;

        ar[a].push_back(b) ;
        tr[b].push_back(a);

    }

    for(int i = 1 ; i<= n ; i++) {
        if(vis[i]==0)dfs(i);
    }

    for(int i = 1 ; i<= n ; i++)vis[i] = 0 ;

    for(int i =1 ; i<= n ; i++) {
        if(vis[order[n-i]]==0){
            SCC.clear() ;
            dfs1(order[n-i]) ;

            cout << "dfs called from " << order[n-i] << " and printing SCC" << endl;

            for(int node : SCC)
                cout << node << " " ;
                cout << endl;



        }
    }

}

/*

7 8
1 2
2 3
3 1
4 3
7 4
7 5
5 6
6 7
*/
