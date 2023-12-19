
#include<bits/stdc++.h>
#include<vector>

using namespace std ;

#define ff first
#define ss second
#define pb(x) push_back(x)

#define vi  vector<int>

vi ar[1000001] ;
int level[1000001] ;
int vis[100001] , dis[100001] ;


/*
void bfs(int src) {

    queue<int> q ;
    q.push(src) ;
    vis[src] = 1 ;
    dis[src] = 0 ;


    while(!q.empty()) {
        int curr = q.front() ;
        q.pop() ;

        for(int child : ar[curr]) {
            if(vis[child]==0){
                dis[child] = dis[curr]+1 ;
                q.push(child) ;
                vis[child] = 1 ;
                level[dis[child]]++ ;
            }
        }
    }
}




int main()
{
    int n , m , a, b  , src , dist , Q ;

    cin >> n >> m ;

    for(int i=1 ; i<= m  ;i++){
        cin >> a >> b  , ar[a].pb(b) , ar[b].pb(a) ;
    }

    cin >> Q ;

    while(Q--) {

        for(int i = 0 ;i<=n ; i++){
            level[i] = 0 , vis[i] = 0 ;
        }

        cin >> src >> dist ;

        bfs(src) ;

        cout << level[dist] << endl;
    }
}

*/

/*

9 10

1 2
2 3
1 7
2 4
3 4
4 7
7 8
9 7
7 6
5 6


3

4 2
5 3
2 1

*/

/*
4
4
3
*/

int man(){


}



