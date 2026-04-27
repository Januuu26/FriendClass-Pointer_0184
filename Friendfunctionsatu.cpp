#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setnama(string pnama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setid(int pid);
    void displayALL(orang &a);
};

void siswa::displayALL(orang &a)
{
    cout << id  << endl << a.nama;
}   
void orang::setnama(string pnama)
{
    nama = pnama;
}
void siswa::setid(int pid)
{
    id = pid;
}
int main()
{
    orang joko;
    joko.setnama("joko");
    siswa joko_siswa;
    joko_siswa.setid(1);
    joko_siswa.displayALL(joko);
    return 0;
}