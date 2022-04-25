//
// Created by MARIA HILDA BERMEJO RIOS on 4/25/22.
//

#include "UFunciones.h"

TNumero * dimensionarMemoria(TNumero n)
{
  return ( new TNumero[n]);
}

void   llenarDatos(TNumero * a, TNumero  n, TNumero * nm5,TNumero * nm7)
{
  *nm5 = *nm7 =0;
  for(int i=0; i<n; i++)
  {
    a[i] = random() % 1000;
    if (a[i] % 5 == 0)
      (*nm5)++;
    if (a[i] % 7 == 0)
      (*nm7)++;
  }
}

void hallaMultiplos(TNumero * a, TNumero n, TNumero *m, TNumero multiplo)
{
  TNumero contador=0;
  for(int i=0; i<n; i++)
  {
    if(a[i]%multiplo==0)
      m[contador++]=a[i];
  }

}

void imprimir(TNumero *a, TNumero n)
{
  for(int i=0; i<n; i++)
    cout << setw(5) << a[i];
}

void   eliminar(TNumero *&a)
{
  delete []a;
  a= nullptr;
}