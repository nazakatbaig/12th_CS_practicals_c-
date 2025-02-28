// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"enter rows of array:";
    cin>>a;
    cout<<"enter columns of array:";
    cin>>b;
   int arr[a][b];
   for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
           cout<<"enter  no :"<<i<<" "<<j<<" ";
           cin>>arr[i][j];
        
          
       }
   }
   
   for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
           cout<<"["<<arr[i][j] <<" " <<"]";
       }
       cout<<endl;
   }
   

    return 0;
}

