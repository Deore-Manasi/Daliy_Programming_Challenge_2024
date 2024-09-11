#include<iostream>
using namespace std;

void findduplicatenumber(int arr[],int n){
    int i,j;
    bool flag = false;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"The Duplicated number is : "<<arr[i]<<endl;
                flag =true;
            }
            
        }
    }
     if(flag==false){
        cout<<"No number is duplicated in array!";
     }
}

int main ()
{

    int arr[] = {3,1,3,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    findduplicatenumber(arr,n);

    return 0;
} 