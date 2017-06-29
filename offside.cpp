#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int m , n;
    while(1){
        int temp;
        vector <int> atk, def;
        cin >> m >> n;
        if(n == 0)
            break;
        else {
            for(int i = 0 ; i < m ; i++){
                cin >> temp;
                atk.push_back(temp);
            }
            for(int i = 0 ; i < n ; i++){
                cin >> temp;
                def.push_back(temp);
            }
            sort(atk.begin(), atk.end());
            sort(def.begin(), def.end());
            if(atk[0] < def[1])
                cout << "Y" << endl;
            else
                cout << "N" << endl;
        }
    }
    return 0;
}