#include <iostream>
using namespacse std;

class angka{ 
    private:
    int *arr;
    int panjang;
    public:
    angka(int); //constructor
    ~angka(); //destructor
    void cetakData();
    void isiData();

};
// definisi member fungction

angka::angka(int i){ // constructor
    panjang = i;
    arr = new int[i];
    isiData();
   
}