1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"enter value:";
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
        
    }
    cout<<count;
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
    cout<<max;
    cout<<endl;
    int smax=INT_MIN;
     for(int i=0;i<=n-1;i++){
        if(smax<arr[i] && arr[i]!=max) smax=arr[i];
    }
    cout<<smax;
    cout<<endl;
    int tmax=INT_MIN;
     for(int i=0;i<=n-1;i++){
        if(tmax<arr[i] && arr[i]!=max && arr[i]!=smax) tmax=arr[i];
    }
    cout<<tmax;
}


3
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
    for(int i=0;i<=n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"no"<<" ";
            return 0;
        }
    }
    cout<<"yes";
    return 0;
}


4 
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
    int sum1=0;
    int sum2=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            sum1=sum1+arr[i];
        }
        else{
            sum2=sum2+arr[i];
        }
    }
    cout<<abs(sum1-sum2)<<" ";
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
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            cout<<arr[i]+10<<" ";
        }
        else{
            cout<<arr[i]*2<<" ";
        }
    }
}

6
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
    for(int i=0;i<=n-1;i++){
        int count=0;
        for(int j=0;j<=n-1;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i];
            return 0;
        }
    }
    cout<<"no unique";
    return 0;
    
}


7
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
    int flag = 0;
    for(int i=0; i<=n/2 && n!=0;i++){
        if(arr[i]!=arr[n-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag==1)
        cout<<"Not Palindrome";
    else
        cout<<"Palindrome";
}

8
error:-Invalid conversion from int to int*