#include <iostream>
#include <vector>
using namespace std;

int main(){
int n;
cin >> n;
vector<int> ang;

for(int i=0; i<n; ++i){
int num;
cin>>num;
if (num%2 !=0){
ang.push_back(num);
}
}

for(int num : ang){
cout<<num<< " ";
}
return 0;
}