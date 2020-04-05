#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int frame (int m, int n, int d) {
    
    for(int k = 0; k < d; k++){

        for(int i = 0; i < m + (d * 2); i++){
            cout << "*";
        }
        cout << endl;
    }

    for (int j = 0; j < n; j++){
        for(int k = 0; k < d; k++){
            cout << "*";
        }
        for(int i = 0; i < m; i++){
            cout << " ";
        }
        for(int k = 0; k < d; k++){
            cout << "*";
        }
        cout << endl;
    }    

    for(int k = 0; k < d; k++){

        for(int i = 0; i < m + (d * 2); i++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

int main(int argc, char* argv[]){

    int m = 0;
    int n = 0;
    int d = 0;
    
    cout << "Enter width: ";
    cin >> m;
    
    cout << "Enter height: ";
    cin >> n;
    
    cout << "Enter depth: ";
    cin >> d;
   
    frame(m, n, d);
   
    return 0;
}
