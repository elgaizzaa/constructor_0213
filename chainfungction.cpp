#include <iostream>
using namespace std;

class buku
{
    string judul;

    public:
    buku setJudul(string Judul)
    {

        this->judul = judul;
        return *this; // chain function

    }

} bukunya;

int main()
{
    //bukunya.setJudul("Matematika");
    //cout << bukunya.getJudul();

    cout << bukunya.setJudul("Matematika").getJudul(); //chain function calls
    returno;
    
}