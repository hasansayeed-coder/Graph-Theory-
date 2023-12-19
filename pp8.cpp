#include<bits/stdc++.h>

using namespace std ;

#define mod 1000000007
vector<int> ar[100001] ;
int vis[100001] ;

int cc_size ;

void dfs(int node) {

    vis[node] = 1  ;
    cc_size++ ;

    for(int child : ar[node]) {
        if(vis[child]==0){
        dfs(child) ;
        }
    }
}

int main() {


    int n , m , a , b , t ;

    cin >> t  ;

    while(t--) {


        cin >> n >> m  ;

        for(int i = 1 ;i<= n ; i++) {
            ar[i].clear() ;
            vis[i] = 0 ;
        }

        for(int i =1 ; i<= m ; i++) {
            cin >> a >> b ,  ar[a].push_back(b) , ar[b].push_back(a) ;
        }

        long long res = 1 ;

        int cnt = 0 ;

        for(int i=1 ; i<= n; i++) {
            if(vis[i]==0) {
                cc_size = 0 ;
                dfs(i) , cnt++ ;

                res = (res * cc_size) % mod ;
            }
        }

        cout << endl;

        cout << cnt << " " << res << endl;
    }

}


/*
3
4 2
1 2
2 3

5 3
1 2
2 3
1 3

6 3
1 2
3 4
5 6

*/


/*

2 3

3 3

3 8

*/



