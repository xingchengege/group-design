/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "chooseframe.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_start;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_start;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_9;
    QPushButton *pushButton_close;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_8;
    QWidget *page_function;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_recommand;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_search_school;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_search_major;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_illustration;
    QSpacerItem *verticalSpacer_11;
    QPushButton *pushButton_return;
    QSpacerItem *verticalSpacer_7;
    Chooseframe *frame_2;
    QWidget *function_widget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1200, 720);
        Widget->setMinimumSize(QSize(1200, 720));
        Widget->setMaximumSize(QSize(1200, 720));
        Widget->setMouseTracking(true);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(1200, 720));
        stackedWidget->setMouseTracking(true);
        page_start = new QWidget();
        page_start->setObjectName(QString::fromUtf8("page_start"));
        page_start->setMinimumSize(QSize(1200, 720));
        page_start->setMaximumSize(QSize(1200, 720));
        gridLayout = new QGridLayout(page_start);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(382, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 1);

        pushButton_start = new QPushButton(page_start);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setMinimumSize(QSize(400, 50));
        pushButton_start->setMaximumSize(QSize(400, 50));

        gridLayout->addWidget(pushButton_start, 4, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(382, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 8, 4, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_12, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(382, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 8, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 4, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 285, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 3, 3, 1, 1);

        pushButton_close = new QPushButton(page_start);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setMinimumSize(QSize(400, 50));
        pushButton_close->setMaximumSize(QSize(400, 50));

        gridLayout->addWidget(pushButton_close, 8, 3, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 6, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(382, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(185, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        label = new QLabel(page_start);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(400, 100));
        label->setMaximumSize(QSize(400, 100));

        gridLayout->addWidget(label, 1, 3, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 9, 3, 1, 1);

        stackedWidget->addWidget(page_start);
        page_function = new QWidget();
        page_function->setObjectName(QString::fromUtf8("page_function"));
        page_function->setMinimumSize(QSize(1200, 720));
        page_function->setMaximumSize(QSize(1200, 720));
        page_function->setMouseTracking(true);
        horizontalLayout = new QHBoxLayout(page_function);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(page_function);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(170, 711));
        frame->setMaximumSize(QSize(170, 711));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_recommand = new QPushButton(frame);
        pushButton_recommand->setObjectName(QString::fromUtf8("pushButton_recommand"));
        pushButton_recommand->setMinimumSize(QSize(150, 35));
        pushButton_recommand->setMaximumSize(QSize(150, 35));

        verticalLayout->addWidget(pushButton_recommand);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButton_search_school = new QPushButton(frame);
        pushButton_search_school->setObjectName(QString::fromUtf8("pushButton_search_school"));
        pushButton_search_school->setMinimumSize(QSize(150, 35));
        pushButton_search_school->setMaximumSize(QSize(150, 35));

        verticalLayout->addWidget(pushButton_search_school);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        pushButton_search_major = new QPushButton(frame);
        pushButton_search_major->setObjectName(QString::fromUtf8("pushButton_search_major"));
        pushButton_search_major->setMinimumSize(QSize(150, 35));
        pushButton_search_major->setMaximumSize(QSize(150, 35));

        verticalLayout->addWidget(pushButton_search_major);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButton_illustration = new QPushButton(frame);
        pushButton_illustration->setObjectName(QString::fromUtf8("pushButton_illustration"));
        pushButton_illustration->setMinimumSize(QSize(150, 35));
        pushButton_illustration->setMaximumSize(QSize(150, 35));

        verticalLayout->addWidget(pushButton_illustration);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_11);

        pushButton_return = new QPushButton(frame);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setMinimumSize(QSize(150, 35));
        pushButton_return->setMaximumSize(QSize(150, 35));

        verticalLayout->addWidget(pushButton_return);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);


        horizontalLayout->addWidget(frame);

        frame_2 = new Chooseframe(page_function);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(100, 711));
        frame_2->setMaximumSize(QSize(100, 711));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame_2);

        function_widget = new QWidget(page_function);
        function_widget->setObjectName(QString::fromUtf8("function_widget"));

        horizontalLayout->addWidget(function_widget);

        stackedWidget->addWidget(page_function);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_start->setText(QCoreApplication::translate("Widget", "\350\277\233\345\205\245", nullptr));
        pushButton_close->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">\351\253\230\350\200\203\345\277\227\346\204\277\346\216\250\350\215\220\347\263\273\347\273\237</span></p></body></html>", nullptr));
        pushButton_recommand->setText(QCoreApplication::translate("Widget", "\345\277\227\346\204\277\346\216\250\350\215\220", nullptr));
        pushButton_search_school->setText(QCoreApplication::translate("Widget", "\351\231\242\346\240\241\346\237\245\350\257\242", nullptr));
        pushButton_search_major->setText(QCoreApplication::translate("Widget", "\344\270\223\344\270\232\346\237\245\350\257\242", nullptr));
        pushButton_illustration->setText(QCoreApplication::translate("Widget", "\350\257\264\346\230\216", nullptr));
        pushButton_return->setText(QCoreApplication::translate("Widget", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
