// GNU C++17	Accepted	30 ms	8 KB
#include<iostream>
using namespace std;

int n,k,l,r,mid;
int calc(int input){
    int calcNum=0;
    for(int i=input;i>0;i/=k){
        calcNum+=i;
    }
    return calcNum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while(cin>>n>>k){
        l=0; r=n;
        while(r!=l){
            mid=(l+r)/2;
            if(calc(mid)<n){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        cout<<l<<endl;
    }
}