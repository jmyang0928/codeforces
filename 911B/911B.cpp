// GNU C++17	Accepted	15 ms	8 KB
#include<iostream>
using namespace std;
 
int n,a,b,cur;
bool test(int t){
    if(a<t || b<t) return false;
    return (a/t+b/t>=n);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while(cin>>n>>a>>b){
        cur=0;
        for(int jump=min(a,b);jump>0;jump>>=1){
            while(test(cur+jump)) cur+=jump;
        }
        cout<<cur<<endl;
    }
}