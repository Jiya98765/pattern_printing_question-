#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    // cin >>n ;

    for(int r=1; r<=n ; r+=1){

        //space line 
        for(int c = 1 ; c<=n-r; c+=1){
            cout<<" ";
        }

        for(int c=1; c<=r; c+=1){
            cout<<r-c+1;
            
        }

        cout<<endl;
    }
};