#include <iostream> 
#include <time.h>

using namespace std; 

//функція для відображення елементів масиву 
void view(const int* X, int size) { 

    for (int i=0; i<size; i++) { 
        cout << X[i] << '\t';
    } 
    cout << endl << endl;
} 

//функція, що заповнює масив випадковими значеннями 
void createVect(int*&X, int size, int min, int max) { 

    srand((time(NULL))); 
    for(int i=0; i<size; i++) 
        X[i] = rand() % (max - min + 1) + min;
} 

void check (int*D, int*M, int*Y, int size){
    
    int myD = 26;
    int myM = 7;
    int myY = 2001;
    
    bool dfound = false;
    bool mfound = false;
    bool yfound = false;
    
    cout << "Date of Birth: " << myD << "." << myM << "." << myY << endl;
    
    for(int i = 0; i < size; i++){
        if (D[i] == myD){
            dfound = true;
            break;
        }
    }
    if (dfound){
        for(int i = 0; i < size; i++){
            if (M[i] == myM){
                mfound = true;
                break;
            }
        }
    }
    if (mfound){
        for(int i = 0; i < size; i++){
            if (Y[i] == myY){
                yfound = true;
                break;
            }
        }
    }
    if(yfound){
        cout << "You are Lucky!!!";
    } else {
        cout << "Try Again ＞︿＜";
    }
}  

int main() { 
    
    int n = 10; 
    int *D, *M, *Y; 

    D = new int[n]; //виділення пам’яті 
    createVect(D, n, 1, 30); //виклик функції створення масиву кількістю елементів n 
    cout << "Day: " << endl;
    view(D, n); // виклик функції виведення елементів масиву на екран 
    //A вказівник на масив, n кількість елементів 
    //Створення іншого масиву
    
    M = new int[n]; 
    createVect(M, n, 1, 12); 
    cout << "Mounth: " << endl;
    view(M, n); 
    
    Y = new int[n]; 
    createVect(Y, n, 1999, 2003); 
    cout << "Year: " << endl;
    view(Y, n); 
    
    check(D, M, Y, n);
    
    delete []D; //очистка пам’яті 
    delete []M; 
    delete []Y;
        //system("pause"); 
    
    return 0; 
}
