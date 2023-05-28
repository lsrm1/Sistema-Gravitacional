/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *primer;
    QPushButton *segundo;
    QPushButton *terminar;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1010, 810);
        QPalette palette;
        QBrush brush(QColor(154, 153, 150, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(239, 239, 239, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(220, 0, 1002, 602));
        primer = new QPushButton(centralwidget);
        primer->setObjectName(QString::fromUtf8("primer"));
        primer->setGeometry(QRect(20, 130, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(20);
        font.setBold(false);
        primer->setFont(font);
        primer->setCursor(QCursor(Qt::PointingHandCursor));
        segundo = new QPushButton(centralwidget);
        segundo->setObjectName(QString::fromUtf8("segundo"));
        segundo->setGeometry(QRect(20, 190, 181, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        segundo->setFont(font1);
        segundo->setCursor(QCursor(Qt::PointingHandCursor));
        terminar = new QPushButton(centralwidget);
        terminar->setObjectName(QString::fromUtf8("terminar"));
        terminar->setGeometry(QRect(20, 250, 181, 51));
        terminar->setFont(font1);
        terminar->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 131, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 171, 41));
        label_2->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1010, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        primer->setText(QCoreApplication::translate("MainWindow", "Sistema 1", nullptr));
        segundo->setText(QCoreApplication::translate("MainWindow", "Sistema 2", nullptr));
        terminar->setText(QCoreApplication::translate("MainWindow", "Terminar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Simulador ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Gravitacional", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
