#include <iostream>
using namespace std;
void uniqueValue(int arr1[],int arr2[],int arr3[],int SIZE,int &uniqueCount){
	uniqueCount=0;
	for(int i=0;i<SIZE;i++){
		bool isUnique=true;
		for(int j=0;j<SIZE;j++){
			if(arr1[i]==arr2[j]){
				isUnique=false;
				break;
			}
		}
		if(isUnique){
			arr3[uniqueCount++]=arr1[i];
		}
	}
	for(int i=0;i<SIZE;i++){
		bool isUnique=true;
		for(int j=0;j<SIZE;j++){
			if(arr2[i]==arr1[j]){
				isUnique=false;
				break;
			}
		}
		if(isUnique){
			arr3[uniqueCount++]=arr2[i];
		}
	}
}
int main()
{
	const int SIZE=10;
	int arr1[SIZE]={55, 12, 67, 90, 13, 41, 70, 63, 44, 5};
	int arr2[SIZE]={11, 33, 55, 61, 22, 55, 23, 12, 55, 12};
	int arr3[SIZE*2];
	int uniqueCount=0;
	uniqueValue(arr1,arr2,arr3,SIZE,uniqueCount);
	cout<<"The unique values of the array are :"<<endl;
	for(int i=0;i<SIZE;i++){
        cout<<arr3[i]<<" , ";
	}
 return 0;
}