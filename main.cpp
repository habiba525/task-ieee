#include <iostream>

using namespace std;

int main()
{
    int rows=3,columns=3;
int arr[rows][columns];
cout<<"Enter the elements of the matrix [3][3]:"<<endl;
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
  cout<<"Enter element ["<<i+1<<","<<j+1<<"]:" ;
        cin>>arr[i][j];
        cout<<endl;
    }
}
cout<<"The  matrix is: "<<endl;
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}
cout<<"The summation of each row is: "<<endl;
for(int i=0;i<rows;i++){
        int summation=0;
    for(int j=0;j<columns;j++){
        summation+=arr[i][j];
        }
        cout<< "The summation of row ("<<i+1<<")is: "<<summation<<endl;
}
cout<<"The product of each row is: "<<endl;
for(int i=0;i<rows;i++){
    int product=1;
    for(int j=0;j<columns;j++){
        product*=arr[i][j];
    } cout<< "The product of row ("<<i+1<<")is: "<<product<<endl;

}
return 0;
}
