/***************************
Test de la fonction 2
*****************************/
#include <iostream> // bibliothèque de gestion des E/S
using namespace std;
/*****************************
Fonction 2
*****************************/
void fonction2()
{
//... ici se trouvera le code de la fonction 1 que je veux tester
 cout <<"Je suis la fonction 2"<<endl;
}
/*****************************
Fonction principale
*****************************/
int main() // Fonction principale
{
fonction2(); // appel de la fonction2 pour vérifier son fonctionnement
cin.get() ;cin.ignore() ; // attente d'appui sur une toucher
}