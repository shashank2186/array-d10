// #include<iostream>
// using namespace std;
// int main(){
 //   int marks[5] = {1,2,45,49,47,};
    // cout << marks[0] << endl;
    //  cout << marks[2] << endl;
    //   cout << marks[3] << endl;
    //    cout << marks[4] << endl;
// cout << sizeof(marks) << endl;
//     cout << sizeof(marks) / sizeof(int) << endl;
// return 0;
// }

// OUTPUT A ARRAY


// #include<iostream>
// using namespace std;
// int main(){
// int array[6] = {6,5,4,89,1,32,};
// int n = sizeof(array)/sizeof(int);
// for(int i=0; i<n; i++){
//     cout<< array[i] <<endl;
// }
// return 0;
// }

// INPUT IN ARRAY


// #include<iostream>
// using namespace  std;
// int main(){
// int array[6];
// int n = sizeof(array)/sizeof(int);

// for(int i = 0; i<n; i++){
//     cin>> array[i];
// }

// for(int i=0; i<n; i++){
//     cout<< array[i] << endl;
// }
// }

// INPUT OF ARRAY WITH N NUMBER

// #include<iostream>
// using namespace std;
// int main(){
// int s;
// cout << " lenth of array : ";
// cin >> s;
// int array[s];
// int n = sizeof(array)/sizeof(int);
// for(int i=0; i<n; i++){
//     cin>> array[i];
// }
// for(int i=0; i<n; i++){
//     cout << array[i] << endl;
// }
// }
 
// LARGEST  ELEMENT OF ARRAY

// #include<iostream>
// using namespace std;
// int main(){
// int array[6] = {5 ,89,4,6,4,5,};
// int m = array[0];
// int n = sizeof(array)/sizeof(int);
// for(int i= 0; i<n; i++){
//     if(array[i] > m){
//         m = array[i];
//     cout << m << endl;
//     }
// }cout<< "max = "  << m <<endl;
// }

//  SMALLEST ELEMENT OF ARRAY

// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={4,2,3,1,5,};
// int s = arr[0];
// int n = sizeof(arr)/sizeof(int);
// for(int i=0; i<n; i++){
//     if(arr[i] < s){
//         s = arr[i];
//     }
// }cout << "smallest "<< s << endl;
// }

//ARRAY ARE PASSED BY REFRENCE


// #include<iostream>
// using namespace std;
// void s(int arr[]){
//     arr[2]= 2000;
// }
// void d (int *ptr){
//     ptr[0] = 3000;
// }
// int main(){
    
// int arr[]= {1,3,5,84,41};
// cout << *(arr+1) <<endl;
// cout << *(arr+2 )<<endl;
// s(arr);
// cout << arr[0] <<endl;
// cout << arr[2] <<endl;;
// d(arr);
// cout<< arr[0] <<endl;

// }

// GIVE SIZE WHEN PASSING ARRAY THROUGH FUNCTION

// #include<iostream>
// using namespace std;
// void p(int arr[]){
// cout<< sizeof(arr) << endl;
// }
// int main(){
// int arr[]= {1,5,6,8};
// int n = sizeof(arr)/sizeof(int);
// p(arr);
// cout<< "array size ="<< sizeof(arr) << endl;
// }

#include<iostream>
using namespace std;
void p(int g[],int n){
for(int i=0; i<n; i++){
cout<< g[i] <<endl;
}
}
int main(){
int arr[]= {1,5,6,8};
int n = sizeof(arr)/sizeof(int);
p(arr,n);
}
