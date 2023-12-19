#include<bits/stdc++.h>


using namespace std ;

#define N 1000

struct Edge {
    int source, dest, weight;
};

vector<int> Des[100001] ;

int singleSourceSingleDestinationAlgorithm(int Graph , int src ,int T){

    if(src == T) {
        for(int )
    }




}



int func(vector<Edge> Graph , src , vector<int> dp){


    int L1[N][N] , L2[N][N] ;

    int L3[N] ;

    while(dp.size() > 0) {
        for(int i = 0 ; i< dp.size() ; i++){

        }
    }
}



int main() {


    vector<Edge> Graph =
    {
        {0, 1, 10},
        {0, 4, 3},
        {1, 2, 2},
        {1, 4, 4},
        {2, 3, 9},
        {3, 2, 7},
        {4, 1, 1},
        {4, 2, 8},
        {4, 3, 2}
    };


    int dp,temp;

    cin >> dp;

    for(int i =1 ; i<= dp ;i++) {
        cin >> temp ;
        dp.push_back(temp) ;
    }

    func(Graph , 1  ,dp )  ;




}
