### Makefile --- 
## 
## Description: 
## Author: Hongyi Wu(吴鸿毅)
## Email: wuhongyi@qq.com 
## Created: 四 12月  8 19:23:25 2016 (+0800)
## Last-Updated: 三 12月 13 00:53:27 2017 (+0800)
##           By: Hongyi Wu(吴鸿毅)
##     Update #: 12
## URL: http://wuhongyi.cn 

OBJ = 123

sourcefile = qt.cc


ROOTCFLAGS  = $(shell root-config --cflags)
ROOTLIBS    = $(shell root-config --libs)

CFLAGS = -g -Wall -O2 -I/usr/include/Qt -L/usr/lib64/lib -lQtCore -lQtGui  $(ROOTCFLAGS) $(ROOTLIBS) -lGQt -lQtGSI -lQtRoot -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64  

GXX = g++ 

all:$(OBJ) 

$(OBJ): $(sourcefile)
	$(GXX) $(CFLAGS) -o $@ $(filter %.cc ,$(sourcefile))


clean:
	rm -f *~ *.o $(OBJ) 


######################################################################
### Makefile ends here
