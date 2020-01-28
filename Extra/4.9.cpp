#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int siz, int pos) {
    
    if(siz < pos) return -1;
    else if(arr[pos] == n) return pos;
    else return linear_search(arr, n, siz, pos+1);
    
}



int main()
{
    
    int arr[10];
    int siz = sizeof(arr)/sizeof(arr[0]);
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < siz; i++) {

        cin >> arr[i];

    }

    cout << "Number to be searched: ";
    int n;
    cin >> n;
    cout << "Index of the number " << n << "is: ";
    cout << linear_search(arr, n, siz, 0);

   return 0;
}