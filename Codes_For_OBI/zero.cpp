#include <iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;
    int n;
    cin >> n;
    int i, sum = 0, x;
    for(i = 1; i <= n; i++){
        cin >> x;
        if(x)
            s.push(x);
        else
        s.pop();
    }
   
   while(!s.empty()){
        sum = sum + s.top();
        s.pop();
    }
    cout << sum;
    return 0;
}