/**
*       科技有限公司
*
*       作用：百度地图
*
*       联系：185233424.
*
*		作者: 叶国雄.
*
*       日期：2011年02月20  — 2011年12月
*
*******************************************************************************/
#ifndef BAIDUMAP_H
#define BAIDUMAP_H

#include <QtGui/QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QWebFrame>
#include <QWebView>
#include "ui_baidumap.h"

class BaiduMap : public QMainWindow
{
	Q_OBJECT

public:
	BaiduMap(QWidget *parent = 0, Qt::WFlags flags = 0);
	~BaiduMap();
private:
	Ui::BaiduMapClass ui;
private:
	QGraphicsScene			*onlineMapScene;
	QWebView				*onlineMapWebView;
	QString					mapInformationLst;
public slots:
	void initialization();
	QString getLongitudeLatitude();
	void attachMap();
};

#endif // BAIDUMAP_H
