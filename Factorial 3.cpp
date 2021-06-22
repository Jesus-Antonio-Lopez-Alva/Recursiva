#include <iostream>
using std::cout;
using std::cin;
using std::endl;
long int factorial (int); //prototipo de funcion
int main()
{
  int x = 0; //Declaracio e inicializacion en 0.
  cout << "*Ingrese x para calcular x! (factorial de x)*" << endl;
  cin >> x;
  cout << "El resultado es, " << x <<"! = "<< factorial(x) << endl; //Llamada a la funcion
}
long int factorial (int y ) //funcion mayor
{
  switch(y)
    {
    case 0:
      return 1;
      break;
    case 1:
      return 1;
      break;
    default:
      return (factorial(y-1)*y); //Llamada recursiva, la funcion se llama asi misma
      break;
    }
}
