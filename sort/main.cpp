#include <iostream>

using namespace std;
#define Maxsize 1000
typedef struct {
    int Length;
    int a[Maxsize + 1];
} Sqlist;

void swap(Sqlist &L, int a, int b) {
    int temp = L.a[a];
    L.a[a] = L.a[b];
    L.a[b] = temp;
}

void print(Sqlist &L) {
    for (int i = 0; i < L.Length + 1; ++i) {
        cout <<L.a[i]<<endl;
    }
}
void load(Sqlist &L,int c[10]){
    for (int i = 0; i < 10; ++i) {
        L.a[i]=c[i];
    }
}
void BubbleSort(Sqlist ){

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int orig[10];
    orig[10]={1,24,14,32,5,43,64,57,68,7};
    
    return 0;
}