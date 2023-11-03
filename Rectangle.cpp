//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 2 ***                      //
//                                                                            //
// Файл Rectangle.cpp                                                         //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#include "Rectangle.h"


TRectangle::TRectangle(TPoint P, double _Height, double _Width)
{
  Center = P;
  Height = _Height;
  Width = _Width;
}


TRectangle::~TRectangle()
{
  Height = 0.0;
  Width = 0.0;
}


double TRectangle::GetArea()
{
  return (Height*Width);
}


TRect TRectangle::GetRect()
{
TRect Rect;

  Rect.LeftBottom.x = Center.x-Width/2.0;
  Rect.LeftBottom.y = Center.y-Height/2.0;

  Rect.LeftTop.x = Center.x-Width/2.0;
  Rect.LeftTop.y = Center.y+Height/2.0;

  Rect.RightTop.x = Center.x+Width/2.0;
  Rect.RightTop.y = Center.y+Height/2.0;

  Rect.RightBottom.x = Center.x+Width/2.0;
  Rect.RightBottom.y = Center.y-Height/2.0;

  return Rect;
}
