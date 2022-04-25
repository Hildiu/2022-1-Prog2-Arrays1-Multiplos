//
// Created by MARIA HILDA BERMEJO RIOS on 4/25/22.
//

#ifndef INC_03_M5YM7_UFUNCIONES_H
#define INC_03_M5YM7_UFUNCIONES_H

#include "UDefiniciones.h"

TNumero * dimensionarMemoria(TNumero n);
void   llenarDatos(TNumero * a, TNumero  n, TNumero * nm5,TNumero * nm7);
void hallaMultiplos(TNumero * a, TNumero n, TNumero *m, TNumero multiplo);
void imprimir(TNumero *a, TNumero n);
void   eliminar(TNumero *&a);

#endif //INC_03_M5YM7_UFUNCIONES_H
