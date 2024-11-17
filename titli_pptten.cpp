#include<iostream>
using namespace std;
int main(){
    int n = 4 ;
    cout<<"enter a number:";
    cin>>n;
    for(int r=1; r<=n; r+=1){

        //print *
        for(int c=1; c<=r; c+=1){
            cout<<"*"<<" ";
        }

        for(int c=1; c<= 2*n-2*r; c+=1){
            cout<<" "<<" ";
        }

        for(int c=1; c<=r; c+=1){
            cout<<"*" <<" ";
        }
        cout<<endl;
    }
    for(int r=n-1; r>=1; r-=1){

        //print *
        for(int c=1; c<=r; c+=1){
            cout<<"*"<<" ";
        }

        for(int c=1; c<= 2*n-2*r; c+=1){
            cout<<" "<<" ";
        }

        for(int c=1; c<=r; c+=1){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}