1 
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
            if(i==j || i+j==n-1){
                cout<<a[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
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
    cout<<"enter  martrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            
        }
        cout<<endl;
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            swap(a[i][j],a[j][i]);
        }
    }
    for(int j=m-1;j>=0;j--){
        for(int i=0;i<n;i++){
             cout<<a[i][j]<<" ";
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
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
            cout<<a[i][j]<<" ";
            }
        }
    }
}
 
    
4   
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) { 
        vector<vector<int> > matrix(n,vector<int> (n));
        int minr=0;
        int minc=0;
        int maxr=n-1;
        int maxc=n-1;
        int b=1;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc;j++){
                matrix[minr][j]=b;
                
                b++;
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
                matrix[i][maxc]=b;
            
                b++;
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            for(int j=maxc;j>=minc;j--){
                matrix[maxr][j]=b;
                b++;
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                matrix[i][minc]=b;
                
                b++;
            }
            minc++;
        }
        return matrix; 
    }
};


5
output:1234