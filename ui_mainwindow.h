/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *fra_1;
    QLabel *label;
    QLabel *memory_1;
    QProgressBar *progress_1;
    QLabel *detail_1;
    QLabel *frag_1;
    QLabel *IF_1;
    QFrame *fra_2;
    QLabel *label_12;
    QLabel *memory_2;
    QLabel *frag_2;
    QLabel *label_15;
    QProgressBar *progress_2;
    QLabel *detail_2;
    QLabel *label_2;
    QFrame *fra_3;
    QLabel *label_27;
    QLabel *memory_3;
    QLabel *frag_3;
    QLabel *label_30;
    QProgressBar *progress_3;
    QLabel *detail_3;
    QFrame *frame_6;
    QLabel *label_41;
    QLabel *w_job_1;
    QLabel *w_job_2;
    QLabel *w_job_3;
    QLabel *w_job_4;
    QFrame *frame_5;
    QLabel *label_46;
    QLabel *label_7;
    QLabel *time_label;
    QLabel *arrive_noti;
    QLabel *arrive_noti_2;
    QLabel *arrive_noti_3;
    QLabel *arrive_noti_7;
    QFrame *fra_4;
    QLabel *label_48;
    QLabel *memory_4;
    QLabel *frag_4;
    QLabel *label_50;
    QProgressBar *progress_4;
    QLabel *detail_4;
    QFrame *fra_5;
    QLabel *label_54;
    QLabel *memory_5;
    QLabel *frag_5;
    QLabel *label_56;
    QProgressBar *progress_5;
    QLabel *detail_5;
    QFrame *fra_6;
    QLabel *label_57;
    QLabel *memory_6;
    QLabel *frag_6;
    QLabel *label_59;
    QProgressBar *progress_6;
    QLabel *detail_6;
    QFrame *fra_7;
    QLabel *label_60;
    QLabel *memory_7;
    QLabel *frag_7;
    QLabel *label_62;
    QProgressBar *progress_7;
    QLabel *detail_7;
    QFrame *fra_8;
    QLabel *label_63;
    QLabel *memory_8;
    QLabel *frag_8;
    QLabel *label_65;
    QProgressBar *progress_8;
    QLabel *detail_8;
    QFrame *fra_9;
    QLabel *label_66;
    QLabel *memory_9;
    QLabel *frag_9;
    QLabel *label_68;
    QProgressBar *progress_9;
    QLabel *detail_9;
    QFrame *fra_10;
    QLabel *label_69;
    QLabel *memory_10;
    QLabel *frag_10;
    QLabel *label_71;
    QProgressBar *progress_10;
    QLabel *detail_10;
    QFrame *frame;
    QLabel *block_2;
    QLabel *block_3;
    QLabel *block_4;
    QLabel *block_5;
    QLabel *block_6;
    QLabel *block_7;
    QLabel *block_8;
    QLabel *block_9;
    QLabel *block_10;
    QLabel *block_1;
    QLabel *dyn_1;
    QLabel *dyn_2;
    QLabel *dyn_3;
    QLabel *dyn_4;
    QLabel *dyn_5;
    QLabel *dyn_6;
    QLabel *dyn_7;
    QLabel *dyn_8;
    QLabel *dyn_9;
    QLabel *dyn_10;
    QLabel *label_3;
    QLabel *label_5;
    QFrame *frame_7;
    QLabel *label_55;
    QLabel *info;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1364, 1348);
        QFont font;
        font.setFamily(QString::fromUtf8("NSimSun"));
        MainWindow->setFont(font);
        MainWindow->setAcceptDrops(false);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: 	#3D3D3D;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fra_1 = new QFrame(centralwidget);
        fra_1->setObjectName(QString::fromUtf8("fra_1"));
        fra_1->setGeometry(QRect(70, 100, 191, 171));
        fra_1->setStyleSheet(QString::fromUtf8("background-color: #1ED760;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        fra_1->setFrameShape(QFrame::StyledPanel);
        fra_1->setFrameShadow(QFrame::Raised);
        label = new QLabel(fra_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Open Sans Semibold"));
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"line-spacing: 1.5;\n"
"border: none;\n"
"}"));
        memory_1 = new QLabel(fra_1);
        memory_1->setObjectName(QString::fromUtf8("memory_1"));
        memory_1->setGeometry(QRect(10, 50, 81, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Montserrat SemiBold"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        memory_1->setFont(font2);
        memory_1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	line-height: 1.5;\n"
"}"));
        progress_1 = new QProgressBar(fra_1);
        progress_1->setObjectName(QString::fromUtf8("progress_1"));
        progress_1->setGeometry(QRect(20, 110, 130, 10));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progress_1->sizePolicy().hasHeightForWidth());
        progress_1->setSizePolicy(sizePolicy);
        progress_1->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
""));
        progress_1->setValue(0);
        progress_1->setTextVisible(false);
        detail_1 = new QLabel(fra_1);
        detail_1->setObjectName(QString::fromUtf8("detail_1"));
        detail_1->setGeometry(QRect(20, 120, 121, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Open Sans"));
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        detail_1->setFont(font3);
        frag_1 = new QLabel(fra_1);
        frag_1->setObjectName(QString::fromUtf8("frag_1"));
        frag_1->setGeometry(QRect(110, 40, 41, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Montserrat"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        frag_1->setFont(font4);
        frag_1->setToolTipDuration(2);
        frag_1->setStyleSheet(QString::fromUtf8("border: none;\n"
"alignment: AlignHCenter;"));
        IF_1 = new QLabel(fra_1);
        IF_1->setObjectName(QString::fromUtf8("IF_1"));
        IF_1->setGeometry(QRect(120, 70, 21, 21));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Montserrat Medium"));
        font5.setBold(false);
        font5.setWeight(50);
        IF_1->setFont(font5);
        IF_1->setStyleSheet(QString::fromUtf8("border: none;"));
        fra_2 = new QFrame(centralwidget);
        fra_2->setObjectName(QString::fromUtf8("fra_2"));
        fra_2->setGeometry(QRect(290, 100, 191, 171));
        fra_2->setStyleSheet(QString::fromUtf8("background-color: #1ED760;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        fra_2->setFrameShape(QFrame::StyledPanel);
        fra_2->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(fra_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 20, 71, 21));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"line-spacing: 1.5;\n"
"border: none;\n"
"}"));
        memory_2 = new QLabel(fra_2);
        memory_2->setObjectName(QString::fromUtf8("memory_2"));
        memory_2->setGeometry(QRect(10, 50, 81, 31));
        memory_2->setFont(font2);
        memory_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	line-height: 1.5;\n"
"}"));
        frag_2 = new QLabel(fra_2);
        frag_2->setObjectName(QString::fromUtf8("frag_2"));
        frag_2->setGeometry(QRect(120, 40, 61, 21));
        frag_2->setFont(font4);
        frag_2->setToolTipDuration(2);
        frag_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"alignment: AlignHCenter;"));
        label_15 = new QLabel(fra_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(130, 70, 21, 21));
        label_15->setFont(font5);
        label_15->setStyleSheet(QString::fromUtf8("border: none;"));
        progress_2 = new QProgressBar(fra_2);
        progress_2->setObjectName(QString::fromUtf8("progress_2"));
        progress_2->setGeometry(QRect(20, 110, 130, 10));
        sizePolicy.setHeightForWidth(progress_2->sizePolicy().hasHeightForWidth());
        progress_2->setSizePolicy(sizePolicy);
        progress_2->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
""));
        progress_2->setValue(0);
        progress_2->setTextVisible(false);
        detail_2 = new QLabel(fra_2);
        detail_2->setObjectName(QString::fromUtf8("detail_2"));
        detail_2->setGeometry(QRect(20, 120, 121, 16));
        detail_2->setFont(font3);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 10, 311, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Lato Black"));
        font6.setPointSize(20);
        font6.setBold(true);
        font6.setWeight(75);
        label_2->setFont(font6);
        label_2->setStyleSheet(QString::fromUtf8("color: white;"));
        fra_3 = new QFrame(centralwidget);
        fra_3->setObjectName(QString::fromUtf8("fra_3"));
        fra_3->setGeometry(QRect(510, 100, 181, 171));
        fra_3->setStyleSheet(QString::fromUtf8("background-color: #1ED760;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        fra_3->setFrameShape(QFrame::StyledPanel);
        fra_3->setFrameShadow(QFrame::Raised);
        label_27 = new QLabel(fra_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 20, 71, 21));
        label_27->setFont(font1);
        label_27->setStyleSheet(QString::fromUtf8("QLabel{\n"
"line-spacing: 1.5;\n"
"border: none;\n"
"}"));
        memory_3 = new QLabel(fra_3);
        memory_3->setObjectName(QString::fromUtf8("memory_3"));
        memory_3->setGeometry(QRect(10, 50, 81, 31));
        memory_3->setFont(font2);
        memory_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	line-height: 1.5;\n"
"}"));
        frag_3 = new QLabel(fra_3);
        frag_3->setObjectName(QString::fromUtf8("frag_3"));
        frag_3->setGeometry(QRect(120, 40, 51, 21));
        frag_3->setFont(font4);
        frag_3->setToolTipDuration(2);
        frag_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"alignment: AlignHCenter;"));
        label_30 = new QLabel(fra_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(130, 70, 21, 21));
        label_30->setFont(font5);
        label_30->setStyleSheet(QString::fromUtf8("border: none;"));
        progress_3 = new QProgressBar(fra_3);
        progress_3->setObjectName(QString::fromUtf8("progress_3"));
        progress_3->setGeometry(QRect(20, 110, 130, 10));
        sizePolicy.setHeightForWidth(progress_3->sizePolicy().hasHeightForWidth());
        progress_3->setSizePolicy(sizePolicy);
        progress_3->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
""));
        progress_3->setValue(0);
        progress_3->setTextVisible(false);
        detail_3 = new QLabel(fra_3);
        detail_3->setObjectName(QString::fromUtf8("detail_3"));
        detail_3->setGeometry(QRect(20, 120, 111, 16));
        detail_3->setFont(font3);
        frame_6 = new QFrame(centralwidget);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(310, 790, 201, 241));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: #FFEBCD;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_41 = new QLabel(frame_6);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(60, 10, 81, 31));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Montserrat"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        label_41->setFont(font7);
        label_41->setStyleSheet(QString::fromUtf8("border: none"));
        w_job_1 = new QLabel(frame_6);
        w_job_1->setObjectName(QString::fromUtf8("w_job_1"));
        w_job_1->setGeometry(QRect(80, 60, 55, 31));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Open Sans"));
        font8.setPointSize(9);
        font8.setBold(true);
        font8.setWeight(75);
        w_job_1->setFont(font8);
        w_job_1->setStyleSheet(QString::fromUtf8("border: none; text-align: center;"));
        w_job_2 = new QLabel(frame_6);
        w_job_2->setObjectName(QString::fromUtf8("w_job_2"));
        w_job_2->setGeometry(QRect(80, 100, 55, 31));
        w_job_2->setFont(font8);
        w_job_2->setStyleSheet(QString::fromUtf8("border: none; text-align: center;"));
        w_job_3 = new QLabel(frame_6);
        w_job_3->setObjectName(QString::fromUtf8("w_job_3"));
        w_job_3->setGeometry(QRect(80, 140, 55, 31));
        w_job_3->setFont(font8);
        w_job_3->setStyleSheet(QString::fromUtf8("border: none; text-align: center;"));
        w_job_4 = new QLabel(frame_6);
        w_job_4->setObjectName(QString::fromUtf8("w_job_4"));
        w_job_4->setGeometry(QRect(80, 180, 55, 31));
        w_job_4->setFont(font8);
        w_job_4->setStyleSheet(QString::fromUtf8("border: none; text-align: center;"));
        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(550, 780, 801, 241));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"  background-clip: border-box;\n"
"  border: 5px solid #C71585;\n"
"  border-radius: 30px;\n"
"box-shadow: 3px 4px 24px 5px rgba(199,21,133,1);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_46 = new QLabel(frame_5);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(50, 10, 221, 31));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Lato Black"));
        font9.setPointSize(12);
        font9.setBold(true);
        font9.setWeight(75);
        label_46->setFont(font9);
        label_46->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"background-color: none;"));
        label_7 = new QLabel(frame_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 40, 51, 31));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Open Sans"));
        font10.setPointSize(10);
        font10.setBold(true);
        font10.setWeight(75);
        label_7->setFont(font10);
        label_7->setStyleSheet(QString::fromUtf8("border: none;"));
        time_label = new QLabel(frame_5);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setGeometry(QRect(70, 47, 71, 16));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Montserrat Medium"));
        font11.setPointSize(10);
        time_label->setFont(font11);
        time_label->setStyleSheet(QString::fromUtf8("border: none;"));
        arrive_noti = new QLabel(frame_5);
        arrive_noti->setObjectName(QString::fromUtf8("arrive_noti"));
        arrive_noti->setGeometry(QRect(20, 80, 771, 31));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Montserrat SemiBold"));
        font12.setPointSize(11);
        font12.setBold(true);
        font12.setWeight(75);
        arrive_noti->setFont(font12);
        arrive_noti->setStyleSheet(QString::fromUtf8("color:white; border: none;"));
        arrive_noti_2 = new QLabel(frame_5);
        arrive_noti_2->setObjectName(QString::fromUtf8("arrive_noti_2"));
        arrive_noti_2->setGeometry(QRect(20, 110, 771, 41));
        arrive_noti_2->setFont(font12);
        arrive_noti_2->setStyleSheet(QString::fromUtf8("color:white; border: none;"));
        arrive_noti_3 = new QLabel(frame_5);
        arrive_noti_3->setObjectName(QString::fromUtf8("arrive_noti_3"));
        arrive_noti_3->setGeometry(QRect(20, 140, 771, 41));
        arrive_noti_3->setFont(font12);
        arrive_noti_3->setStyleSheet(QString::fromUtf8("color:white; border: none;"));
        arrive_noti_7 = new QLabel(frame_5);
        arrive_noti_7->setObjectName(QString::fromUtf8("arrive_noti_7"));
        arrive_noti_7->setGeometry(QRect(20, 180, 771, 41));
        arrive_noti_7->setFont(font12);
        arrive_noti_7->setStyleSheet(QString::fromUtf8("color:white; border: none;"));
        fra_4 = new QFrame(centralwidget);
        fra_4->setObjectName(QString::fromUtf8("fra_4"));
        fra_4->setGeometry(QRect(720, 100, 181, 171));
        fra_4->setStyleSheet(QString::fromUtf8("background-color: #1ED760;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        fra_4->setFrameShape(QFrame::StyledPanel);
        fra_4->setFrameShadow(QFrame::Raised);
        label_48 = new QLabel(fra_4);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(10, 20, 71, 21));
        label_48->setFont(font1);
        label_48->setStyleSheet(QString::fromUtf8("QLabel{\n"
"line-spacing: 1.5;\n"
"border: none;\n"
"}"));
        memory_4 = new QLabel(fra_4);
        memory_4->setObjectName(QString::fromUtf8("memory_4"));
        memory_4->setGeometry(QRect(10, 50, 81, 31));
        memory_4->setFont(font2);
        memory_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	line-height: 1.5;\n"
"}"));
        frag_4 = new QLabel(fra_4);
        frag_4->setObjectName(QString::fromUtf8("frag_4"));
        frag_4->setGeometry(QRect(120, 40, 51, 21));
        frag_4->setFont(font4);
        frag_4->setToolTipDuration(2);
        frag_4->setStyleSheet(QString::fromUtf8("border: none;\n"
"alignment: AlignHCenter;"));
        label_50 = new QLabel(fra_4);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(130, 70, 21, 21));
        label_50->setFont(font5);
        label_50->setStyleSheet(QString::fromUtf8("border: none;"));
        progress_4 = new QProgressBar(fra_4);
        progress_4->setObjectName(QString::fromUtf8("progress_4"));
        progress_4->setGeometry(QRect(20, 110, 130, 10));
        sizePolicy.setHeightForWidth(progress_4->sizePolicy().hasHeightForWidth());
        progress_4->setSizePolicy(sizePolicy);
        progress_4->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
""));
        progress_4->setValue(0);
        progress_4->setTextVisible(false);
        detail_4 = new QLabel(fra_4);
        detail_4->setObjectName(QString::fromUtf8("detail_4"));
        detail_4->setGeometry(QRect(20, 120, 121, 16));
        detail_4->setFont(font3);
        fra_5 = new QFrame(centralwidget);
        fra_5->setObjectName(QString::fromUtf8("fra_5"));
        fra_5->setGeometry(QRect(930, 100, 181, 171));
        fra_5->setStyleSheet(QString::fromUtf8("background-color: #1ED760;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        fra_5->setFrameShape(QFrame::StyledPanel);
        fra_5->setFrameShadow(QFrame::Raised);
        label_54 = new QLabel(fra_5);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(10, 20, 71, 21));
        label_54->setFont(font1);
        label_54->setStyleSheet(QString::fromUtf8("QLabel{\n"
"line-spacing: 1.5;\n"
"border: none;\n"
"}"));
        memory_5 = new QLabel(fra_5);
        memory_5->setObjectName(QString::fromUtf8("memory_5"));
        memory_5->setGeometry(QRect(10, 50, 81, 31));
        memory_5->setFont(font2);
        memory_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	line-height: 1.5;\n"
"}"));
        frag_5 = new QLabel(fra_5);
        frag_5->setObjectName(QString::fromUtf8("frag_5"));
        frag_5->setGeometry(QRect(120, 40, 61, 21));
        frag_5->setFont(font4);
        frag_5->setToolTipDuration(2);
        frag_5->setStyleSheet(QString::fromUtf8("border: none;\n"
"alignment: AlignHCenter;"));
        label_56 = new QLabel(fra_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(130, 70, 21, 21));
        label_56->setFont(font5);
        label_56->setStyleSheet(QString::fromUtf8("border: none;"));
        progress_5 = new QProgressBar(fra_5);
        progress_5->setObjectName(QString::fromUtf8("progress_5"));
        progress_5->setGeometry(QRect(20, 110, 130, 10));
        sizePolicy.setHeightForWidth(progress_5->sizePolicy().hasHeightForWidth());
        progress_5->setSizePolicy(sizePolicy);
        progress_5->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
""));
        progress_5->setValue(0);
        progress_5->setTextVisible(false);
        detail_5 = new QLabel(fra_5);
        detail_5->setObjectName(QString::fromUtf8("detail_5"));
        detail_5->setGeometry(QRect(20, 120, 131, 16));
        detail_5->setFont(font3);
        fra_6 = new QFrame(centralwidget);
        fra_6->setObjectName(QString::fromUtf8("fra_6"));
        fra_6->setGeometry(QRect(70, 310, 191, 171));
        fra_6->setStyleSheet(QString::fromUtf8("background-color: #1ED760;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        fra_6->setFrameShape(QFrame::StyledPanel);
        fra_6->setFrameShadow(QFrame::Raised);
        label_57 = new QLabel(fra_6);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(10, 20, 71, 21));
        label_57->setFont(font1);
        label_57->setStyleSheet(QString::fromUtf8("QLabel{\n"
"line-spacing: 1.5;\n"
"border: none;\n"
"}"));
        memory_6 = new QLabel(fra_6);
        memory_6->setObjectName(QString::fromUtf8("memory_6"));
        memory_6->setGeometry(QRect(10, 50, 81, 31));
        memory_6->setFont(font2);
        memory_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	line-height: 1.5;\n"
"}"));
        frag_6 = new QLabel(fra_6);
        frag_6->setObjectName(QString::fromUtf8("frag_6"));
        frag_6->setGeometry(QRect(120, 40, 61, 21));
        frag_6->setFont(font4);
        frag_6->setToolTipDuration(2);
        frag_6->setStyleSheet(QString::fromUtf8("border: none;\n"
"alignment: AlignHCenter;"));
        label_59 = new QLabel(fra_6);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(130, 70, 21, 21));
        label_59->setFont(font5);
        label_59->setStyleSheet(QString::fromUtf8("border: none;"));
        progress_6 = new QProgressBar(fra_6);
        progress_6->setObjectName(QString::fromUtf8("progress_6"));
        progress_6->setGeometry(QRect(20, 110, 130, 10));
        sizePolicy.setHeightForWidth(progress_6->sizePolicy().hasHeightForWidth());
        progress_6->setSizePolicy(sizePolicy);
        progress_6->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
""));
        progress_6->setValue(0);
        progress_6->setTextVisible(false);
        detail_6 = new QLabel(fra_6);
        detail_6->setObjectName(QString::fromUtf8("detail_6"));
        detail_6->setGeometry(QRect(20, 120, 131, 16));
        detail_6->setFont(font3);
        fra_7 = new QFrame(centralwidget);
        fra_7->setObjectName(QString::fromUtf8("fra_7"));
        fra_7->setGeometry(QRect(290, 310, 191, 171));
        fra_7->setStyleSheet(QString::fromUtf8("background-color: #1ED760;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        fra_7->setFrameShape(QFrame::StyledPanel);
        fra_7->setFrameShadow(QFrame::Raised);
        label_60 = new QLabel(fra_7);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(10, 20, 71, 21));
        label_60->setFont(font1);
        label_60->setStyleSheet(QString::fromUtf8("QLabel{\n"
"line-spacing: 1.5;\n"
"border: none;\n"
"}"));
        memory_7 = new QLabel(fra_7);
        memory_7->setObjectName(QString::fromUtf8("memory_7"));
        memory_7->setGeometry(QRect(10, 50, 81, 31));
        memory_7->setFont(font2);
        memory_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	line-height: 1.5;\n"
"}"));
        frag_7 = new QLabel(fra_7);
        frag_7->setObjectName(QString::fromUtf8("frag_7"));
        frag_7->setGeometry(QRect(120, 40, 61, 21));
        frag_7->setFont(font4);
        frag_7->setToolTipDuration(2);
        frag_7->setStyleSheet(QString::fromUtf8("border: none;\n"
"alignment: AlignHCenter;"));
        label_62 = new QLabel(fra_7);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(130, 70, 21, 21));
        label_62->setFont(font5);
        label_62->setStyleSheet(QString::fromUtf8("border: none;"));
        progress_7 = new QProgressBar(fra_7);
        progress_7->setObjectName(QString::fromUtf8("progress_7"));
        progress_7->setGeometry(QRect(20, 110, 130, 10));
        sizePolicy.setHeightForWidth(progress_7->sizePolicy().hasHeightForWidth());
        progress_7->setSizePolicy(sizePolicy);
        progress_7->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
""));
        progress_7->setValue(0);
        progress_7->setTextVisible(false);
        detail_7 = new QLabel(fra_7);
        detail_7->setObjectName(QString::fromUtf8("detail_7"));
        detail_7->setGeometry(QRect(20, 120, 111, 16));
        detail_7->setFont(font3);
        fra_8 = new QFrame(centralwidget);
        fra_8->setObjectName(QString::fromUtf8("fra_8"));
        fra_8->setGeometry(QRect(510, 310, 191, 171));
        fra_8->setStyleSheet(QString::fromUtf8("background-color: #1ED760;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        fra_8->setFrameShape(QFrame::StyledPanel);
        fra_8->setFrameShadow(QFrame::Raised);
        label_63 = new QLabel(fra_8);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setGeometry(QRect(10, 20, 71, 21));
        label_63->setFont(font1);
        label_63->setStyleSheet(QString::fromUtf8("QLabel{\n"
"line-spacing: 1.5;\n"
"border: none;\n"
"}"));
        memory_8 = new QLabel(fra_8);
        memory_8->setObjectName(QString::fromUtf8("memory_8"));
        memory_8->setGeometry(QRect(10, 50, 81, 31));
        memory_8->setFont(font2);
        memory_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	line-height: 1.5;\n"
"}"));
        frag_8 = new QLabel(fra_8);
        frag_8->setObjectName(QString::fromUtf8("frag_8"));
        frag_8->setGeometry(QRect(120, 40, 41, 21));
        frag_8->setFont(font4);
        frag_8->setToolTipDuration(2);
        frag_8->setStyleSheet(QString::fromUtf8("border: none;\n"
"alignment: AlignHCenter;"));
        label_65 = new QLabel(fra_8);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setGeometry(QRect(130, 70, 21, 21));
        label_65->setFont(font5);
        label_65->setStyleSheet(QString::fromUtf8("border: none;"));
        progress_8 = new QProgressBar(fra_8);
        progress_8->setObjectName(QString::fromUtf8("progress_8"));
        progress_8->setGeometry(QRect(20, 110, 130, 10));
        sizePolicy.setHeightForWidth(progress_8->sizePolicy().hasHeightForWidth());
        progress_8->setSizePolicy(sizePolicy);
        progress_8->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
""));
        progress_8->setValue(0);
        progress_8->setTextVisible(false);
        detail_8 = new QLabel(fra_8);
        detail_8->setObjectName(QString::fromUtf8("detail_8"));
        detail_8->setGeometry(QRect(20, 120, 121, 16));
        detail_8->setFont(font3);
        fra_9 = new QFrame(centralwidget);
        fra_9->setObjectName(QString::fromUtf8("fra_9"));
        fra_9->setGeometry(QRect(720, 310, 181, 171));
        fra_9->setStyleSheet(QString::fromUtf8("background-color: #1ED760;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        fra_9->setFrameShape(QFrame::StyledPanel);
        fra_9->setFrameShadow(QFrame::Raised);
        label_66 = new QLabel(fra_9);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setGeometry(QRect(10, 20, 71, 21));
        label_66->setFont(font1);
        label_66->setStyleSheet(QString::fromUtf8("QLabel{\n"
"line-spacing: 1.5;\n"
"border: none;\n"
"}"));
        memory_9 = new QLabel(fra_9);
        memory_9->setObjectName(QString::fromUtf8("memory_9"));
        memory_9->setGeometry(QRect(10, 50, 81, 31));
        memory_9->setFont(font2);
        memory_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	line-height: 1.5;\n"
"}"));
        frag_9 = new QLabel(fra_9);
        frag_9->setObjectName(QString::fromUtf8("frag_9"));
        frag_9->setGeometry(QRect(120, 40, 51, 21));
        frag_9->setFont(font4);
        frag_9->setToolTipDuration(2);
        frag_9->setStyleSheet(QString::fromUtf8("border: none;\n"
"alignment: AlignHCenter;"));
        label_68 = new QLabel(fra_9);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(130, 70, 21, 21));
        label_68->setFont(font5);
        label_68->setStyleSheet(QString::fromUtf8("border: none;"));
        progress_9 = new QProgressBar(fra_9);
        progress_9->setObjectName(QString::fromUtf8("progress_9"));
        progress_9->setGeometry(QRect(20, 110, 130, 10));
        sizePolicy.setHeightForWidth(progress_9->sizePolicy().hasHeightForWidth());
        progress_9->setSizePolicy(sizePolicy);
        progress_9->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
""));
        progress_9->setValue(0);
        progress_9->setTextVisible(false);
        detail_9 = new QLabel(fra_9);
        detail_9->setObjectName(QString::fromUtf8("detail_9"));
        detail_9->setGeometry(QRect(20, 120, 101, 16));
        detail_9->setFont(font3);
        fra_10 = new QFrame(centralwidget);
        fra_10->setObjectName(QString::fromUtf8("fra_10"));
        fra_10->setGeometry(QRect(930, 310, 181, 171));
        fra_10->setStyleSheet(QString::fromUtf8("background-color: #1ED760;\n"
"  background-clip: border-box;\n"
"  border: 1px solid rgba(0, 0, 0, 0.125);\n"
"  border-radius: 30px;"));
        fra_10->setFrameShape(QFrame::StyledPanel);
        fra_10->setFrameShadow(QFrame::Raised);
        label_69 = new QLabel(fra_10);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setGeometry(QRect(10, 20, 71, 21));
        label_69->setFont(font1);
        label_69->setStyleSheet(QString::fromUtf8("QLabel{\n"
"line-spacing: 1.5;\n"
"border: none;\n"
"}"));
        memory_10 = new QLabel(fra_10);
        memory_10->setObjectName(QString::fromUtf8("memory_10"));
        memory_10->setGeometry(QRect(10, 50, 81, 31));
        memory_10->setFont(font2);
        memory_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: none;\n"
"	line-height: 1.5;\n"
"}"));
        frag_10 = new QLabel(fra_10);
        frag_10->setObjectName(QString::fromUtf8("frag_10"));
        frag_10->setGeometry(QRect(120, 40, 61, 21));
        frag_10->setFont(font4);
        frag_10->setToolTipDuration(2);
        frag_10->setStyleSheet(QString::fromUtf8("border: none;\n"
"alignment: AlignHCenter;"));
        label_71 = new QLabel(fra_10);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setGeometry(QRect(130, 70, 21, 21));
        label_71->setFont(font5);
        label_71->setStyleSheet(QString::fromUtf8("border: none;"));
        progress_10 = new QProgressBar(fra_10);
        progress_10->setObjectName(QString::fromUtf8("progress_10"));
        progress_10->setGeometry(QRect(20, 110, 130, 10));
        sizePolicy.setHeightForWidth(progress_10->sizePolicy().hasHeightForWidth());
        progress_10->setSizePolicy(sizePolicy);
        progress_10->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
""));
        progress_10->setValue(0);
        progress_10->setTextVisible(false);
        detail_10 = new QLabel(fra_10);
        detail_10->setObjectName(QString::fromUtf8("detail_10"));
        detail_10->setGeometry(QRect(20, 120, 131, 16));
        detail_10->setFont(font3);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 540, 1121, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        block_2 = new QLabel(frame);
        block_2->setObjectName(QString::fromUtf8("block_2"));
        block_2->setGeometry(QRect(70, 10, 111, 71));
        block_2->setFont(font11);
        block_2->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 0px;"));
        block_3 = new QLabel(frame);
        block_3->setObjectName(QString::fromUtf8("block_3"));
        block_3->setGeometry(QRect(180, 10, 141, 71));
        block_3->setFont(font11);
        block_3->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 0px;"));
        block_4 = new QLabel(frame);
        block_4->setObjectName(QString::fromUtf8("block_4"));
        block_4->setGeometry(QRect(320, 10, 111, 71));
        block_4->setFont(font11);
        block_4->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 0px;"));
        block_5 = new QLabel(frame);
        block_5->setObjectName(QString::fromUtf8("block_5"));
        block_5->setGeometry(QRect(430, 10, 111, 71));
        block_5->setFont(font11);
        block_5->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 0px;"));
        block_6 = new QLabel(frame);
        block_6->setObjectName(QString::fromUtf8("block_6"));
        block_6->setGeometry(QRect(540, 10, 161, 71));
        block_6->setFont(font11);
        block_6->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 0px;"));
        block_7 = new QLabel(frame);
        block_7->setObjectName(QString::fromUtf8("block_7"));
        block_7->setGeometry(QRect(700, 10, 141, 71));
        block_7->setFont(font11);
        block_7->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 0px;"));
        block_8 = new QLabel(frame);
        block_8->setObjectName(QString::fromUtf8("block_8"));
        block_8->setGeometry(QRect(840, 10, 51, 71));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Montserrat Medium"));
        font13.setPointSize(8);
        block_8->setFont(font13);
        block_8->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 0px;"));
        block_9 = new QLabel(frame);
        block_9->setObjectName(QString::fromUtf8("block_9"));
        block_9->setGeometry(QRect(890, 10, 81, 71));
        block_9->setFont(font11);
        block_9->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 0px;"));
        block_10 = new QLabel(frame);
        block_10->setObjectName(QString::fromUtf8("block_10"));
        block_10->setGeometry(QRect(970, 10, 111, 71));
        block_10->setFont(font11);
        block_10->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 0px;"));
        block_1 = new QLabel(frame);
        block_1->setObjectName(QString::fromUtf8("block_1"));
        block_1->setGeometry(QRect(0, 10, 71, 71));
        block_1->setFont(font11);
        block_1->setStyleSheet(QString::fromUtf8("border: 2px solid white;\n"
"border-radius: 0px;"));
        dyn_1 = new QLabel(centralwidget);
        dyn_1->setObjectName(QString::fromUtf8("dyn_1"));
        dyn_1->setGeometry(QRect(30, 630, 71, 71));
        dyn_1->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 0px;\n"
"border: none;"));
        dyn_2 = new QLabel(centralwidget);
        dyn_2->setObjectName(QString::fromUtf8("dyn_2"));
        dyn_2->setGeometry(QRect(40, 700, 111, 71));
        dyn_2->setStyleSheet(QString::fromUtf8("border: 2px solid none;\n"
"border-radius: 0px;\n"
"\n"
""));
        dyn_3 = new QLabel(centralwidget);
        dyn_3->setObjectName(QString::fromUtf8("dyn_3"));
        dyn_3->setGeometry(QRect(150, 700, 141, 71));
        dyn_3->setStyleSheet(QString::fromUtf8("border: 2px solid none;\n"
"border-radius: 0px;"));
        dyn_4 = new QLabel(centralwidget);
        dyn_4->setObjectName(QString::fromUtf8("dyn_4"));
        dyn_4->setGeometry(QRect(290, 700, 111, 71));
        dyn_4->setStyleSheet(QString::fromUtf8("border: 2px solid none;\n"
"border-radius: 0px;\n"
""));
        dyn_5 = new QLabel(centralwidget);
        dyn_5->setObjectName(QString::fromUtf8("dyn_5"));
        dyn_5->setGeometry(QRect(400, 700, 111, 71));
        dyn_5->setStyleSheet(QString::fromUtf8("border: 2px solid none;\n"
"border-radius: 0px;\n"
""));
        dyn_6 = new QLabel(centralwidget);
        dyn_6->setObjectName(QString::fromUtf8("dyn_6"));
        dyn_6->setGeometry(QRect(510, 700, 161, 71));
        dyn_6->setStyleSheet(QString::fromUtf8("border: 2px solid none;\n"
"border-radius: 0px;"));
        dyn_7 = new QLabel(centralwidget);
        dyn_7->setObjectName(QString::fromUtf8("dyn_7"));
        dyn_7->setGeometry(QRect(670, 700, 141, 71));
        dyn_7->setStyleSheet(QString::fromUtf8("border: 2px solid none;\n"
"border-radius: 0px;"));
        dyn_8 = new QLabel(centralwidget);
        dyn_8->setObjectName(QString::fromUtf8("dyn_8"));
        dyn_8->setGeometry(QRect(810, 700, 51, 71));
        dyn_8->setStyleSheet(QString::fromUtf8("border: 2px solid none;\n"
"border-radius: 0px;"));
        dyn_9 = new QLabel(centralwidget);
        dyn_9->setObjectName(QString::fromUtf8("dyn_9"));
        dyn_9->setGeometry(QRect(860, 700, 81, 71));
        dyn_9->setStyleSheet(QString::fromUtf8("border: 2px solid none;\n"
"border-radius: 0px;"));
        dyn_10 = new QLabel(centralwidget);
        dyn_10->setObjectName(QString::fromUtf8("dyn_10"));
        dyn_10->setGeometry(QRect(940, 700, 111, 71));
        dyn_10->setStyleSheet(QString::fromUtf8("border: 2px solid none;\n"
"border-radius: 0px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(500, 60, 201, 16));
        QFont font14;
        font14.setFamily(QString::fromUtf8("Montserrat SemiBold"));
        font14.setBold(true);
        font14.setWeight(75);
        label_3->setFont(font14);
        label_3->setStyleSheet(QString::fromUtf8("color: white;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(410, 500, 501, 31));
        label_5->setFont(font12);
        label_5->setStyleSheet(QString::fromUtf8("color: white;"));
        frame_7 = new QFrame(centralwidget);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(20, 800, 261, 221));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"  background-clip: border-box;\n"
"  border: 5px solid #C71585;\n"
"  border-radius: 30px;\n"
"box-shadow: 3px 4px 24px 5px rgba(199,21,133,1);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_55 = new QLabel(frame_7);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(70, 10, 101, 31));
        label_55->setFont(font9);
        label_55->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"background-color: none;"));
        info = new QLabel(frame_7);
        info->setObjectName(QString::fromUtf8("info"));
        info->setGeometry(QRect(40, 60, 181, 111));
        QFont font15;
        font15.setFamily(QString::fromUtf8("Montserrat ExtraBold"));
        font15.setPointSize(11);
        font15.setBold(true);
        font15.setWeight(75);
        info->setFont(font15);
        info->setStyleSheet(QString::fromUtf8("color: white; border: none;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1364, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Memory Simulator", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Memory 1", nullptr));
        memory_1->setText(QCoreApplication::translate("MainWindow", "No Job", nullptr));
        detail_1->setText(QCoreApplication::translate("MainWindow", "0/600", nullptr));
        frag_1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        IF_1->setText(QCoreApplication::translate("MainWindow", "IF", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Memory 2", nullptr));
        memory_2->setText(QCoreApplication::translate("MainWindow", "No Job", nullptr));
        frag_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "IF", nullptr));
        detail_2->setText(QCoreApplication::translate("MainWindow", "0/4020", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Memory Simulator", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Memory 3", nullptr));
        memory_3->setText(QCoreApplication::translate("MainWindow", "No Job", nullptr));
        frag_3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "IF", nullptr));
        detail_3->setText(QCoreApplication::translate("MainWindow", "0/6800", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "Waiting", nullptr));
        w_job_1->setText(QString());
        w_job_2->setText(QString());
        w_job_3->setText(QString());
        w_job_4->setText(QString());
        label_46->setText(QCoreApplication::translate("MainWindow", "System Information", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Time: ", nullptr));
        time_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        arrive_noti->setText(QString());
        arrive_noti_2->setText(QString());
        arrive_noti_3->setText(QString());
        arrive_noti_7->setText(QString());
        label_48->setText(QCoreApplication::translate("MainWindow", "Memory 4", nullptr));
        memory_4->setText(QCoreApplication::translate("MainWindow", "No Job", nullptr));
        frag_4->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "IF", nullptr));
        detail_4->setText(QCoreApplication::translate("MainWindow", "0/10300", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "Memory 5", nullptr));
        memory_5->setText(QCoreApplication::translate("MainWindow", "No Job", nullptr));
        frag_5->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "IF", nullptr));
        detail_5->setText(QCoreApplication::translate("MainWindow", "0/4800", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "Memory 6", nullptr));
        memory_6->setText(QCoreApplication::translate("MainWindow", "No Job", nullptr));
        frag_6->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_59->setText(QCoreApplication::translate("MainWindow", "IF", nullptr));
        detail_6->setText(QCoreApplication::translate("MainWindow", "0/12000", nullptr));
        label_60->setText(QCoreApplication::translate("MainWindow", "Memory 7", nullptr));
        memory_7->setText(QCoreApplication::translate("MainWindow", "No Job", nullptr));
        frag_7->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_62->setText(QCoreApplication::translate("MainWindow", "IF", nullptr));
        detail_7->setText(QCoreApplication::translate("MainWindow", "0/5600", nullptr));
        label_63->setText(QCoreApplication::translate("MainWindow", "Memory 8", nullptr));
        memory_8->setText(QCoreApplication::translate("MainWindow", "No Job", nullptr));
        frag_8->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_65->setText(QCoreApplication::translate("MainWindow", "IF", nullptr));
        detail_8->setText(QCoreApplication::translate("MainWindow", "0/480", nullptr));
        label_66->setText(QCoreApplication::translate("MainWindow", "Memory 9", nullptr));
        memory_9->setText(QCoreApplication::translate("MainWindow", "No Job", nullptr));
        frag_9->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_68->setText(QCoreApplication::translate("MainWindow", "IF", nullptr));
        detail_9->setText(QCoreApplication::translate("MainWindow", "0/2400", nullptr));
        label_69->setText(QCoreApplication::translate("MainWindow", "Memory 10", nullptr));
        memory_10->setText(QCoreApplication::translate("MainWindow", "No Job", nullptr));
        frag_10->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_71->setText(QCoreApplication::translate("MainWindow", "IF", nullptr));
        detail_10->setText(QCoreApplication::translate("MainWindow", "0/3000", nullptr));
        block_2->setText(QString());
        block_3->setText(QString());
        block_4->setText(QString());
        block_5->setText(QString());
        block_6->setText(QString());
        block_7->setText(QString());
        block_8->setText(QString());
        block_9->setText(QString());
        block_10->setText(QString());
        block_1->setText(QString());
        dyn_1->setText(QString());
        dyn_2->setText(QString());
        dyn_3->setText(QString());
        dyn_4->setText(QString());
        dyn_5->setText(QString());
        dyn_6->setText(QString());
        dyn_7->setText(QString());
        dyn_8->setText(QString());
        dyn_9->setText(QString());
        dyn_10->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Summary of Memory Blocks", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Simulation for Fixed Partition and Dynamic Partition", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "Guideline", nullptr));
        info->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
