1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int product=1;
    for(int i=0;i<=n-1;i++){
        product=product*arr[i];
    }
    cout<<product;
    
}


2
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    int smax=INT_MIN;
     for(int i=0;i<=n-1;i++){
        if(smax<arr[i] && arr[i]!=max) smax=arr[i];
    }
    cout<<smax;
}


3
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<min;
}


4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                flag=true;
                cout<<"dublicate";
                break;
            }
        }
    }
    if(flag==false) cout<<"no dublicate";
    return 0;
}



5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i+2){
        if(arr[i]+1!=arr[i+1])
        cout<<arr[i]+1<<" ";
        break;
        
    }
}

6 
output:49


