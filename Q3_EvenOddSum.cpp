#include<iostream>
using namespace std;
void display_even_odd(int arr[],int SIZE){
    for(int i = 0;i<SIZE;i++){
        cout<<"Enter value at "<<i<<" index : ";
        cin>>arr[i];

    }
    int oddsum=0,evensum = 0;
    // int oddidx = 0 , evenidx= 0;
    for(int i = 0;i<SIZE;i++){
        if(arr[i]%2==0){
            evensum += arr[i];
            cout<<"Value at "<<i<<" index is : "<<arr[i] << " and is Even :"<<endl;

        }else{
            oddsum += arr[i];
            cout<<"Value at "<<i<<" index is : "<<arr[i] << " and is odd :"<<endl;

        }
    }
    cout<<"The sum of even elements of the array is "<<evensum<<endl;
    cout<<"The sum of odd elements of the array is "<<oddsum<<endl;
}
int main(){
    int const SIZE = 5;
    int arr[SIZE] ;
    display_even_odd(arr,SIZE);
}