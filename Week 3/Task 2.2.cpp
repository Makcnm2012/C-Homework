#include <iostream> 
#include <time.h>

using namespace std; 

void view(const int*, int); //���������� ������� 
void createVect(int*&, int); //���������� ������� 


//������� ��� ����������� �������� ������ 
void view(const int* X, int size) { 
    
    cout << "�����: " << endl;
    for (int i=0; i<size; i++) { 
        cout << X[i] << '\t';
    } 
    cout << endl << endl;
} 

//�������, �� �������� ����� ����������� ���������� 
void createVect(int*&X, int size) { 

    srand((time(NULL))); 
    for(int i=0; i<size; i++) 
        X[i] = rand()%20-10;
} 

void MaxElem (const int*X, int size ){
    
    int max = X[0];
    for(int i = 1; i < size; i++){
        if (X[i] > max){
            max = X[i];
        }
    }
    cout << "������������ �������� ������: " << max << endl;
}

int main() { 
    
    int n; 
    int *A, *B, *C; 
    
    cout << "������� �i���i��� �������i� -> "; 
    cin >> n; 
    
    A = new int[n]; //�������� ����� 
    createVect(A, n); //������ ������� ��������� ������ ������� �������� n 
    view(A, n); // ������ ������� ��������� �������� ������ �� ����� 
    MaxElem(A, n);
    //A �������� �� �����, n ������� �������� 
    //��������� ������ ������
    
    cout << "������� �i���i��� �������i� -> "; 
    cin >> n; 
    
    B = new int[n]; 
    createVect(B, n); 
    view(B, n); 
    MaxElem(B, n);
    
    cout << "������� �i���i��� �������i� -> "; 
    cin >> n; 
    
    C = new int[n]; 
    createVect(C, n); 
    view(C, n); 
    MaxElem(C, n);
    
    delete []A; //������� ����� 
    delete []B; 
    delete []C;
        //system("pause"); 
    
    return 0; 
}
