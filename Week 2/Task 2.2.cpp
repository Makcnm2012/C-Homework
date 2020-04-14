#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int simple (int *arr, int n) {
    
    bool notsimple = false; 
    
    for (int i = 0; i < n; i++) {
    
        for (int j = 2; j<=sqrt(arr[i]); j++) {
            if (arr[i] % j == 0) {
                notsimple = true;
                break;
            }
        }    
    
        if (!notsimple){
            if (arr[i] > 1) cout << arr[i] << " ";
        } else {    
            notsimple = false;
        }
    }  
    return 0;
}

int main(int argc, char* argv[])
{
    srand(time(NULL));
    
    int n = 10;
    
    int *arr = new int [n];

    for (int i = 0; i < n; i++)
        arr[i] = (rand() % 10 + 1);

    cout << "massive = ";
    
    for (int i = 0; i < n; i++)
       cout << arr[i] << " ";

    cout << endl << "Simple elements: "; 
    simple (arr, n); 

    delete [] arr; 
    cout << endl;
   
    return 0;
}
