#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int r=1; r<=n+1; r+=1){

        for(int c=n-r+1; c>=1; c-=1){
            cout<<" ";
        }
        for(int c=1; c<=r-1; c+=1){
            cout<<"*"<<" ";
        }

    cout<<endl;
    }

for(int r=4+1; r>=1; r-=1){

        for(int c=n-r+1; c>=1; c-=1){
            cout<<" ";
        }
        for(int c=1; c<=r-1; c+=1){
            cout<<"*"<<" ";
        }

    cout<<endl;
    }

};