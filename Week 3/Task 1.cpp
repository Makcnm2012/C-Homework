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

    cout << "������� �������� ������: " << endl;
    for(int i=0; i<size; i++) {
        cout << "[" << i + 1 << "] -> ";
        cin >> X[i];
    }
} 

int main() { 
    
    int n; 
    int *pA; 
    
    cout << "������� �i���i��� �������i� -> "; 
    cin >> n; 
    
    pA = new int[n]; //�������� ����� 
    createVect(pA, n); //������ ������� ��������� ������ ������� �������� n 
    view(pA, n); // ������ ������� ��������� �������� ������ �� ����� 
    //pA �������� �� �����, n ������� �������� 
   
    delete []pA; //������� ����� 
  
    return 0; 
}

