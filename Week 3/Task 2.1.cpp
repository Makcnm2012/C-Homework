#include <iostream> 
#include <time.h>

using namespace std; 

//функція для відображення елементів масиву 
void view(const int* X, int size) { 
    
    cout << "Масив: " << endl;
    for (int i=0; i<size; i++) { 
        cout << X[i] << '\t';
    } 
    cout << endl << endl;
} 

//функція, що заповнює масив випадковими значеннями 
void createVect(int*&X, int size) { 

    srand((time(NULL))); 
    for(int i=0; i<size; i++) 
        X[i] = rand()%20-10;
} 

void MaxNum (const int*X, int size ){
    
    int max = X[0];
    int maxi = 0;
    for(int i = 1; i < size; i++){
        if (X[i] > max){
            max = X[i];
            maxi = i;
        }
    }
    cout << "Номер масимального елементу масиву: " << maxi + 1 << endl;
}

int main() { 
    
    int n; 
    int *A, *B, *C; 
    
    cout << "Задайте кiлькiсть елементiв -> "; 
    cin >> n; 
    
    A = new int[n]; //виділення пам’яті 
    createVect(A, n); //виклик функції створення масиву кількістю елементів n 
    view(A, n); // виклик функції виведення елементів масиву на екран 
    MaxNum(A, n);
    //A вказівник на масив, n кількість елементів 
    //Створення іншого масиву
    
    cout << "Задайте кiлькiсть елементiв -> "; 
    cin >> n; 
    
    B = new int[n]; 
    createVect(B, n); 
    view(B, n); 
    MaxNum(B, n);
    
    cout << "Задайте кiлькiсть елементiв -> "; 
    cin >> n; 
    
    C = new int[n]; 
    createVect(C, n); 
    view(C, n); 
    MaxNum(C, n);
    
    delete []A; //очистка пам’яті 
    delete []B; 
    delete []C;
        //system("pause"); 
    
    return 0; 
}
