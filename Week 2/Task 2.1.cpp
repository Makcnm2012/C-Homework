#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int search (int *arr, int size, int n) {
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == n){
            return i + 1;
        }
    }  
    
    return -1;
}

int main(int argc, char* argv[])
{
    srand(time(NULL));
    
    int f = 0;
    int n = 10;
    int result = 0;
    
    int *arr = new int [n];

    for (int i = 0; i < n; i++) {
        cout << "[" << i + 1 << "]: ";
        cin >> arr[i];
    }  

    cout << "What number would you like to find ? ";
    cin >> f;
    
    cout << "massive = ";
    
    for (int i = 0; i < n; i++)
       cout << arr[i] << " ";

    result = search (arr, n, f);

    if (result == -1){
        cout << endl << "Number " << f << " was not found...";
    } else {
        cout << endl << "Number " << f << " is located at " << result;    
    }
    

    delete [] arr; 
    cout << endl;
   
    return 0;
}
