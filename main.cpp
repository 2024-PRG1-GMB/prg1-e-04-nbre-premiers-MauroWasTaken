//
// Created by Mauro Costa Dos Santos on 04/10/2024.
//
#include <iostream>

using namespace std;

int main() {
    constexpr int max = 1000;
    constexpr int min = 2;
    constexpr int nb_colonnes = 5;

    char recommencer;
    
    cout << "Ce programme ..." << endl;

    do {
        int limite;

        do {
            cout << "Entrez une valeur ["<< min <<"-"<< max <<"] : " ;
            cin >> limite;
        } while ( limite < min || limite > max );

        int nombre = 2;

        while( nombre <= limite ) {
            //affichage en colonne
            for( int colonne = 0; colonne < nb_colonnes && nombre <= limite; ++nombre ){
                //verification si nombre est premier
                if(nombre % 2 | nombre == 2){
                    bool est_premier = true;
                    for( int j = 2; j < nombre ; ++j){
                        if( nombre % j == 0 ) est_premier = false;
                    }
                    if( est_premier ){
                        cout << '\t' << nombre << " ";
                        ++colonne;
                    }
                }
            }
            ++nombre;
            cout << endl;
        }
        do {
            cout << "Voulez-vous recommencer [O/N] : ";
            cin >> recommencer;
        } while ( recommencer != 'O' && recommencer != 'N' );
    } while ( recommencer == 'O' );

    cout << "Fin de programme" ;

    return EXIT_SUCCESS;
}