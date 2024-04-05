1
#include<iostream>
using namespace std;
int countTriplets(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            for(int k=j+1;k<=n-1;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter value:";
    cin>>n;
    
    cout<<countTriplets(arr,n,x);
}


2 
#include <iostream>
using namespace std;
int mul(int x, int res[], int res_size){
    int carry = 0;
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
    res[res_size] = carry % 10;
    carry = carry / 10;
    res_size++;
    }
    return res_size;
}
int main() {
    int n;
    cin>>n;
    int res[500];
    res[0] = 1;
    int res_size = 1;
    mul(n,res,res_size);
}

3
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            if(i!=j && arr[i] == arr[j]) break;
            if(j==n){
                cout<<arr[i];
                return 0;
            }
        }
    }
    return 0;
}


4
#include <iostream>
using namespace std;
int main(){
int A[] = { 0, 6, 0, 7, 6, 0, 9, 1 };
int n = 8;
int j = 0;
for (int i = 0; i < n; i++) {
if (A[i] != 0) {
swap(A[j], A[i]);
j++;
}
}
for (int i = 0; i < n; i++) {
cout << A[i] << " ";
}
return 0;
}