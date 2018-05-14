// HelloWord.cxx --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 六 12月  9 00:09:23 2017 (+0800)
// Last-Updated: 日 12月 10 15:08:02 2017 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 4
// URL: http://wuhongyi.cn 

// g++ `root-config --cflags --glibs` -I/usr/lib64/qt-3.3/include -L/usr/lib64/qt-3.3/lib -lqt-mt   HelloWord.cxx -o HelloWord

// g++ `root-config --cflags --glibs` -I/usr/include/Qt -L/usr/lib64/lib -lQtCore -lQtGui   HelloWord.cxx -o HelloWord

#include <TRint.h>
#include <qpushbutton.h>
int main( int argc, char **argv ) {
  // Create an interactive ROOT application
  TRint *theApp = new TRint("Rint", &argc, argv);
  
  // Create Qt object within ROOT application
  QPushButton hello( "Hello world!", 0 );
  hello.resize( 100, 30 );
  hello.show();
  // and enter the ROOT event loop...
  theApp->Run();
}

// 
// HelloWord.cxx ends here
