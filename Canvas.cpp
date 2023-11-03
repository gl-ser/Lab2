//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 2 ***                      //
//                                                                            //
// Файл Canvas.cpp                                                            //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#include "Canvas.h"


TCanvas::TCanvas()
{
  Data.clear();
}


TCanvas::~TCanvas()
{
  for(unsigned int i=0; i<Data.size(); i++)
    delete Data[i];

  Data.clear();
}


void TCanvas::AddCircle(TPoint P, double R)
{
  Data.push_back(new TCircle(P, R));
}


void TCanvas::AddRectangle(TPoint P, double Height, double Width)
{
  Data.push_back(new TRectangle(P, Height, Width));
}


void TCanvas::AddSquare(TPoint P, double Size)
{
  Data.push_back(new TSquare(P, Size));
}


double TCanvas::GetTotalArea()
{
double res=0.0;

  for(unsigned int i=0; i<Data.size(); i++)
    res = res + Data[i]->GetArea();

  return res;
}


TRect TCanvas::GetTotalRect()
{
double MinX, MaxX, MinY, MaxY;
TRect Rect;

  MinX = static_cast<double>(INFINITY);
  MaxX = -static_cast<double>(INFINITY);

  MinY = static_cast<double>(INFINITY);
  MaxY = -static_cast<double>(INFINITY);

  for(unsigned int i=0; i<Data.size(); i++)
  {
    Rect = Data[i]->GetRect();

    MinX = std::min(MinX, Rect.LeftBottom.x);
    MinY = std::min(MinY, Rect.LeftBottom.y);

    MaxX = std::max(MaxX, Rect.RightTop.x);
    MaxY = std::max(MaxY, Rect.RightTop.y);
  }

  Rect.LeftBottom.x = MinX;
  Rect.LeftBottom.y = MinY;

  Rect.LeftTop.x = MinX;
  Rect.LeftTop.y = MaxY;

  Rect.RightTop.x = MaxX;
  Rect.RightTop.y = MaxY;

  Rect.RightBottom.x = MaxX;
  Rect.RightBottom.y = MinY;

  return Rect;
}
