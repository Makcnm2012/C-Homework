#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]) {

    int n = 5;
    int m = 2;
    float sum = 0;
    float average = 0;
    
    srand(time(NULL)); 
    float **arr = new float* [m]; 
    
    for (int count = 0; count < m; count++)
        arr[count] = new float [n]; 
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = (float)(rand())/RAND_MAX*(1 - -1) + -1;
    
    cout << "two dimensional array :" << endl; 
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << '\t' <<setprecision(2) << arr[i][j] << '\t';    
            sum += arr[i][j];
        }
        cout << endl;
    }
    
    average = sum / (n * m);
    cout << endl << "average = " << average << endl << endl;
    
    cout << "modified two dimensional array :" << endl;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] < -0.5){
                arr[i][j] = average;
            }
            cout << '\t' <<setprecision(2) << arr[i][j] << '\t';
        }
        cout << endl;
    }

    for (int count = 0; count < 2; count++)
        delete [] arr [count];
    return 0;
}
