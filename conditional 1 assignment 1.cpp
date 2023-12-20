1  
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    if(a>b){
        cout<<a<<" is greater";
    }
    else{
        cout<<b<<" is greater";
    }
}


2 
#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter a radius:";
    cin>>r;
    float pi=3.1415;
    float circum=2*pi*r;
    float area=pi*r*r;
    if(area>circum){
        cout<<"area is greater than circumference";
        
    }
    else{
        cout<<"no";
    }
}


3  
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year:";
    cin>>year;
    if (year % 400 == 0 || year % 4 == 0) {
        cout << year << " is a leap year.";
    }
    else if (year % 100 == 0) {
        cout << year << " is not a leap year.";
    }
    else {
        cout << year << " is not a leap year.";
    }
}


4 
#include <iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter length:";
    cin>>l;
    cout<<"Enter breadth:";
    cin>>b;
    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"area of the rectangle is greater than its perimeter";
    }
    else{
        cout<<"no";
    }
}


5
#include <iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cin>>side1>>side2>>side3;
    if(side1==side2 && side1==side3){
        cout<<"It is a equilateral triangle";
    }
    else if(side1==side2 || side2==side3 || side1==side3){
        cout<<"It is a Isosceles Triangle";
    }
    else{
        cout<<"It is a scalene Triangle";
    }
}


6 
#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter marks of the students : ";
    cin >> a >> b >> c;
    if (a <= b && a <= c){
        cout << "a scores the least marks";
    }
    else if (b <= a && b <= c){
        cout << "b scores the least marks";
    }
    else{
        cout << "c scores the least marks";
    }
}


7 
#include<iostream>
using namespace std;
int main(){
    float x, y;
    cout<<"Enter the x-y coordinates:";
    cin >> x >> y;
    if (x==0 && y==0)
        cout<<"It is on the origin";
    if (x==0 && y!=0)
        cout<<"It lie on the y-axis";
    if (x!=0 && y==0)
        cout<<"It lie on the x-axis";
    if (x!=0 && y!=0)
        cout<<"It lie on the plane";
    return 0;
}

8 
#include<iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3,slope1,slope2;
    cout<<"Enter points(x1,y1):"<<endl;
    cin>>x1>>y1;
    cout<<"Enter points(x2, y2):"<<endl;
    cin>>x2>>y2;
    cout<<"Enter points(x3, y3):"<<endl;
    cin>>x3>>y3;
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);
    if(slope1==slope2){
        cout << "All 3 points lie on the same line";
    } else {
        cout << "All 3 points do not lie on the same line";
    }
}

9 
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    if((ch >='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<ch<< " is an Alphabet";
    } 
    else if(ch>='0' && ch<='9'){
        cout<<ch<< " is a Digit";
    } 
    else {
        cout<<ch<< " is a Special Character";
    }
}


10
output--> value of b and c are respectively 300 and 200
