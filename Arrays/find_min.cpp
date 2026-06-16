#include<iostream>
using namespace std;
int main (){
    int arr[]={9,3,4,5,6};
    int small = arr[0];
    int size =5;
    for(int i=0; i<size;i++){
    if(arr[i]<small){
        small=arr[i];
 }
}
cout<<small<<endl;

    }