// GNU C++17	Accepted	374 ms	400 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m,tmp;
vector<int> cola;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while(cin>>n){
        cola.clear(); cola.resize(n,0);
        for(int i=0;i<n;i++){
            cin>>cola[i];
        }
        sort(cola.begin(),cola.end());
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>tmp;
            cout<<(upper_bound(cola.begin(),cola.end(),tmp)-cola.begin())<<endl;
        }
        
    }
}