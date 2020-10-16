#include "schoolmessage.h"
#include<QDebug>
SchoolMessage::SchoolMessage(QWidget *parent) : QWidget(parent)
{
    this->resize(600,600);
    totall_major = new QScrollArea(this);
    totall_major->setGeometry(0,200,300,400);
    totall_major->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    totall_major->setWidgetResizable(true);
    con=new QWidget();
    name = new QLabel(this);
    t= new QLabel(con);
    label_211= new QLabel(this);
    label_985= new QLabel(this);
    label_double= new QLabel(this);
    label_first= new QLabel(this);
    web= new QLabel(this);
    name->setGeometry(0,0,300,100);
    label_first->setText("本科一批");
    label_first->setGeometry(0,100,100,50);
    label_211->setGeometry(100,100,50,50);
    label_985->setGeometry(150,100,50,50);
    label_double->setGeometry(200,100,50,50);
    web->setGeometry(0,150,300,50);
    t->setText("开设专业：");
    t->setGeometry(0,0,200,50);
    is_d=false;
    paintScore=new QWidget(this);
    paintRank=new QWidget(this);
    paintScore->setGeometry(300,0,300,300);
    paintRank->setGeometry(300,300,300,300);
    totall_major->show();
}
void SchoolMessage::SetMessage(college s){
    del();
    name->setText(QString::fromStdString(s.name()));
    if(s.is_211()){label_211->setText("211");label_211->show();}
    else label_211->hide();
    if(s.is_985()){label_985->setText("985");label_985->show();}
    else label_985->hide();
    if(s.is_double_first_class()){label_double->setText("双一流");label_double->show();}
    else label_double->hide();
    QString text = QString("院校官网：%1").arg(QString::fromStdString(s.web()));
    web->setText(text);
    majors = new QPushButton[s.major_num()];
    if(s.major_num()>=1)is_d=true;
    vector<string> open_major=s.totall_major();
    con->show();
    con->move(0,300);
    con->setMinimumSize(300,open_major.size()*30+40);
    totall_major->setWidget(con);
    for(int i=0;i<s.major_num();i++){
        majors[i].setParent(con);
        majors[i].setText(QString::fromStdString(open_major[i]));
        majors[i].setGeometry(25,40+30*i,250,30);
        majors[i].show();
        connect(majors+i,&QPushButton::clicked,
               [=]()
               {
                emit sigMajorMessage(QString::fromStdString(open_major[i]));
                }
               );
    }
    paintChart(s);
}
void SchoolMessage::paintChart(college&s){
    set0 = new QBarSet("分数");
    set1 = new QBarSet("排名");
    *set0 << s.score_y3()<<s.score_y2()<<s.score_y1();
    *set1 << s.low_rank_y3()<<s.low_rank_y2()<<s.low_rank_y1();
    seriesScore = new QBarSeries();
    seriesScore->append(set0);

    chartScore = new QChart();
    chartScore->addSeries(seriesScore);
    chartScore->setTitle("近三年录取分数");
    chartScore->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categoriesScore;
    categoriesScore << "2017" << "2018" << "2019";
    axisScore = new QBarCategoryAxis();
    axisScore->append(categoriesScore);
    chartScore->createDefaultAxes();//创建默认的左侧的坐标轴（根据 QBarSet 设置的值）
    chartScore->setAxisX(axisScore, seriesScore);//设置坐标轴

    chartScore->legend()->setVisible(true); //设置图例为显示状态
    chartScore->legend()->setAlignment(Qt::AlignBottom);//设置图例的显示位置在底部

    chartViewScore = new QChartView(paintScore);
    chartViewScore->setRenderHint(QPainter::Antialiasing);
    chartViewScore->setChart(chartScore);
    chartViewScore->show();
    chartViewScore->resize(300,300);

    seriesRank = new QBarSeries();
    seriesRank->append(set1);

    chartRank = new QChart();
    chartRank->addSeries(seriesRank);
    chartRank->setTitle("近三年最低录取排名");
    chartRank->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categoriesRank;
    categoriesRank << "2017" << "2018" << "2019";
    axisRank = new QBarCategoryAxis();
    axisRank->append(categoriesRank);
    chartRank->createDefaultAxes();//创建默认的左侧的坐标轴（根据 QBarSet 设置的值）
    chartRank->setAxisX(axisRank, seriesRank);//设置坐标轴

    chartRank->legend()->setVisible(true); //设置图例为显示状态
    chartRank->legend()->setAlignment(Qt::AlignBottom);//设置图例的显示位置在底部

    chartViewRank = new QChartView(paintRank);
    chartViewRank->setRenderHint(QPainter::Antialiasing);
    chartViewRank->setChart(chartRank);
    chartViewRank->show();
    chartViewRank->resize(300,300);
}
void SchoolMessage::del(){
    if(is_d){
        delete [] majors;

    }
};
