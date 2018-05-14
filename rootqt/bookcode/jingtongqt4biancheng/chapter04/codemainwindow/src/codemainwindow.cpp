#include <QtGui>
#include <QtCore>

#include "mainwindow.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	QTextCodec::setCodecForTr(QTextCodec::codecForName("gb18030"));
	Q_INIT_RESOURCE(mainwindow);
	
	QTranslator translator;
	{
		QStringList environment = QProcess::systemEnvironment();
		QString str;
		bool bFinded = false;
		foreach(str, environment) {
			if(str.startsWith("QTDIR="))
			{
				bFinded = true;
				break;	
			}
		}
		
		if(bFinded)
		{
			str = str.mid(6);
			bFinded = translator.load("qt_" + QLocale::system().name(), 
							str.append("/translations/"));
			if(bFinded)
				qApp->installTranslator(&translator);
			else
				qDebug() << QObject::tr("û��֧�����ĵ�Qt���ʻ������ļ���");
		}
		else {
			qDebug() << QObject::tr(" �������� QTDIR ����������");
			exit(1);
		}
	}
	
	CMainWindow mainWindow;
	
	return app.exec();
	
}