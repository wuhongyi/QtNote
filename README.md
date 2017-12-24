<!-- README.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 三 12月 13 16:06:24 2017 (+0800)
;; Last-Updated: 日 12月 24 16:33:10 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 7
;; URL: http://wuhongyi.cn -->

# 简介

Qt4 定义了多个模块，每个模块包含相对独立的库文件并实现各自相应的功能。Qt4的软件开发模块有：

- QtCore,Qt4的基本模块，定义了其它模块使用的Qt核心的非GUI类，所有其它的模块都依赖于该模块。
- QtGui，定义了图形用户界面类。
- QtMultimedia，提供了对低级多媒体编程的支持。
- QtNetwork，定义了Qt的网络编程类。
- QtOpenGL，定义了OpenGL的支持类。
- QtOpenVG，定义了对OpenVG的支持类。
- QtScript，该模块提供了对脚本的支持。
- QtScriptTools，脚本调试器。
- QtSql，定义了访问数据库的类。
- QtSvg，定义了显示和生成SVG（Scalable Vector Graphics）类。
- QtWebKit，定义了显示和编辑Web内容的类型。
- QtXml，定义了处理XML（eXtensible Markup Language）语言的类。
- QtXmlPatters，为XML和自定义数据模型提供了XQuery和XPath引擎。
- QtDeclarative，声明式UI引擎。
- Phono，多媒体框架。
- Qt3Support，定义了同Qt4以前版本Qt3兼容的类，以使得Qt3的程序能够更容易地移植到Qt4.

还有一些模块属于Qt工具，具体有：
- QtDesigner，定义了扩展Qt设计器（Qt Designer）的类，该模块使得程序员能够为Qt设计器创建自定义的Qt窗口部件插件（widget plugins），以及创建能够访问Qt设计器组件的类；
- QtUiTools，定义了在应用程序中直接处理ui（User INterface）文件的类，它使得应用程序能够在运行时使用ui文件构建用户界面。
- QtHelp，为应用程序提供了加载Qt助手（Qt Assistant），以及支持在线帮助（online help）的功能。
- QtTest，定义了对Qt应用程序和库进行单元测试（unit testing）的类。

UNIX平台的Qt4版本还包含QtDBus扩展模块，该模块提供了使用D-Bus进行进程间通信（Inter-Process Communication，IPC）的Qt类。

在qmake工程中，默认情况下已经包含了QtCore和QtGui模块（如果不想使用QtGui模块，而仅仅使用QtCore链接程序，可以在qmake工程文件中通过使用“QT-=gui”来取消对QtGui模块的包含），因此无需配置就可以使用这两个模块中的类。而对于Qt的其它模块，在使用之前必须在qmake工程文件中通过QT选项进行配置。

```text
一般可以在应用程序中通过#include<QtGui/QtGui>包含整个QtGui模块所有类的头文件，其中第一个QtGui是模块名，第二个QtGui是QtGui模块（文件夹）下的预定义头文件（或者使用#include<QtGui>，其效果相同，不过此时<QtGui>是QtGui模块（文件夹）下的预定义头文件）；也可以单独包含某个类的头文件：#include<QtGui/Qapplication>(或者#include<Qapplication>)
```


<!-- 精通Qt4编程 book 70 -->



<!-- README.md ends here -->
