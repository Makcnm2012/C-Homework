#include <iostream> 
#include <time.h>

using namespace std; 

void view(const int*, int); //оголошення функції 
void createVect(int*&, int); //оголошення функції 

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

    cout << "Введить елементи масиву: " << endl;
    for(int i=0; i<size; i++) {
        cout << "[" << i + 1 << "] -> ";
        cin >> X[i];
    }
} 

int main() { 
    
    int n; 
    int *pA; 
    
    cout << "Задайте кiлькiсть елементiв -> "; 
    cin >> n; 
    
    pA = new int[n]; //виділення пам’яті 
    createVect(pA, n); //виклик функції створення масиву кількістю елементів n 
    view(pA, n); // виклик функції виведення елементів масиву на екран 
    //pA вказівник на масив, n кількість елементів 
   
    delete []pA; //очистка пам’яті 
  
    return 0; 
}
