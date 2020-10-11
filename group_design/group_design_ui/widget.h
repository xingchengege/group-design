#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"getdialog.h"
#include"operation.h"
#include"majormessage.h"
#include"schoolmessage.h"
#include"schoolwidget.h"
#include"provincewidget.h"
#include"majorwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void slotOK();

    void slotCancel();

    void slotShowP(int num);

    void slotShowMajor(QString name);

    void slotShowS(int num);

    void slotShowM(int num);

    void slotSchoolMessage(QString name);

    void on_pushButton_start_clicked();

    void on_pushButton_close_clicked();

    void on_pushButton_return_clicked();

    void on_pushButton_recommand_clicked();

    void on_pushButton_search_school_clicked();


    void on_pushButton_search_major_clicked();

private:
    Ui::Widget *ui;
    GetDialog *grade_message;
    MajorMessage *Major;
    SchoolMessage *School;

    QString degree1,degree2;

    SchoolWidget *recommand_widget;

    ProvinceWidget *search_school_widget;

    MajorWidget *search_major_widget;

    operation user;
    int grade;
};
#endif // WIDGET_H
