1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No. of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}


2
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of rows:";
    cin>>n;
    for (int i=3;i<=n;i+=3){
        cout<<i<<" ";
    }
    cout<<endl;
}


3 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of rows:";
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<n*i<<" ";
    }
    cout<<endl;
}


4
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of rows:";
    cin>>n;
    int a=4;
    for (int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+3;
    }
    cout<<endl;
}


5
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of rows:";
    cin>>n;
    int a=3;
    for (int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*4;
    }
    cout<<endl;
}


6
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<26){
        cout<<"The ascill values are:"<<(char)(i+'A')<< "is" <<(int)(i+'A')<<endl;
        i++;
    }
    
}

