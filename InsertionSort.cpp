#include <iostream>
using namespace std;

int arr[20];
int n;

void input(){
    while (true){
        cout << "Masukkan Jumlah data pada array = ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\nArray maksimal 20 element.\n";
        }
    }
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan element array" << endl;
    cout << "======================" << endl;

    for(int i=0;i<n;i++){
        cout << "data ke-" << (i+1) << "=";
        cin >> arr[i];
    }
}

void InsertionSort(){
    int i, temp, j;
    for(i = 1; i <= n-1; i++){
        temp = arr[i];
        j = i -1;
        while(j > 0 && arr[j] > temp){
            arr[j + 1] = arr [j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void display(){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j=0;j<n;j++){
        cout << arr[j];
        if (j<n-1){
            cout << "-->";
        }
    }
}