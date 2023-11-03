//----------------------------------------------------------------------------//
//                       *** ЛАБОРАТОРНАЯ РАБОТА № 2 ***                      //
//                                                                            //
// Файл main.cpp                                                              //
//                                                                            //
// Автор ГЛУЩЕНКО Сергей Юрьевич                                              //
//                                                                            //
//                                                   Москва, НИИ ТП, 2023 год //
//----------------------------------------------------------------------------//


#include <QCoreApplication>
#include <QTextStream>
#include <QTextCodec>

#include "Canvas.h"


int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  QTextStream cout(stdout);

  #ifndef __unix__
    cout.setCodec(QTextCodec::codecForName("CP866"));
  #else
    cout.setCodec(QTextCodec::codecForName("UTF8"));
  #endif

  cout << QString::fromUtf8("Лабораторная работа № 2\nГлущенко С.Ю.\n\n");

  TCanvas Canvas;
  TPoint Point;
  TRect Rect;

  Point.x = 15.0;
  Point.y = 10.0;
  Canvas.AddCircle(Point, 3.0);

  Point.x = 1.0;
  Point.y = -3.0;
  Canvas.AddRectangle(Point, 7.0, 4.0);

  Point.x = -3.0;
  Point.y = 5.0;
  Canvas.AddSquare(Point, 8.0);

  cout << QString::fromUtf8("Суммарная площадь всех фигур ") << Canvas.GetTotalArea() << "\n\n";
  cout << QString::fromUtf8("Суммарный охватывающий прямоугольник для всех фигур:") << "\n";
  Rect = Canvas.GetTotalRect();
  cout << QString::fromUtf8("Xmin = ") << Rect.LeftBottom.x << "\n";
  cout << QString::fromUtf8("Xmax = ") << Rect.RightBottom.x << "\n";
  cout << QString::fromUtf8("Ymin = ") << Rect.LeftBottom.y << "\n";
  cout << QString::fromUtf8("Ymax = ") << Rect.RightTop.y << "\n";

  return 0;
}
