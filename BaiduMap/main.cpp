#include <QtGui/QApplication>
#include <QTextCodec>
#include "baidumap.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("GB2312"));
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
	QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
	BaiduMap w;
	w.showMaximized();

	return a.exec();
}
