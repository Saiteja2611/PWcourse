1 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
}


4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    for (int i=1;i<=n;i++){
        if(i%2==1)
            for (int j=1;j<=i;j++){
                cout<<j;
            }
        else
            for(int j=1;j<=i;j++){
                cout<<(char)(j+64);
            }
        cout<<endl;
    }
}


5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for (int i=0;i<n;i++){
        for (int j=1;j<=n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


6
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            if(i==1 || j==1 || i==m || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}


7
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
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
    cout<<"No of lines:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}


9
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
}


10
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}


11
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
               cout<<" ";
        }
        for (int j=1;j<=i;j++){
               cout<<"*";
        }
        cout<<endl;
    }
     for (int i=1;i<=n-1;i++){
        for (int j=1;j<=i;j++){
            cout<<" ";
        }
        for (int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


