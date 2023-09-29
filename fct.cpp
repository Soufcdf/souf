/***************************
Test de la fonction 1
*****************************/
#include <iostream> // bibliothèque de gestion des E/S
using namespace std;
/*****************************
Fonction 1
*****************************/
void fonction1()
{
//... ici se trouvera le code de la fonction 1 que je veux tester
cout <<"Je suis la fonction 1"<<endl;
}
/*****************************
Fonction principale
*****************************/
int main() // Fonction principale
{
fonction1(); // appel de la fonction1 pour vérifier son fonctionnement
cin.get() ;cin.ignore() ; // attente d'appui sur une toucher
}