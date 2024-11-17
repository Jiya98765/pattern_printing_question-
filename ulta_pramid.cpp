#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int r=1; r<=n; r+=1){
      

       for(int c=1; c<=r-1; c+=1)
       {
        cout<<" "<<" ";
       }

       for(int c=1; c<=2*n-2*r+1;c+=1 ){
        cout<<"#"<<" ";
       }

    //     for(int c=1; c<=n-r;c+=1 ){
    //     cout<<"#";
    //    }


       
      
       cout<<endl;
    }
    

};