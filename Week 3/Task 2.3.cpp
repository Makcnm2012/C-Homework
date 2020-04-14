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

void SelNum (int*X, int size ){
    
    cout << "Непарні елементи массиву: ";
    
    for (int i = 0; i < size; i++) {
        
        if (X[i] % 2 == 0) {
            X[i] = 0;
        } else {
            cout << X[i] << '\t';
        }
    }   
    cout << endl;
}  

int main() { 
    
    int n; 
    int *A, *B, *C; 
    
    cout << "Задайте кiлькiсть елементiв -> "; 
    cin >> n; 
    
    A = new int[n]; //виділення пам’яті 
    createVect(A, n); //виклик функції створення масиву кількістю елементів n 
    view(A, n); // виклик функції виведення елементів масиву на екран 
    SelNum(A, n);
    view(A, n);
    //A вказівник на масив, n кількість елементів 
    //Створення іншого масиву
    
    cout << "Задайте кiлькiсть елементiв -> "; 
    cin >> n; 
    
    B = new int[n]; 
    createVect(B, n); 
    view(B, n); 
    SelNum(B, n);
    view(B, n);
    
    cout << "Задайте кiлькiсть елементiв -> "; 
    cin >> n; 
    
    C = new int[n]; 
    createVect(C, n); 
    view(C, n); 
    SelNum(C, n);
    view(C, n);
    
    delete []A; //очистка пам’яті 
    delete []B; 
    delete []C;
        //system("pause"); 
    
    return 0; 
}
