1 
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(int i=1;i<str.size();i+=2){
        str[i]='#';
    }
    cout<<str;
}


2 
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
       if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
           c++;
       }
    }
    cout<<n-c;
}

3
#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& str) {
    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    string s;
    cin >> s;
    if (isPalindrome(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}


4
#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a = s.length();
    
    if (a % 2 != 0) {
        cout << "Invalid input." << endl;
    } else {
        reverse(s.begin() + a / 2, s.end());
        cout << s << endl;
    }

    return 0;
}


5
#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int x=0;
    for(int i=0;i<s.length();i++){
        x*=10;
        x+=s[i]-48;
    }
    cout<<s;
}