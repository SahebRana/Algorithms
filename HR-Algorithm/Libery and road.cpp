#include <iostream>
using namespace std;
void connected(vector<vector <int> > &pair,vector< bool > &visited,int k){
    for(int i=0;i<pair[k].size();i++){
        if(!visited[pair[k][i]]){
           visited[pair[k][i]]=true;
           connected(pair,visited,i);
        }
      }
    return ;
}

int main(){
    int q;
    cin >> q;


    for(int a0 = 0; a0 < q; a0++){

       long long n,m,x,y;
        scanf("%lld%lld%lld%lld",&n,&m,&x,&y);
       vector<vector<int > > pair(n);
        for(int a1 = 0; a1 < m; a1++){
            int city_1;
            int city_2;
            scanf("%d%d",&city_1,&city_2);
            pair[city_1-1].push_back(city_2-1);
            pair[city_2-1].push_back(city_1-1);
        }
         if(x<=y){
            printf("%lld\n",n*x);
        }
        else{
            long long sum=0;
   vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            visited[i]=true;
            connected(pair,visited,i);
            sum++;
          }
     }
         printf("%lld\n",(n-sum)*y+x*sum);
    }
    }


    return 0;
}
