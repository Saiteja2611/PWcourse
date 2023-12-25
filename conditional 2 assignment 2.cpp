1
#include <iostream>
using namespace std;
int main()
{
    int amount;
    int n1,n2,n5,n10,n20,n50,n100,n500;
    cout<<"Enter amount:"<<endl;
    cin>>amount;
    switch(amount>=500){
        case 1:
            n500=amount/500;
            amount=amount-n500*500;
            break;
    }
    switch(amount>=100){
        case 1:
            n100=amount/100;
            amount=amount-n100*100;
            break;
    }
    switch(amount>=50){
        case 1:
            n50=amount/50;
            amount=amount-n50*50;
            break;
    }
    switch(amount>=20){
        case 1:
            n20=amount/20;
            amount=amount-n20*20;
            break;
    }
    switch(amount>=10){
        case 1:
            n10=amount/10;
            amount=amount-n10*10;
            break;
    }
    switch(amount>=5){
        case 1:
            n5=amount/5;
            amount=amount-n5*5;
            break;
    }
    switch(amount>=2){
        case 1:
            n2=amount/2;
            amount=amount-n2*2;
            break;
    }
    cout << "notes of 500 = " << n500 <<endl;
    cout<< "notes of 100 = " << n100 <<endl;
    cout << "notes of 50 = " << n50 <<endl;
    cout << "notes of 20 = " << n20 <<endl;
    cout << "notes of 10 = " << n10 <<endl;
    cout << "notes of 5 = " << n5 <<endl;
    cout << "notes of 2 = " << n2 <<endl;
}


2 
output--->a=15,b=15,c=0  


3 
output--> x and y are equal


4 
output--->First character 1
          Second character 49 
    
5 
output--->Value of t: 0 


6
output---> N


