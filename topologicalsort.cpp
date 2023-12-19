#include<bits/stdc++.h>

using namespace std ;

/*

vector<int> ar[100001] ;
int vis[100001] ;
int in[100001] ;

vector<int> res ;

void kahn(int n) {

    queue<int> q ;

    for(int i =1 ; i <= n ; i++) {
        if(in[i]==0){
            q.push(i) ;
        }
    }

    while(!q.empty()) {
        int curr = q.front() ;
        res.push_back(curr) ;
        q.pop() ;

        for(int child : ar[curr]) {

            in[child]-- ;

            if(in[child] == 0) q.push(child) ;


        }

    }


    cout << "TOPSORT : "  ;
    for(int node : res) {
        cout << node << " " ;
    }


}

int main() {

    int n ,m , a, b ;

    cin >> n >> m ;

    for(int i = 1 ; i<=m ; i++) {
        cin >> a >> b ;
        ar[a].push_back(b) ;
        in[b]++ ;
    }

    kahn(n) ;
}


*/

vector<int> ar[10001] ;
int vis[100001] ;
int in[100001] ;

vector<int> res ;

void khan(int n) {

    queue<int> q ;

    for(int i = 0  ; i< n ; i++) {
        if(in[i]==0) q.push(i) ;
    }

    while(!q.empty()){
        int curr = q.front() ;
        res.push_back(curr) ;
        q.pop() ;

        for(int child : ar[curr]){
            in[child]-- ;

            if(in[child]==0)q.push(child) ;
        }
    }

    cout << "TOPSORT : ";

    for(int i = 1 ; i<= n ; i++) {
        cout << res[i] << " " ;
    }
}

int main(){

    int n ,m , a,b ;

    cin >> n >> m ;

    for(int i=1 ; i<=m;i++) {
        cin >> a>> b ;
        ar[a].push_back(b) ;
        in[b]++ ;
    }

    khan(n) ;
}

/*
9 10
1 2
3 4
1 8
2 9
2 5
4 5
4 8
5 9
5 7
6 7

*/
