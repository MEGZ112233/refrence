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
 pair <int ,  int >  dfs1( int node  ,  int par   ){
  // the the farthest node will always bs leaf node 
          int mx   = 0  , leaf   =  -1 ;

          for (auto [child  , cost] :  adj[node]){
            if(child  == par)continue  ;
              pair <int , int > curr  = dfs1(child ,  node )  ; 
              if (curr.ff+  cost  > mx ){
                mx  =  curr.ff  +  cost  ; 
                leaf  =  curr.ss ; 
              }
          }
          if (sz(adj[node])==1 and mx  ==0 )leaf  =node  ;
          // mx hikon bzero lma el node tkon leaf 3l4an  mafesh 7aga t7tha 
          return  {mx  ,  leaf} ; 
}
void acc(){
     int n ; cin >>n; 
     for (int i =  0 ; i < n-1 ; i++){
      int x , y ;cin >>x>>y  ; 
      adj[x].push_back({y,1}) ; 
      adj[y].push_back({x,1}) ; 
     }
      int leaf  =  dfs1(1,-1).ss;
      cout <<dfs1(dfs1(1,-1).ss ,-1 ).ff<<el ; 
    
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
