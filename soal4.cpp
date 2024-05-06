#include <iostream>
#include <vector>
using namespace std;

int main(){
int n;
cin >> n;
vector<int> ang(n);

for(int i=0; i<n; ++i){
cin>>ang[i];
}

for(int i = 1; i<n; i+=2){
    cout << ang[i] << " ";
}
return 0;
}