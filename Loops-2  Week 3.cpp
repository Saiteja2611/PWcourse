1
In while loop
In while loop
In while loop
In while loop
In while loop
In while loop
In while loop
In while loop
In while loop
--
--
--
--
--
--


2 
Hello
Hello
Hello


3
In for loop
In for loop
In for loop


4

9 1 
8 2 
7 3 
6 4 
5 5
4 6 


5
#include <iostream>
using namespace std;
int main( ) {
int n;
cin >> n;
int sum = 0;
while (n > 0) {
int x = n % 10;
sum = sum+ (x % 2 == 0 ? x : 0);
n /= 10;
}
cout << sum;
}


6
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r=0;
    int temp=n;
    while(temp>0){
        r=r*10;
        r=r+(temp%10);
        temp=temp/10;
        
    }
    cout<<n+r;
    
}


7
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=1;
    for (int i=1;i<=n;i++){
        f=f*i;
        cout<<f<<endl;
    }
}


8
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1,b=1;
    cout<<a<<" "<<b <<" ";
    for (int i=1;i<=n-2;i++){
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
}


9
#include<iostream>
using namespace std;
int main(){
    for (int i=1;i<=500;i++){
        int x=0,temp=i;
        while(temp>0){
            int n=temp%10;
            x=x+(n*n*n);
            temp=temp/10;
            
        }
            
            
        if(x==i){
            cout<<i<<endl;
        }
    }
}


