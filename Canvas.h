//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 2 ***                      //
//                                                                            //
// Файл Canvas.h                                                              //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#ifndef CANVAS_H
#define CANVAS_H

#include <algorithm>
#include <vector>

#include "Circle.h"
#include "Square.h"


//Плоскость геометрических фигур
class TCanvas
{
  private:
    std::vector<TShape*> Data;  //Вектор геометрических фигур

  public:
    TCanvas(void);
    virtual ~TCanvas(void);

    //Добавить круг
    //На вход подаются:
    //  - координаты центра круга;
    //  - радиус круга
    void AddCircle(TPoint P, double R);

    //Добавить прямоугольник
    //На вход подаются:
    //  - координаты центра прямоугольника;
    //  - высота прямоугольника;
    //  - ширина прямоугольника
    void AddRectangle(TPoint P, double Height, double Width);

    //Добавить квадрат
    //На вход подаются:
    //  - координаты центра квадрата;
    //  - размер квадрата
    void AddSquare(TPoint P, double Size);

    //Суммарная площадь всех фигур
    double GetTotalArea(void);

    //Суммарный охватывающий прямоугольник для всех фигур
    TRect GetTotalRect(void);
};


#endif
