#include<iostream>
using namespace std;


int findmissingnumber(int arr[],int n){
        int i,k = 1;
        int flag = 0;
        for( i = 0;i<n;i++){
            if(arr[i] == k){
                flag=0;
            }
            else if(arr[i]!= k){
                flag=1;
            }
            while (flag)
            {
               return k;
            }
            k++;
        }
 return 0;
}



int main ()
{
    int arr[]={1,2,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int number = findmissingnumber(arr,n);

    if(number!= 0){

        cout<<"Missing number is : "<<number;
       
    }
    else
    {
        cout<<"No number is missing";
    }
    return 0;
} 