#include<bits/stdc++.h>

using namespace std ;

vector<int> ar[100001] ;

int dis[100001] , vis[100001] ;

void bfs(int src) {

    queue<int> q ;

    q.push(src) ;
    vis[src] = 1 ;
    dis[src] = 0 ;

    while(!q.empty()){
        int curr = q.front() ;

        q.pop() ;

        for(int child : ar[curr]) {
            if(vis[child]==0){
                q.push(child) ;
                vis[child] = 1;
                dis[child] = dis[curr] + 1 ;
            }
        }
    }

}


int main() {

    int t , n, m ,a ,b ;

    cin >> t ;

    while(t--) {

        cin >> n >> m ;

    for(int i =1 ; i <= n ; i++) {
        ar[i].clear() , vis[i] = 0 , dis[i] = 0 ; }

    for(int i = 1 ; i <= m ; i++) {
            cin >> a >> b ,ar[a].push_back(b) , ar[b].push_back(a) ;
        }

        bfs(1) ;

    cout << dis[n] << endl;

    }

}


/*

2

3 2
1 2
2 3

4 4
1 2
2 3
3 4
4 2

*/

/*

2

2

*/

/*


void bfs(int src) {

    queue<int> q;
    q.push(src) ;
    vis[src] = 1 ;
    dis[src] = 0 ;

    while(!q.empty()){
        int curr = q.front() ;

        q.pop() ;



        for(int child : ar[curr]) {
            if(vis[child]==0) {
                q.push(child) ;
                dis[child] = dis[src] + 1 ;
                vis[child] = 1 ;
            }
        }
    }
}

*/
