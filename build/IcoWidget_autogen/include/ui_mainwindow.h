/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBoxLng;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowserConsole;
    QGroupBox *groupBox_Vector;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButtonLoad_B;
    QGroupBox *groupBox_Fixator;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_Back_F;
    QRadioButton *radioButton_Front_F;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonCalcCurs;
    QPushButton *pushButtonSave_B;
    QGroupBox *groupBox_Angles;
    QLabel *label_amin_4;
    QLabel *label_ant2;
    QLabel *label_amax_3;
    QLabel *label_20;
    QLineEdit *lineEdit_up;
    QLineEdit *lineEdit_dn;
    QPushButton *pushButtonUP;
    QPushButton *pushButtonDN;
    QLabel *label_encod_5;
    QFrame *line;
    QPushButton *pushButtonLoad_E;
    QPushButton *pushButtonSave_E;
    QPushButton *pushButtonResetAcc;
    QLabel *label_encod_6;
    QSpinBox *spinBoxOfset;
    QSpinBox *spin_up_major;
    QSpinBox *spin_dn_major;
    QHBoxLayout *horizontalLayout_20;
    QGroupBox *groupBox_E;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButtonEps;
    QRadioButton *radioButtonBet;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditPath;
    QPushButton *pushButtonConnEnc;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1335, 986);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(400, 54));
        groupBox_2->setMaximumSize(QSize(400, 54));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"border: 2px solid lightgray;\n"
"margin-top: 5px;\n"
"border-radius: 2px;\n"
"\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    /*subcontrol-origin: margin;*/\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding-left:  5px;\n"
"	padding-right: 5px;\n"
"	margin-top: -15px;\n"
"   \n"
"}"));
        groupBox_2->setTitle(QStringLiteral("Language"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 10, 10, 10);
        comboBoxLng = new QComboBox(groupBox_2);
        comboBoxLng->setObjectName(QStringLiteral("comboBoxLng"));
        comboBoxLng->setMinimumSize(QSize(120, 0));

        horizontalLayout_4->addWidget(comboBoxLng);


        gridLayout_2->addWidget(groupBox_2, 0, 5, 1, 2);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(400, 400));
        widget->setAcceptDrops(false);
        widget->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(widget, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowserConsole = new QTextBrowser(centralWidget);
        textBrowserConsole->setObjectName(QStringLiteral("textBrowserConsole"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowserConsole->sizePolicy().hasHeightForWidth());
        textBrowserConsole->setSizePolicy(sizePolicy1);
        textBrowserConsole->setMinimumSize(QSize(400, 0));
        textBrowserConsole->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(false);
        font.setStyleStrategy(QFont::PreferDefault);
        textBrowserConsole->setFont(font);
        textBrowserConsole->setContextMenuPolicy(Qt::NoContextMenu);
        textBrowserConsole->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 25);\n"
"/*font: 10pt \"Sans\";*/"));
        textBrowserConsole->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowserConsole->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(textBrowserConsole);

        groupBox_Vector = new QGroupBox(centralWidget);
        groupBox_Vector->setObjectName(QStringLiteral("groupBox_Vector"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_Vector->sizePolicy().hasHeightForWidth());
        groupBox_Vector->setSizePolicy(sizePolicy2);
        groupBox_Vector->setMinimumSize(QSize(400, 50));
        groupBox_Vector->setMaximumSize(QSize(400, 261));
        groupBox_Vector->setStyleSheet(QLatin1String("QGroupBox {\n"
"border: 2px solid lightgray;\n"
"margin-top: 5px;\n"
"border-radius: 2px;\n"
"\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    /*subcontrol-origin: margin;*/\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding-left:  5px;\n"
"	padding-right: 5px;\n"
"	margin-top: -15px;\n"
"   \n"
"}\n"
""));
        verticalLayout_2 = new QVBoxLayout(groupBox_Vector);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        pushButtonLoad_B = new QPushButton(groupBox_Vector);
        pushButtonLoad_B->setObjectName(QStringLiteral("pushButtonLoad_B"));
#ifndef QT_NO_ACCESSIBILITY
        pushButtonLoad_B->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY

        horizontalLayout_12->addWidget(pushButtonLoad_B);


        verticalLayout_2->addLayout(horizontalLayout_12);

        groupBox_Fixator = new QGroupBox(groupBox_Vector);
        groupBox_Fixator->setObjectName(QStringLiteral("groupBox_Fixator"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_Fixator->sizePolicy().hasHeightForWidth());
        groupBox_Fixator->setSizePolicy(sizePolicy3);
        horizontalLayout = new QHBoxLayout(groupBox_Fixator);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_Back_F = new QRadioButton(groupBox_Fixator);
        radioButton_Back_F->setObjectName(QStringLiteral("radioButton_Back_F"));
        radioButton_Back_F->setChecked(true);

        horizontalLayout->addWidget(radioButton_Back_F);

        radioButton_Front_F = new QRadioButton(groupBox_Fixator);
        radioButton_Front_F->setObjectName(QStringLiteral("radioButton_Front_F"));

        horizontalLayout->addWidget(radioButton_Front_F);


        verticalLayout_2->addWidget(groupBox_Fixator);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButtonCalcCurs = new QPushButton(groupBox_Vector);
        pushButtonCalcCurs->setObjectName(QStringLiteral("pushButtonCalcCurs"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButtonCalcCurs->sizePolicy().hasHeightForWidth());
        pushButtonCalcCurs->setSizePolicy(sizePolicy4);
#ifndef QT_NO_ACCESSIBILITY
        pushButtonCalcCurs->setAccessibleDescription(QStringLiteral("S"));
#endif // QT_NO_ACCESSIBILITY

        horizontalLayout_7->addWidget(pushButtonCalcCurs);

        pushButtonSave_B = new QPushButton(groupBox_Vector);
        pushButtonSave_B->setObjectName(QStringLiteral("pushButtonSave_B"));
#ifndef QT_NO_ACCESSIBILITY
        pushButtonSave_B->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY

        horizontalLayout_7->addWidget(pushButtonSave_B);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout->addWidget(groupBox_Vector);

        groupBox_Angles = new QGroupBox(centralWidget);
        groupBox_Angles->setObjectName(QStringLiteral("groupBox_Angles"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_Angles->sizePolicy().hasHeightForWidth());
        groupBox_Angles->setSizePolicy(sizePolicy5);
        groupBox_Angles->setMinimumSize(QSize(400, 256));
        groupBox_Angles->setMaximumSize(QSize(400, 261));
        groupBox_Angles->setStyleSheet(QLatin1String("QGroupBox {\n"
"border: 2px solid lightgray;\n"
"margin-top: 5px;\n"
"border-radius: 2px;\n"
"\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    /*subcontrol-origin: margin;*/\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding-left:  5px;\n"
"	padding-right: 5px;\n"
"	margin-top: -15px;\n"
"   \n"
"}\n"
""));
        label_amin_4 = new QLabel(groupBox_Angles);
        label_amin_4->setObjectName(QStringLiteral("label_amin_4"));
        label_amin_4->setGeometry(QRect(90, 140, 41, 26));
        label_amin_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_ant2 = new QLabel(groupBox_Angles);
        label_ant2->setObjectName(QStringLiteral("label_ant2"));
        label_ant2->setGeometry(QRect(60, 30, 96, 26));
        label_ant2->setAlignment(Qt::AlignCenter);
        label_amax_3 = new QLabel(groupBox_Angles);
        label_amax_3->setObjectName(QStringLiteral("label_amax_3"));
        label_amax_3->setGeometry(QRect(90, 90, 41, 26));
        label_amax_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_20 = new QLabel(groupBox_Angles);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(5, 15, 161, 231));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy6);
        label_20->setMinimumSize(QSize(161, 231));
        label_20->setMaximumSize(QSize(161, 231));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/res/mirr2.png")));
        lineEdit_up = new QLineEdit(groupBox_Angles);
        lineEdit_up->setObjectName(QStringLiteral("lineEdit_up"));
        lineEdit_up->setGeometry(QRect(135, 90, 66, 27));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_up->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        lineEdit_up->setAlignment(Qt::AlignCenter);
        lineEdit_up->setReadOnly(false);
        lineEdit_dn = new QLineEdit(groupBox_Angles);
        lineEdit_dn->setObjectName(QStringLiteral("lineEdit_dn"));
        lineEdit_dn->setGeometry(QRect(135, 140, 66, 27));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_dn->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        lineEdit_dn->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit_dn->setAlignment(Qt::AlignCenter);
        pushButtonUP = new QPushButton(groupBox_Angles);
        pushButtonUP->setObjectName(QStringLiteral("pushButtonUP"));
        pushButtonUP->setGeometry(QRect(235, 90, 46, 27));
#ifndef QT_NO_ACCESSIBILITY
        pushButtonUP->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        pushButtonUP->setText(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/forward_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonUP->setIcon(icon);
        pushButtonUP->setCheckable(false);
        pushButtonUP->setAutoRepeat(false);
        pushButtonUP->setAutoDefault(false);
        pushButtonUP->setFlat(false);
        pushButtonDN = new QPushButton(groupBox_Angles);
        pushButtonDN->setObjectName(QStringLiteral("pushButtonDN"));
        pushButtonDN->setGeometry(QRect(235, 140, 46, 27));
#ifndef QT_NO_ACCESSIBILITY
        pushButtonDN->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        pushButtonDN->setText(QStringLiteral(""));
        pushButtonDN->setIcon(icon);
        pushButtonDN->setCheckable(false);
        pushButtonDN->setAutoRepeat(false);
        pushButtonDN->setAutoDefault(false);
        pushButtonDN->setFlat(false);
        label_encod_5 = new QLabel(groupBox_Angles);
        label_encod_5->setObjectName(QStringLiteral("label_encod_5"));
        label_encod_5->setGeometry(QRect(235, 65, 86, 21));
        label_encod_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line = new QFrame(groupBox_Angles);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(165, 122, 226, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButtonLoad_E = new QPushButton(groupBox_Angles);
        pushButtonLoad_E->setObjectName(QStringLiteral("pushButtonLoad_E"));
        pushButtonLoad_E->setGeometry(QRect(215, 20, 176, 27));
#ifndef QT_NO_ACCESSIBILITY
        pushButtonLoad_E->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        pushButtonSave_E = new QPushButton(groupBox_Angles);
        pushButtonSave_E->setObjectName(QStringLiteral("pushButtonSave_E"));
        pushButtonSave_E->setGeometry(QRect(215, 220, 176, 27));
#ifndef QT_NO_ACCESSIBILITY
        pushButtonSave_E->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        pushButtonResetAcc = new QPushButton(groupBox_Angles);
        pushButtonResetAcc->setObjectName(QStringLiteral("pushButtonResetAcc"));
        pushButtonResetAcc->setGeometry(QRect(160, 220, 46, 27));
#ifndef QT_NO_ACCESSIBILITY
        pushButtonResetAcc->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        pushButtonResetAcc->setText(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/upd.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonResetAcc->setIcon(icon1);
        pushButtonResetAcc->setCheckable(false);
        pushButtonResetAcc->setAutoRepeat(false);
        pushButtonResetAcc->setAutoDefault(false);
        pushButtonResetAcc->setFlat(false);
        label_encod_6 = new QLabel(groupBox_Angles);
        label_encod_6->setObjectName(QStringLiteral("label_encod_6"));
        label_encod_6->setGeometry(QRect(215, 185, 46, 21));
        label_encod_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBoxOfset = new QSpinBox(groupBox_Angles);
        spinBoxOfset->setObjectName(QStringLiteral("spinBoxOfset"));
        spinBoxOfset->setGeometry(QRect(270, 180, 120, 28));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(spinBoxOfset->sizePolicy().hasHeightForWidth());
        spinBoxOfset->setSizePolicy(sizePolicy7);
        spinBoxOfset->setMinimumSize(QSize(120, 0));
        spinBoxOfset->setMaximumSize(QSize(120, 16777215));
        spinBoxOfset->setMinimum(-32767);
        spinBoxOfset->setMaximum(32768);
        spinBoxOfset->setSingleStep(1);
        spinBoxOfset->setValue(0);
        spin_up_major = new QSpinBox(groupBox_Angles);
        spin_up_major->setObjectName(QStringLiteral("spin_up_major"));
        spin_up_major->setGeometry(QRect(310, 90, 80, 28));
        sizePolicy7.setHeightForWidth(spin_up_major->sizePolicy().hasHeightForWidth());
        spin_up_major->setSizePolicy(sizePolicy7);
        spin_up_major->setMinimumSize(QSize(80, 0));
        spin_up_major->setMaximumSize(QSize(80, 16777215));
        spin_up_major->setMinimum(0);
        spin_up_major->setMaximum(32768);
        spin_up_major->setSingleStep(1);
        spin_up_major->setValue(0);
        spin_dn_major = new QSpinBox(groupBox_Angles);
        spin_dn_major->setObjectName(QStringLiteral("spin_dn_major"));
        spin_dn_major->setGeometry(QRect(310, 140, 80, 28));
        sizePolicy7.setHeightForWidth(spin_dn_major->sizePolicy().hasHeightForWidth());
        spin_dn_major->setSizePolicy(sizePolicy7);
        spin_dn_major->setMinimumSize(QSize(80, 0));
        spin_dn_major->setMaximumSize(QSize(80, 16777215));
        spin_dn_major->setMinimum(0);
        spin_dn_major->setMaximum(32768);
        spin_dn_major->setSingleStep(1);
        spin_dn_major->setValue(0);
        label_20->raise();
        label_amin_4->raise();
        label_ant2->raise();
        label_amax_3->raise();
        lineEdit_up->raise();
        lineEdit_dn->raise();
        pushButtonUP->raise();
        pushButtonDN->raise();
        label_encod_5->raise();
        line->raise();
        pushButtonLoad_E->raise();
        pushButtonSave_E->raise();
        pushButtonResetAcc->raise();
        label_encod_6->raise();
        spinBoxOfset->raise();
        spin_up_major->raise();
        spin_dn_major->raise();

        verticalLayout->addWidget(groupBox_Angles);


        gridLayout_2->addLayout(verticalLayout, 1, 5, 1, 2);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        groupBox_E = new QGroupBox(centralWidget);
        groupBox_E->setObjectName(QStringLiteral("groupBox_E"));
        groupBox_E->setMinimumSize(QSize(280, 54));
        groupBox_E->setMaximumSize(QSize(16777215, 54));
        groupBox_E->setStyleSheet(QLatin1String("QGroupBox {\n"
"border: 2px solid lightgray;\n"
"margin-top: 5px;\n"
"border-radius: 2px;\n"
"\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    /*subcontrol-origin: margin;*/\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding-left:  5px;\n"
"	padding-right: 5px;\n"
"	margin-top: -15px;\n"
"   \n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_E);
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 10, 10, 10);
        radioButtonEps = new QRadioButton(groupBox_E);
        radioButtonEps->setObjectName(QStringLiteral("radioButtonEps"));
        radioButtonEps->setChecked(true);

        horizontalLayout_5->addWidget(radioButtonEps);

        radioButtonBet = new QRadioButton(groupBox_E);
        radioButtonBet->setObjectName(QStringLiteral("radioButtonBet"));

        horizontalLayout_5->addWidget(radioButtonBet);


        horizontalLayout_20->addWidget(groupBox_E);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 54));
        groupBox->setMaximumSize(QSize(16777215, 54));
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"border: 2px solid lightgray;\n"
"margin-top: 5px;\n"
"border-radius: 2px;\n"
"\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    /*subcontrol-origin: margin;*/\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding-left:  5px;\n"
"	padding-right: 5px;\n"
"	margin-top: -15px;\n"
"   \n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 10, 10, 10);
        lineEditPath = new QLineEdit(groupBox);
        lineEditPath->setObjectName(QStringLiteral("lineEditPath"));
        lineEditPath->setMinimumSize(QSize(180, 0));
        lineEditPath->setMaximumSize(QSize(10000, 16777215));
        lineEditPath->setInputMask(QStringLiteral(""));
        lineEditPath->setText(QStringLiteral("/dev/ttyUSB0"));

        horizontalLayout_3->addWidget(lineEditPath);

        pushButtonConnEnc = new QPushButton(groupBox);
        pushButtonConnEnc->setObjectName(QStringLiteral("pushButtonConnEnc"));
        pushButtonConnEnc->setEnabled(true);

        horizontalLayout_3->addWidget(pushButtonConnEnc);


        horizontalLayout_20->addWidget(groupBox);


        gridLayout_2->addLayout(horizontalLayout_20, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        pushButtonUP->setDefault(false);
        pushButtonDN->setDefault(false);
        pushButtonResetAcc->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox_Vector->setTitle(QApplication::translate("MainWindow", "Direction", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonLoad_B->setToolTip(QApplication::translate("MainWindow", "Load configur.file", 0));
#endif // QT_NO_TOOLTIP
        pushButtonLoad_B->setText(QApplication::translate("MainWindow", "Load conf. file", 0));
        groupBox_Fixator->setTitle(QApplication::translate("MainWindow", "Base is installed and turned", 0));
        radioButton_Back_F->setText(QApplication::translate("MainWindow", "backward(by default)", 0));
        radioButton_Front_F->setText(QApplication::translate("MainWindow", "forward", 0));
        pushButtonCalcCurs->setText(QApplication::translate("MainWindow", "Encoder adjustment", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonSave_B->setToolTip(QApplication::translate("MainWindow", "Save configur.file", 0));
#endif // QT_NO_TOOLTIP
        pushButtonSave_B->setText(QApplication::translate("MainWindow", "Save conf. file", 0));
        groupBox_Angles->setTitle(QApplication::translate("MainWindow", "Angles", 0));
        label_amin_4->setText(QApplication::translate("MainWindow", "min:", 0));
        label_ant2->setText(QApplication::translate("MainWindow", "Antenna(.60)", 0));
        label_amax_3->setText(QApplication::translate("MainWindow", "max:", 0));
        label_20->setText(QString());
        lineEdit_up->setText(QString());
        lineEdit_dn->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonUP->setToolTip(QApplication::translate("MainWindow", "Take position", 0));
#endif // QT_NO_TOOLTIP
        pushButtonUP->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonDN->setToolTip(QApplication::translate("MainWindow", "Take position", 0));
#endif // QT_NO_TOOLTIP
        pushButtonDN->setShortcut(QString());
        label_encod_5->setText(QApplication::translate("MainWindow", "Encoder:", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonLoad_E->setToolTip(QApplication::translate("MainWindow", "Load configur.file", 0));
#endif // QT_NO_TOOLTIP
        pushButtonLoad_E->setText(QApplication::translate("MainWindow", "Load conf. file", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonSave_E->setToolTip(QApplication::translate("MainWindow", "Save configur.file", 0));
#endif // QT_NO_TOOLTIP
        pushButtonSave_E->setText(QApplication::translate("MainWindow", "Save conf. file", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonResetAcc->setToolTip(QApplication::translate("MainWindow", "Reset dinamic extremum", 0));
#endif // QT_NO_TOOLTIP
        pushButtonResetAcc->setShortcut(QString());
        label_encod_6->setText(QApplication::translate("MainWindow", "Ofset:", 0));
        spinBoxOfset->setSuffix(QString());
        spin_up_major->setSuffix(QString());
        spin_dn_major->setSuffix(QString());
        groupBox_E->setTitle(QApplication::translate("MainWindow", "Encoder", 0));
        radioButtonEps->setText(QApplication::translate("MainWindow", " \306\220  (Swinging)", 0));
        radioButtonBet->setText(QApplication::translate("MainWindow", "\316\262  (Rotation)", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Encoder connection ", 0));
        pushButtonConnEnc->setText(QApplication::translate("MainWindow", "Connect", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
