#include <iostream>
#include "ArvBin.h"
using namespace std;

int main()
{
    ArvBin arv;
    //arv.montaArvore();
    arv.insere(25);
    arv.insere(15);
    arv.insere(10);
    arv.preOrdem();
    cout<< "nos folhas";
    cout << arv.contaNosFolhas();
    cout<<"\n Altura\n";
    cout<<arv.conta();
    return 0;
}
