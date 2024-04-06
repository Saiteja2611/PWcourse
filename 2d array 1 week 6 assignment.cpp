1 
#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}


2
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows:";
    cin>>m;
    int n;
    cout<<"enter no of cols:";
    cin>>n;
    int a[m][n];
    cout<<"enter first martrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            
        }
        cout<<endl;
    }
    int b[m][n];
    cout<<"enter second matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
            
        }
    }
    int res[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}


3 
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows:";
    cin>>m;
    int n;
    cout<<"enter no of cols:";
    cin>>n;
    int a[m][n];
    cout<<"enter  martrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            
        }
        cout<<endl;
    }
    int l1 , l2 , r1 , r2;
    cout<<"Enter the value of l1 coordinate :";
    cin>>l1;
    cout<<"Enter the value of l2 coordinate :";
    cin>>l2;
    cout<<"Enter the value of r1 coordinate :";
    cin>>r1;
    cout<<"Enter the value of r2 coordinate :";
    cin>>r2;
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum += a[i][j];
        }
    }
    cout<<sum;
    
}


4 
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows:";
    cin>>m;
    int n;
    cout<<"enter no of cols:";
    cin>>n;
    int a[m][n];
    cout<<"enter  martrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>a[i+1][j+1]){
                cout<<a[i][j];
            }
        }
    }
    cout<<endl;
}


5 
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows:";
    cin>>m;
    int n;
    cout<<"enter no of cols:";
    cin>>n;
    int a[m][n];
    cout<<"enter  martrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            
        }
        cout<<endl;
    }
    int maxsum=INT_MIN;
    int maxrow=-1;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
        if(sum>=maxsum){
            maxsum=sum;
            maxrow=i;
        }
    }
    cout<<maxrow;
}


6
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows:";
    cin>>m;
    int a[m][m];
    cout<<"enter  martrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==m/2 || j==m/2){
                cout<<a[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

