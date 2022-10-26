#include <bits/stdc++.h>
using namespace std;
// Write any include statements here
double cnt=0,cn=0,k;
double getHitProbability(int R, int C, vector<vector<int>> G) {
 for(int i=0;i<R;i++){
   for(int j=0;j<C;j++){
     if(G[i][j]==0) cnt++;
     else if(G[i][j]==1) cn++;
   }
 }
     k=cn/(R*C);
  
  return k;
}
