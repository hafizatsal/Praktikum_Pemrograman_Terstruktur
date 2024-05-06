#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> q;
    
    for (int i=0; i < n; ++i){
        string p;
        cin >> p;
        
        if (p == "push"){
            int el;
            cin >> el;
            q.push(el);
        } else if (p == "pop"){
            if(!q.empty()){
                q.pop();
            }
        }
        
        queue<int> temp = q;
        while (!temp.empty()){
            cout << temp.front()<<" ";
            temp.pop();
        }
        cout << endl;
    }
    return 0;
}