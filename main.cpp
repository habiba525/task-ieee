#include <iostream>

using namespace std;

int main()
{
int length=10;
int arr[length];
cout<<"Enter 10 values: ";
for(int i=0;i<length;i++){
    cin>>arr[i];
}
cout<<"The values are: ";
for(int i=0;i<length;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

cout<<"The values in reverse are: ";
for(int i=length-1;i>=0;i--){
    cout<<arr[i]<<" ";
}cout<<endl;
int summation=0;
for(int i=0;i<length;i++){
summation+=arr[i];
}
cout<<"The summation of the values is: "<<summation<<endl;
int product=1;
for(int i=0;i<length;i++){
    product*=arr[i];
}
cout<<"The product of the values is: "<<product;
    return 0;
}
