/********************************************************************************
** Form generated from reading UI file 'baidumap.ui'
**
** Created: Mon Apr 4 12:08:29 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAIDUMAP_H
#define UI_BAIDUMAP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaiduMapClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *BaiduMapClass)
    {
        if (BaiduMapClass->objectName().isEmpty())
            BaiduMapClass->setObjectName(QString::fromUtf8("BaiduMapClass"));
        BaiduMapClass->resize(1071, 649);
        centralWidget = new QWidget(BaiduMapClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout->addWidget(graphicsView);

        BaiduMapClass->setCentralWidget(centralWidget);

        retranslateUi(BaiduMapClass);

        QMetaObject::connectSlotsByName(BaiduMapClass);
    } // setupUi

    void retranslateUi(QMainWindow *BaiduMapClass)
    {
        BaiduMapClass->setWindowTitle(QApplication::translate("BaiduMapClass", "\347\231\276\345\272\246\345\234\260\345\233\276DEMO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BaiduMapClass: public Ui_BaiduMapClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAIDUMAP_H
