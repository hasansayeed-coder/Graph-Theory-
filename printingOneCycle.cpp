
#include<bits/stdc++.h>

using namespace std ;

vector<int> ar[1000001] ;
int vis[10001] ;
vector<int> temp ;


bool dfs(int node , int par) {

    vis[node] = 1 ;
    temp.push_back(node) ;

    for(int child : ar[node])
        if(vis[child]==0){
            if(dfs(child , node) == true) return true ;
        }

        else
            if(par != child){
                 temp.push_back(child) ;
                 return true;


            }



    temp.pop_back() ;

    return false ;
}

int main(){

    int n , m   ;

    cin >> n >> m ;

    int a,b ;

    for(int i = 0 ; i<m ; i++) {
        cin >> a  >> b ;

        ar[a].push_back(b) , ar[b].push_back(a) ;
    }

    //int cc_cnt =0 ;

    bool res = true;

    for(int i =1 ; i<=n ; i++) {
        if(vis[i]==0){
             res = dfs(i , -1) ;
        }

        /*
        if(res==0){
            break ;
        }
        */


    }
/*
    if(res==0) {
        cout << "Doesn't contain cycle" << endl;
    }

    else{
        cout << "contain cycle" << endl;
    }
*/


    //cout << "Contains cycle" << endl;

    for(int ele : temp) {
        cout << ele << " " ;
    }

    return 0 ;
}

/*

6 6
1 2
2 3
3 5
3 4
3 6
4 5


5 5
1 5
1 4
2 4
2 3
3 4


1 4 3 2 4

*/
