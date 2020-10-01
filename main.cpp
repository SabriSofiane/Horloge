
#include "cadran.h"

using namespace std;

int main()
{
    Cadran leCadran;
    Cadran unAutreCadran(10,10,2,20,31,46);
    char touche;
    for (int i =10;i>=0;i--)
    {
        unAutreCadran.Afficher(i,5);
        sleep(1);
    }
    leCadran.Afficher("FIN",1);
    sleep(1);
    leCadran.Effacer();
    unAutreCadran.Effacer();
//    unAutreCadran.Afficher(10,0);
//    sleep(1);
//    unAutreCadran.Effacer();
    cin >> touche;
    //leCadran.Afficher(10,0);

    return 0;
}
