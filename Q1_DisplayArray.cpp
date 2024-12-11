#include<iostream>
using namespace std;
void display_array(int arr[],int SIZE){
    for(int i = 0;i<SIZE;i++){
        cout<<"Enter value at "<<i<<" index : ";
        cin>>arr[i];

    }
    for(int i = 0;i<SIZE;i++){
        cout<<"Value at "<<i<<" index is : "<<arr[i]<<endl;
    }
}
int main(){

    int const SIZE = 5;
    int arr[SIZE] ;
    display_array(arr,SIZE);
    // for(int i = 1;i<=SIZE;i++){
    //     cout<<arr[i]<<" is at "<<i<<" index :"<<endl;
    // }


}