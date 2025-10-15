#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
int a=1,m=0,b=2000000000;
char x;
while(true){
m=(a+b)/2;
cout<<m<<endl;
cin>>x;
if(x=='='){
break;
}
else if(x=='<'){
a=m+1;
}
else{
b=m-1;
}



}



return 0;
}
//Science is Magnificent. By _WK_
