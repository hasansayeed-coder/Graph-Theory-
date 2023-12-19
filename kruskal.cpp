#include<bits/stdc++.h>
#include<algorithm>

using namespace std ;


struct edge{
    int a ;
    int b ;
    int w ;
};

edge ar[100000] ;
int par[10000] ;

bool comp(edge a , edge b) {


    if(a.w < b.w) return true ;

    return false ;
}

int findPar(int a) {

    if(par[a]==-1) return a ;

    return par[a] = findPar(par[a]) ;
}

void mergeSet(int a , int b) {

    par[a] = b ;

}

int main() {

    int n , m ,a ,b ;

    cin >> n >> m ;
    for(int i =1 ; i<=n ; i++) par[i] = -1 ;

    for(int i =0 ; i<m ; i++) {
        cin >> ar[i].a >> ar[i].b >> ar[i].w ;
    }

    int sum = 0 ;

    sort(ar , ar + m  , comp) ;


    for(int i =0  ;i< m ; i++) {

        a = findPar(ar[i].a) ;
        b = findPar(ar[i].b) ;

        if( a != b) {
            sum += ar[i].w ;
            mergeSet(a , b ) ;
        }

    }

    cout << sum << endl;

}

/*
4 5

1 2 7
1 4 6
4 2 9
4 3 8
2 3 6

19
*/
