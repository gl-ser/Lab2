//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 2 ***                      //
//                                                                            //
// Файл Circle.h                                                              //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#ifndef CIRCLE_H
#define CIRCLE_H

#ifdef _MSC_VER
#define _USE_MATH_DEFINES
#endif
#include <math.h>

#include "Shape.h"


//Круг на плоскости
class TCircle : public TShape
{
  protected:
    double Radius;  //Радиус окружности

  public:
    //На вход подаются:
    //  - координаты центра круга;
    //  - радиус круга
    TCircle(TPoint P, double R);

    TCircle(void) = delete;
    ~TCircle(void);

    //Площадь круга
    double GetArea(void);

    //Охватывающий прямоугольник
    TRect GetRect(void);
};


#endif
