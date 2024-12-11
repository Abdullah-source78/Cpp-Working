#include<iostream>
using namespace std;
void display_even_odd(int arr[],int SIZE){
    for(int i = 0;i<SIZE;i++){
        cout<<"Enter value at "<<i<<" index : ";
        cin>>arr[i];

    }
    for(int i = 0;i<SIZE;i++){
        if(arr[i]%2==0){
            cout<<"Value at "<<i<<" index is : "<<arr[i] << " and is Even :"<<endl;
        }else{
            cout<<"Value at "<<i<<" index is : "<<arr[i] << " and is odd :"<<endl;

        }
    }
}
int main(){

    int const SIZE = 5;
    int arr[SIZE] ;
    display_even_odd(arr,SIZE);



}