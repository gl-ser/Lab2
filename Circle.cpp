//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 2 ***                      //
//                                                                            //
// Файл Circle.cpp                                                            //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#include "Circle.h"


TCircle::TCircle(TPoint P, double R)
{
  Center = P;
  Radius = R;
}


TCircle::~TCircle()
{
  Radius = 0.0;
}


double TCircle::GetArea()
{
  return (M_PI*Radius*Radius);
}


TRect TCircle::GetRect()
{
TRect Rect;

  Rect.LeftBottom.x = Center.x-Radius;
  Rect.LeftBottom.y = Center.y-Radius;

  Rect.LeftTop.x = Center.x-Radius;
  Rect.LeftTop.y = Center.y+Radius;

  Rect.RightTop.x = Center.x+Radius;
  Rect.RightTop.y = Center.y+Radius;

  Rect.RightBottom.x = Center.x+Radius;
  Rect.RightBottom.y = Center.y-Radius;

  return Rect;
}
