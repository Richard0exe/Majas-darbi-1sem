#include <iostream>
#include <cstring>
using namespace std;

int cik(char s[], char simb){
    int count=0;
    for(int i=0;i<s[i]!='\0';i++)
    {
        if (s[i]==simb) count++;
    }
    return count;
}
int main(){
    char s[100];
    char simb;

    cin.getline(s,100);

    cin>>simb;

    cout<<s<<endl;
    for(int i=0;s[i]!='\0';i++){
        cout<<s[i];
    }


    }
