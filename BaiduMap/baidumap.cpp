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
* 初始化地图信息
*
---------------------------------------------*/
void BaiduMap::initialization()
{
	/*-------------------------------------------
	* 格式：标题，提示，经纬度，报警状态
	---------------------------------------------*/
    mapInformationLst = "1 成都软件行业,提示：设备运行正常！,104.0658|30.6571,1#2 成都天府广场,提示：设备运行故障;请注意设备运行情况！,104.0761|30.6561,3#";
	onlineMapWebView->setGeometry(0,0,ui.graphicsView->width(),ui.graphicsView->height());
	onlineMapWebView->page()->mainFrame()->setScrollBarPolicy(Qt::Horizontal,Qt::ScrollBarAlwaysOff);
	onlineMapWebView->page()->mainFrame()->setScrollBarPolicy(Qt::Vertical,Qt::ScrollBarAlwaysOff);
    onlineMapScene->addWidget(onlineMapWebView);
    ui.graphicsView->setScene(onlineMapScene);
}
/*-------------------------------------------
*
* 得到标注信息
*
---------------------------------------------*/
QString BaiduMap::getLongitudeLatitude()
{
	return mapInformationLst;
}
/*-------------------------------------------
*
* 向地图传递类信息
*
---------------------------------------------*/
void BaiduMap::attachMap()
{
	onlineMapWebView->page()->mainFrame()->addToJavaScriptWindowObject(QString("BaiduMap"),this);
}
