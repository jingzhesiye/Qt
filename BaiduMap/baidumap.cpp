#include "baidumap.h"

BaiduMap::BaiduMap(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	onlineMapScene = new QGraphicsScene();
	onlineMapWebView = new QWebView();
	connect(onlineMapWebView->page()->mainFrame(),SIGNAL(javaScriptWindowObjectCleared()),this,SLOT(attachMap()));
	onlineMapWebView->setUrl(QUrl("qrc:/BaiduMap/Resources/onelinemap.html"));
	QTimer::singleShot(60, this, SLOT(initialization()));
}

BaiduMap::~BaiduMap()
{

}
/*-------------------------------------------
*
* ��ʼ����ͼ��Ϣ
*
---------------------------------------------*/
void BaiduMap::initialization()
{
	/*-------------------------------------------
	* ��ʽ�����⣬��ʾ����γ�ȣ�����״̬
	---------------------------------------------*/
    mapInformationLst = "1 �ɶ������ҵ,��ʾ���豸����������,104.0658|30.6571,1#2 �ɶ��츮�㳡,��ʾ���豸���й���;��ע���豸���������,104.0761|30.6561,3#";
	onlineMapWebView->setGeometry(0,0,ui.graphicsView->width(),ui.graphicsView->height());
	onlineMapWebView->page()->mainFrame()->setScrollBarPolicy(Qt::Horizontal,Qt::ScrollBarAlwaysOff);
	onlineMapWebView->page()->mainFrame()->setScrollBarPolicy(Qt::Vertical,Qt::ScrollBarAlwaysOff);
    onlineMapScene->addWidget(onlineMapWebView);
    ui.graphicsView->setScene(onlineMapScene);
}
/*-------------------------------------------
*
* �õ���ע��Ϣ
*
---------------------------------------------*/
QString BaiduMap::getLongitudeLatitude()
{
	return mapInformationLst;
}
/*-------------------------------------------
*
* ���ͼ��������Ϣ
*
---------------------------------------------*/
void BaiduMap::attachMap()
{
	onlineMapWebView->page()->mainFrame()->addToJavaScriptWindowObject(QString("BaiduMap"),this);
}
