/**
*       �Ƽ����޹�˾
*
*       ���ã��ٶȵ�ͼ
*
*       ��ϵ��185233424.
*
*		����: Ҷ����.
*
*       ���ڣ�2011��02��20  �� 2011��12��
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
