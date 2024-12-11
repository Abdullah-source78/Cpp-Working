#include<iostream>
using namespace std;
int display_even_odd(int arr[],int SIZE){
    int sum = 0;
    int index = 0;
    
    for(int i = 0;i<SIZE;i++){
        if(arr[i]<8){

            sum += arr[i];
            // cout<<" Value less than 8 is at "<< i <<" index : ";
        }
    }
    return sum;

}
int main(){

    int const SIZE = 10;
    int arr[SIZE] ;
    
    for(int i = 0;i<SIZE;i++){
        cout<<"Enter value at "<<i<<" index : ";
        cin>>arr[i];

    }
    int sum = display_even_odd(arr,SIZE);
    cout<<"The sum of the values of array less than 8 is "<< sum <<endl;


}