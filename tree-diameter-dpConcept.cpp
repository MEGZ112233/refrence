#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define lll __int128 
#define ll long long  
#define all(v)  v.begin(),v.end()
#define pb(v)  push_back(v)
#define sz(x)  (int) (x).size()
#define ff first 
#define ss second
#define ld long double
#define el '\n'
#define Megz ios::sync_with_stdio(0);cin.tie(0);ios_base::sync_with_stdio(0);
using namespace std ;
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
using namespace std; 
const  int N  =  2e5+10  , mod  =  1e9+7; 
//order_of_key (k) : Number of items strictly smaller than k .
//find_by_order(k) : K-th element in a set (counting from zero).
vector <array<long long  ,2 >>adj[N]  ; 
vector <long long >dist(N+1 , 1e15) ; 
pair <int , int > dfs (int node ,  int par ){
    int diamter  =  0  ; 
  vector <int>length (3,0) ; 
  for (auto [child ,  cost] :  adj[node]){
    if (par == child)continue  ; 
  pair <int , int >  curr   =  dfs(child  ,  node) ; 
    sort(all(length)) ; 
    length[0] =  curr.ss  +  cost  ;
    // el cost de 5aleha 1 low tree unweigted 
    diamter =  max (diamter ,  curr.ff) ; 
  }
  sort(all(length)) ; 
  diamter  = max (diamter  , length[1] +  length[2]) ; 
  return {diamter ,  length[2]} ; 
 }
void acc(){
     int n ; cin >>n; 
     for (int i =  0 ; i < n-1 ; i++){
      int x , y ;cin >>x>>y  ; 
      adj[x].push_back({y,1}) ; 
      adj[y].push_back({x,1}) ; 
     }
     cout <<dfs(1, -1).ff<<el ; 
}
int main()
{
 //   Megz 
           int t=1;
     //   cin >>t;  
        while(t--){
            acc()  ; 
   
        }
  
}
