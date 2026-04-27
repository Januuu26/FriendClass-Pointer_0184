#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim(int nim)
    {
        cout << "No Induk: " << nim << endl;
    }
};

int main()
{
   mahasiswa *mhs = new mahasiswa();
   mhs->nim = 2;
   mhs->showNim(mhs->nim);
   delete mhs;
   return 0;
}
