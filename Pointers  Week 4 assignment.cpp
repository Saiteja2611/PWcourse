1
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int *ptr1=&x;
    int *ptr2=&y;
    int b=(*ptr1)*(*ptr2);
    cout<<b<<" ";
}


2
1)p is a pointer and q is an integer.


3 
3)11 10 11


4 
3) a gets value of b


5
It is correct but it will get runtime error

