#include<iostream>
using namespace std;


void leaderArr(int arr[],int n){
    int flag=0;
    for( int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
              flag=1;
            }
            else{
                flag=0;
                break;
            }
            
          }
         if(flag!=0){
            cout<<arr[i]<<" ";       
        }
     
        
    }
} 

int main ()
{
    int arr[]={16,17,4,3,5,2};
     int n=sizeof(arr)/sizeof(int);

    leaderArr(arr,n);
    return 0;
} 