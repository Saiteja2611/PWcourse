1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        int a=i+1;
        for(int k=1;k<=i-1;k++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}


2 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<char(k+64);
        }
        int a=i+1;
        for(int k=1;k<=i-1;k++){
            cout<<char(a+64);
            a++;
        }
        cout<<endl;
    }
}


3 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
            cout<<char(k+64);
        }
        int a=2;
        for(int k=1;k<=i-1;k++){
            cout<<char(a+64);
            a++;
        }
        cout<<endl;
    }
}


4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<char(i+64);
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){
            cout<<char(a+64);
            a++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            a++;
        }
        for(int j=1;j<=n-i;j++){
            cout<<char(a+64);
            a++;
        }
        cout<<endl;
    }
}


5 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        if(i<=4) cout<<i;
        else cout<<2*n-i;
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int b=1;
        for(int j=1;j<=n-i;j++){
            cout<<b;
            b++;
        }
        
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        int a=n-i;
        for(int j=1;j<=n-i;j++){
            
            cout<<a;
            a--;
        }
        cout<<endl;
    }
}


6 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=2;j<=i;j++){
             cout<<" ";
        }
        for(int j=1;j<=1;j++){
           cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
             cout<<" ";
        }
        for(int j=1;j<=n-i-1;j++){
             cout<<" ";
        }
        for(int j=1;j<=1;j++){
            if(i< n) cout<<"*";
        }
        cout<<endl;
    }
}


7 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int i=1;i<=1;i++){
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout<<" ";
        }
        for(int j=3;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=1;k++){
            if(i>1) cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=1;k++){
            if(i>=1)
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout<<" ";
        }
        for(int j=2;j<=i-1;j++){
            cout<<" ";
        } 
        for(int k=1;k<=1;k++){
            if(i>1)
            cout<<"*";
        }
        cout<<endl;
    
    }
}



8 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=i;k<=i;k++){
            cout<<k;
        }
        for(int j=2;j<=i;j++){
            cout<<" ";
        }
        for(int j=3;j<=i;j++){
            cout<<" ";
        }
        for(int k=i;k<=i;k++){
            if(i>1)
            cout<<k;
        }
        cout<<endl;
    }
}


9
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j==n+1) cout<<"*";
            else if(j==n || i==n) cout<<"*";
            else cout<<" ";
        
        }
        for(int j=1;j<=n-1;j++){
            if(j==i-1) cout<<"*";
            else if(j==n || i==n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    n--;
    for(int i=1;i<=n;i++){
        cout<<" ";
        for(int j=1;j<=n;j++){
            if(i==j) cout<<"*";
            else if(j==n) cout<<"*";
            else cout<<" ";
        }
        for(int j=1;j<=n-1;j++){
            if(i+j==n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}


10 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    int m=n-1;
    int nsp=2*m-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp-=2;
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    nsp=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}


11
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    nsp=2*m-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp-=2;
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
}