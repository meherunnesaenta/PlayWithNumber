#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 cin.ignore();
 char a[n+1];
 cin.getline(a,n);
 cin.ignore();

 int curl=0,maxl=0,i=0;
 while(1){
   if(a[i]==' ' || a[i]=='\0'){
    if(curl>maxl)
    maxl=curl;
    curl=0;
   }
   else
   curl++;
   if(a[i]=='\0')
   break;
   i++;
 }
  cout<<maxl<<endl;
}