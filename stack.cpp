#include <iostream>
#include <stack>
using namespace std;

int main() {
    int q;
    cin >> q;
    int option, data;
    stack <int> s;
    while(q--){
        cin >> option;
        if(option == 1)
            if(!s.empty())
                cout << s.top() << endl;
            else 
                cout << "No Food";
        else if(option == 2){
            s.push(option);
            s.pop();
        }
    }
    return 0;
}
