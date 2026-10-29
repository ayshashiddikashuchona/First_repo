#include<iostream>
using namespace std;

int main(){
    char s1[100], s2[200];
    int n,m,i=0,j=0;

    cout<<"Enter start of string extraction : "<<endl;
    cin>>m;

    cout<<"Enter the number of extracted string : "<<endl;
    cin>>n;

    cout<<"Enter a String : "<<endl;
    cin>>s1;

    for(i=m; i<m+n && s1[i]!='\0'; i++){
        s2[j]=s1[i];
        j++;
    }

    s2[j]='\0';

    cout<<"The sub string : "<<s2<<endl;

    return 0;
}
