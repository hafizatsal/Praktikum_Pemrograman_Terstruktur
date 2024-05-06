#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> s;
    
    for (int i=0; i < n; ++i){
        string p;
        cin >> p;
        
        if (p == "push"){
            int el;
            cin >> el;
            s.push(el);
        } else if (p == "pop"){
            if(!s.empty()){
                s.pop();
            }
        }
        
        stack<int> temp = s;
        while (!temp.empty()){
            cout << temp.top()<<" ";
            temp.pop();
        }
        cout << endl;
    }
    return 0;
}