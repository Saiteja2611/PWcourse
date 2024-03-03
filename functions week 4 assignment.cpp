1
#include<iostream>
using namespace std;
int firstNSquare(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<" ";
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    firstNSquare(n);
}


2
#include<iostream>
using namespace std;
double area(int r){
    return 3.14*r*r;
}
int main(){
    int r;
    cin>>r;
    area(r);
    cout<<area(r);
}



3
#include<iostream>
using namespace std;
int oddNumbers(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";  
            
        }
        
    }
    return 0;
}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    oddNumbers(a,b);
}


4
#include<iostream>
using namespace std;
int square(int a){
    return a*a;
}
int noofDigits(int n){
    int ans=0;
    while(n>0){
        ans++;
        n=n/10;
        
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int x=noofDigits(n);
    cout<<square(x)<<" ";
}


5
2)1 
main function



6 
1)true
2)false



7
yes,if and only if they have different data types