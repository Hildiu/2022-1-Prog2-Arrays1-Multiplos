#include "UDefiniciones.h"
#include "UFunciones.h"

int main()
{
  TNumero n, nm5, nm7;
  TNumero *a= nullptr, *m5= nullptr, *m7= nullptr;

  srand(time(nullptr));
  cout << "Numero : "; cin >> n;
  a = dimensionarMemoria(n);
  llenarDatos(a,n, & nm5, & nm7);
  cout<<"\nArreglo generado\n";
  imprimir(a,n);
  cout << "\nNumero de multiplos de 5 :"<< nm5 << "\n";
  cout << "Numero de multiplos de 7 : "<< nm7 << "\n";
  m5 = dimensionarMemoria(nm5);
  m7 = dimensionarMemoria(nm7);
  hallaMultiplos(a,n, m5,5);
  hallaMultiplos(a,n, m7, 7);
  cout<<"\nArreglo de multiplos de 5 \n";
  imprimir(m5,nm5);
  cout<<"\n\nArreglo de multiplos de 7 \n";
  imprimir(m7,nm7);
  eliminar(a);
  eliminar(m5);
  eliminar(m7);
  return 0;
}
