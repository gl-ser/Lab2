//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 2 ***                      //
//                                                                            //
// Файл Shape.h                                                               //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#ifndef SHAPE_H
#define SHAPE_H


//Точка на плоскости
struct Point
{
  Point() : x(0.0), y(0.0) {}
  double x;  //Координата по горизонтальной оси
  double y;  //Координата по вертикальной оси
};
typedef struct Point TPoint;


//Охватывающий прямоугольник
struct Rect
{
  TPoint LeftBottom;   //Левая нижняя вершина
  TPoint LeftTop;      //Левая верхняя вершина
  TPoint RightTop;     //Правая верхняя вершина
  TPoint RightBottom;  //Правая нижняя вершина
};
typedef struct Rect TRect;


//Абстрактная геометрическая фигура на плоскости
class TShape
{
  protected:
    TPoint Center;  //Координаты центра фигуры
    TRect Rect;     //Координаты охватывающего прямоугольника

  public:
    TShape(void);
    virtual ~TShape(void);

    //Площадь фигуры
    virtual double GetArea(void) = 0;

    //Охватывающий прямоугольник
    virtual TRect GetRect(void) = 0;
};


#endif
