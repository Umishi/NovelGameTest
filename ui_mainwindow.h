/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *background;
    QGraphicsView *startgame;
    QGraphicsView *t_window;
    QCommandLinkButton *next;
    QLabel *label;
    QCommandLinkButton *place_1;
    QCommandLinkButton *place_2;
    QCommandLinkButton *place_3;
    QCommandLinkButton *place_4;
    QCommandLinkButton *place_5;
    QCommandLinkButton *next_2;
    QCommandLinkButton *start;
    QCommandLinkButton *end;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setMinimumSize(QSize(1920, 1080));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        background = new QGraphicsView(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 1920, 1080));
        background->setMinimumSize(QSize(1920, 1080));
        background->setMaximumSize(QSize(1920, 1080));
        background->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        background->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        startgame = new QGraphicsView(centralwidget);
        startgame->setObjectName(QString::fromUtf8("startgame"));
        startgame->setGeometry(QRect(0, 0, 1920, 1080));
        startgame->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        startgame->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        t_window = new QGraphicsView(centralwidget);
        t_window->setObjectName(QString::fromUtf8("t_window"));
        t_window->setGeometry(QRect(160, 700, 1600, 300));
        t_window->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        t_window->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        next = new QCommandLinkButton(centralwidget);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(0, 0, 1920, 1080));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-Finalprojec-Desktop_Qt_5_15_1_MinGW_64_bit-Debug/images/white.png"), QSize(), QIcon::Normal, QIcon::On);
        next->setIcon(icon);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 740, 1541, 271));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\270\270\346\230\216\346\234\235"));
        font.setPointSize(40);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        place_1 = new QCommandLinkButton(centralwidget);
        place_1->setObjectName(QString::fromUtf8("place_1"));
        place_1->setGeometry(QRect(810, 810, 281, 131));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../build-Finalprojec-Desktop_Qt_5_15_1_MinGW_64_bit-Debug/images/white.png"), QSize(), QIcon::Normal, QIcon::Off);
        place_1->setIcon(icon1);
        place_2 = new QCommandLinkButton(centralwidget);
        place_2->setObjectName(QString::fromUtf8("place_2"));
        place_2->setGeometry(QRect(250, 640, 271, 221));
        place_2->setIcon(icon1);
        place_3 = new QCommandLinkButton(centralwidget);
        place_3->setObjectName(QString::fromUtf8("place_3"));
        place_3->setGeometry(QRect(750, 380, 391, 151));
        place_3->setIcon(icon1);
        place_4 = new QCommandLinkButton(centralwidget);
        place_4->setObjectName(QString::fromUtf8("place_4"));
        place_4->setGeometry(QRect(1280, 60, 351, 301));
        place_4->setIcon(icon1);
        place_5 = new QCommandLinkButton(centralwidget);
        place_5->setObjectName(QString::fromUtf8("place_5"));
        place_5->setGeometry(QRect(1341, 800, 281, 241));
        place_5->setIcon(icon1);
        next_2 = new QCommandLinkButton(centralwidget);
        next_2->setObjectName(QString::fromUtf8("next_2"));
        next_2->setGeometry(QRect(0, 0, 1920, 1080));
        next_2->setMinimumSize(QSize(1920, 1080));
        next_2->setMaximumSize(QSize(1920, 1080));
        next_2->setIcon(icon1);
        start = new QCommandLinkButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(1300, 300, 1000, 181));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("images/white.png"), QSize(), QIcon::Normal, QIcon::Off);
        start->setIcon(icon2);
        end = new QCommandLinkButton(centralwidget);
        end->setObjectName(QString::fromUtf8("end"));
        end->setGeometry(QRect(1300, 630, 1000, 181));
        end->setIcon(icon2);
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        startgame->raise();
        t_window->raise();
        label->raise();
        next->raise();
        place_1->raise();
        place_2->raise();
        place_3->raise();
        place_4->raise();
        place_5->raise();
        next_2->raise();
        start->raise();
        end->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(end, SIGNAL(released()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        next->setText(QString());
        label->setText(QString());
        place_1->setText(QString());
        place_2->setText(QString());
        place_3->setText(QString());
        place_4->setText(QString());
        place_5->setText(QString());
        next_2->setText(QString());
        start->setText(QString());
        end->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
