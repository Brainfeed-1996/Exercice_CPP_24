/*
Quelle modification faut-il apporter au programme suivant pour qu’il devienne correct :
#include <iostream>
using namespace std ;
main()
{ int n, p=5 ;
n = fct (p) ;
cout << "p = " << p << " n = " << n ;
} int fct (
int r)
{ return 2*r ;
}
*/

#include <iostream>
using namespace std ;
int main()
{   int fct (int);
    int n, p=5 ;
    n = fct (p) ;
    cout << "p = " << p << " n = " << n ;
} int fct (
int r)
{   return 2*r ;
}

/*Résultat :
p = 5 n = 10

=== Code Execution Successful ===
*/
