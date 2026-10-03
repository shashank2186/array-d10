#include<iostream>
using namespace std;
void subarray(int arr[], int n){
    for (int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<< "(" << i << "," << j << ")" ;
        }cout << endl;
    }
}
int main(){
int arr[6]= {1,2,3,4,5,6,};
int n = sizeof(arr)/sizeof(int);
 subarray (arr,6);
return 0;
}