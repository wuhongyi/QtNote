// qt.cc --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 六 12月  9 00:40:02 2017 (+0800)
// Last-Updated: 日 12月 10 15:04:44 2017 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 2
// URL: http://wuhongyi.cn 

// g++ `root-config --cflags --glibs` -lGQt -lQtGSI -lQtRoot  -I/usr/include/Qt -L/usr/lib64/lib -lQtCore -lQtGui  qt.cc -o 123

// Minimal ROOT based Qt example
#include <qapplication.h>
#include "TGraph.h"
#include "TQtWidget.h"
#include "TCanvas.h"

int main( int argc, char **argv ) {

   QApplication *app = new QApplication(argc, argv);
   TQtWidget *MyWidget= new TQtWidget(0,"MyWidget");
   // Create any other Qt-widget here
   MyWidget->show();
   MyWidget->GetCanvas()->cd();
   TGraph *mygraph;
   float x[3] = {1,2,3};
   float y[3] = {1.5, 3.0, 4.5};
   mygraph  = new TGraph(3,x,y);
   mygraph->SetMarkerStyle(20);
   mygraph->Draw("AP");
   MyWidget->GetCanvas()->Update();
   app->exec();
   return 0;
}

// 
// qt.cc ends here
