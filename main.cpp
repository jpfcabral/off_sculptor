#include <iostream>
#include "sculptor.h"

using namespace std;

int main(){
    Sculptor desenho(250,250,50);
    // Sol
    desenho.setColor(1,1,0,1);
    desenho.putSphere(21,21,25,20);
    // Mercurio
    desenho.setColor(0.7,0.18,0.18,1);
    desenho.putSphere(50,50,25,5);
    // Venus
    desenho.setColor(0.7,0.54,.18,1);
    desenho.putSphere(75,75,25,7);
    // Terra
    desenho.setColor(0,0.35,0.8,0.49);
    desenho.putSphere(100,100,25,10);
    // Marte
    desenho.setColor(.77,.05,.05,1);
    desenho.putSphere(125,125,25,7);
    // Jupiter
    desenho.setColor(.42,.43,.15,1);
    desenho.putSphere(150,150,25,13);
    // Saturno
    desenho.setColor(.09,.43,.39,1);
    desenho.putSphere(175,175,25,15);
    // Urano
    desenho.setColor(.34,.51,.79,1);
    desenho.putSphere(200,200,25,10);
    // Netuno
    desenho.setColor(.04,.1,.75,1);
    desenho.putSphere(225,225,25,8);

    desenho.writeOFF((char*)"/home/jpfcabral/UFRN/turmas/dca1202/off_sculptor/ellipsoid.off");


    return 0;
}
