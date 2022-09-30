// GNU C++17	Accepted	358 ms	400 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m,tmp;
vector<int> prefix;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while(cin>>n){
        prefix.clear(); prefix.resize(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>prefix[i];
            prefix[i]+=prefix[i-1];
        }
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>tmp;
            cout<<(lower_bound(prefix.begin(),prefix.end(),tmp)-prefix.begin())<<endl;
        }
        
    }
}