//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 2 ***                      //
//                                                                            //
// Файл Rectangle.h                                                           //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"


//Прямоугольник на плоскости
class TRectangle : public TShape
{
  protected:
    double Height;  //Высота прямоугольника
    double Width;   //Ширина прямоугольника

  public:
    //На вход подаются:
    //  - координаты центра прямоугольника;
    //  - высота прямоугольника;
    //  - ширина прямоугольника
    TRectangle(TPoint P, double _Height, double _Width);

    TRectangle(void) = delete;
    ~TRectangle(void);

    //Площадь прямоугольника
    double GetArea(void);

    //Охватывающий прямоугольник
    TRect GetRect(void);
};


#endif
