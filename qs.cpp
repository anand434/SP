#include <iostream> // simple input and output
#include <algorithm> // this library contains the ** swap() **
using namespace std;

int partition(int a[] , int s , int e){
    int index = s+1;
    int piv_element = a[s];
    for(int j = s+1 ; j <= e ; j++){
        if(piv_element > a[j]){
            swap(a[index] , a[j]);
            index += 1;
        }
    }
    swap (a[s] , a[index-1]);
    return index-1;
}

void quick_sort(int a[] , int s , int e){
    if(s < e){
        int piv_index = partition(a , s , e);
        quick_sort(a , s , piv_index - 1);
        quick_sort(a , piv_index + 1 , e);
    }
}

int main(){
    int a[] = {4, 3, 6, 54, 65, 23};
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i = 0; i < 6; i++)
        cout << a[i] << " ";
    
    cout << endl;
    cout << endl;
    
    quick_sort(a , 0 , n-1);

    for(int i = 0; i < 6; i++)
        cout << a[i] << " ";
    
    return 0;
}