#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    srand(time(NULL));
    
    int n = 10;
    int temp = 0;
    
    int *arr = new int [n];
    
    for (int i = 0; i < n; i++)
        arr[i] = (rand() % 10 + 1);
    
    cout << "massive = ";
    
    for (int i = 0; i < n; i++)
       cout << arr[i] << " ";
    
    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout << endl << "sorted massive = ";
    
    for (int i = 0; i < n; i++)
       cout << arr[i] << " ";
    
    delete [] arr; 
    cout << endl;
   
    return 0;
}
