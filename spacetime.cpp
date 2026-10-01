// #include<iostream>
// using namespace std;
// int main(){
// int arr[] = {4,5,6,8,9,1,7};
// int n = sizeof(arr)/sizeof(int);
// for(int i=0; i<n; i++){
//     if(arr[i] == 9 ){
//        return i;
//     }cout << i <<endl;
// }
// }

// LINEAR SEARCH IN ARRAY

// #include<iostream>
// using namespace std;
// int s(int arr[],int n, int k){
//     for(int i=0; i<n; i++){
//         if(arr[i] == k){
//             return i;
//         }
//     }return -1;
// }
// int main(){
//     int arr[] = {1,2,5,4,8,9,7,};
//     int n = sizeof(arr)/sizeof(int);
//     cout<<  s(arr,n,4);
// }



// REVERSE A ARRAY WITH SPACE IN IT





// #include<iostream>
// using namespace std;
// void print(int arr[],int n){
//     for(int i=0; i<n; i++){
//         cout<< arr[i] << ",";
//     }
// }
// int main(){
// int arr[]={5,6,8,9,7};
// int n = sizeof(arr)/sizeof(int);
// int copyarr[n];
// for(int i=0; i<n; i++){
//     int j = n-i-1;
//     copyarr[i] = arr[j];
// }
// for(int i=0; i<n; i++){
//     arr[i]=copyarr[i];
// }
// print(arr,n);
// }



// REVERSE AN ARRAY WITHOUT SPACE


// #include<iostream>
// using namespace std;
// void s(int array[],int n){
//     for(int i=0; i<n; i++){
//         cout<<array[i]<<" , ";
//     }
// }
// int main(){
// int array[]={6,9,7,3,5,4,};
// int n = sizeof(array)/sizeof(int);
// int start = 0;
// int end = n-1;

// while(start<end){
// swap(array[start],array[end]);
// start++;
// end--;
// }
// s(array,n);
// } 


// #include<iostream>
// using namespace std;
// void s(int array[],int n){
//     for(int i=0; i<n; i++){
//         cout<<array[i]<<" , ";
//     }
// }
// int main(){
// int array[]={6,9,7,3,5,4,};
// int n = sizeof(array)/sizeof(int);
// int start = 0;
// int end = n-1;

// while(start<end){
// int temp = array[start];
// array[start] = array[end];
// array[end] = temp;
// start++;
// end--;
// }
// s(array,n);
// }


// BINARY SEARCH
// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={2,3,4,5,6,7,8,9};
// int n = sizeof(arr)/sizeof(int);
// int start = 0;
// int end = n-1;
// int key = 8;
// while(start<=end){
// int mid = (start+end)/2;
// if (arr[mid]== key){
//     cout<< "key  found at index :" << mid <<endl;
//     return 0;
// }else if(arr[mid]<key){
//     start = mid+1;
// }else if(arr[mid]>key){
//     end = mid-1;
// } 
// } return -1;
// }

// #include<iostream>
// using namespace std;
// int s(int arr[],int n ,int k){
// int start = 0;
// int end = n-1;
// while(arr[start] <= arr[end]){
//     int  mid = (start+end)/2;
//     if(arr[mid]== k){
//            return mid ;
//     }else if(arr[mid]<k){
//         start = mid+1;
//     }else{
//         end = mid-1;
//     } 
// }
// return 1;
// }
// int main(){
// int arr[] = {2,3,5,6,7,8,9};
// int n = sizeof(arr)/sizeof(int);
// cout<< s(arr,n,8);
// }

// #include<iostream>
// using namespace std;
// int main(){
  
//     int arr[]= {2,5,9,8,};
// int n = sizeof(arr)/sizeof(int);
//     for(int i=0; i<n; i++){
//         cout<< arr[i] << endl;
//     }
// }
//POINTERS ARITHMETICS

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int *ptr = &a;
//     cout<< ptr<< endl;
//     *ptr++;
//     cout<< ptr <<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int *ptr = &a;
//     cout<< ptr<< endl;
//     ptr = ptr+3;
//     cout<< (ptr-3) <<endl;
// }

// #include<iostream>
// using namespace std;
// void g (int *ptr, int n){
//     for(int i=0; i<n; i++){
//     cout<< *ptr  << endl;
//     ptr  = ptr + 1;}
// }
// int main(){
//     int arr[5]= {2,21,5,8,9};
//     int n = sizeof(arr)/sizeof(int);
//     g(arr,n);
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,8,6,8,4,8,};
    int *ptr1 = arr;
    int *ptr4 = ptr1 +3;
    cout<< (ptr1 == arr) << endl;
}
nhnngngnjn