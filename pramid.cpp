#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter a number:";
    cin >>n ;

    for(int r=1; r<=n ; r+=1){

        //space line 
        for(int c = 1 ; c<=n-r; c+=1){
            cout<<" ";
        }

        for(int c=1; c<=2*r-1; c+=1){
            cout<<'*';

        }

        cout<<endl;
    }
};