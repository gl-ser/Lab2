//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 2 ***                      //
//                                                                            //
// Файл Square.cpp                                                            //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#include "Square.h"


TSquare::TSquare(TPoint P, double Size) : TRectangle(P, Size, Size)
{  //Вызов конструктора предка с параметрами, т.к. конструктор предка по умолчанию удален
  Center = P;
  Height = Size;
  Width = Size;
}


TSquare::~TSquare()
{
  //Пустой деструктор
}