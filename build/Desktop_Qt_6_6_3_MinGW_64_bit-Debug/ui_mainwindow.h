/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *menuafficher;
    QTableView *tableproduct;
    QWidget *menuajouter;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *bouttonajouter;
    QLineEdit *ajouternom;
    QLineEdit *ajouterquantitedisponible;
    QLineEdit *ajouterhumidite;
    QLineEdit *ajoutertemperature;
    QDateEdit *ajouterdatedebut;
    QDateEdit *ajouterexpiration;
    QWidget *menumodifier;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton;
    QLineEdit *ajouterquantitedisponible_2;
    QLineEdit *ajouterhumidite_2;
    QLineEdit *ajoutertemperature_2;
    QLineEdit *ajouternom_2;
    QLineEdit *idproduitmodif;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_2;
    QDateEdit *ajouterdatedebut_2;
    QDateEdit *ajouterexpiration_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QWidget *menusupprimer;
    QPushButton *button_supprimer;
    QLabel *label_14;
    QLineEdit *idsupprimer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1001, 762);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 10, 321, 101));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("  border: 5px solid lightgray;\n"
"  border-radius: 25px;\n"
""));
        label->setTextFormat(Qt::TextFormat::PlainText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 120, 981, 651));
        menuafficher = new QWidget();
        menuafficher->setObjectName("menuafficher");
        tableproduct = new QTableView(menuafficher);
        tableproduct->setObjectName("tableproduct");
        tableproduct->setGeometry(QRect(0, 10, 961, 521));
        tabWidget->addTab(menuafficher, QString());
        menuajouter = new QWidget();
        menuajouter->setObjectName("menuajouter");
        label_2 = new QLabel(menuajouter);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 40, 101, 41));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(menuajouter);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 200, 141, 41));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(menuajouter);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 280, 131, 41));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(menuajouter);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 360, 141, 41));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(menuajouter);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 440, 101, 41));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(menuajouter);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 120, 141, 41));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        bouttonajouter = new QPushButton(menuajouter);
        bouttonajouter->setObjectName("bouttonajouter");
        bouttonajouter->setGeometry(QRect(200, 530, 161, 51));
        ajouternom = new QLineEdit(menuajouter);
        ajouternom->setObjectName("ajouternom");
        ajouternom->setGeometry(QRect(200, 50, 131, 41));
        ajouterquantitedisponible = new QLineEdit(menuajouter);
        ajouterquantitedisponible->setObjectName("ajouterquantitedisponible");
        ajouterquantitedisponible->setGeometry(QRect(200, 210, 131, 41));
        ajouterhumidite = new QLineEdit(menuajouter);
        ajouterhumidite->setObjectName("ajouterhumidite");
        ajouterhumidite->setGeometry(QRect(200, 280, 131, 41));
        ajoutertemperature = new QLineEdit(menuajouter);
        ajoutertemperature->setObjectName("ajoutertemperature");
        ajoutertemperature->setGeometry(QRect(200, 355, 131, 41));
        ajouterdatedebut = new QDateEdit(menuajouter);
        ajouterdatedebut->setObjectName("ajouterdatedebut");
        ajouterdatedebut->setGeometry(QRect(200, 440, 131, 41));
        ajouterexpiration = new QDateEdit(menuajouter);
        ajouterexpiration->setObjectName("ajouterexpiration");
        ajouterexpiration->setGeometry(QRect(200, 120, 131, 41));
        tabWidget->addTab(menuajouter, QString());
        menumodifier = new QWidget();
        menumodifier->setObjectName("menumodifier");
        label_8 = new QLabel(menumodifier);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(470, 240, 141, 41));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9 = new QLabel(menumodifier);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(480, 300, 131, 41));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(menumodifier);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(500, 420, 101, 41));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_11 = new QLabel(menumodifier);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(480, 360, 141, 41));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12 = new QLabel(menumodifier);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(480, 180, 141, 41));
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_13 = new QLabel(menumodifier);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(470, 120, 161, 41));
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(menumodifier);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(630, 500, 161, 51));
        ajouterquantitedisponible_2 = new QLineEdit(menumodifier);
        ajouterquantitedisponible_2->setObjectName("ajouterquantitedisponible_2");
        ajouterquantitedisponible_2->setGeometry(QRect(650, 240, 131, 41));
        ajouterhumidite_2 = new QLineEdit(menumodifier);
        ajouterhumidite_2->setObjectName("ajouterhumidite_2");
        ajouterhumidite_2->setGeometry(QRect(650, 300, 131, 41));
        ajoutertemperature_2 = new QLineEdit(menumodifier);
        ajoutertemperature_2->setObjectName("ajoutertemperature_2");
        ajoutertemperature_2->setGeometry(QRect(650, 360, 131, 41));
        ajouternom_2 = new QLineEdit(menumodifier);
        ajouternom_2->setObjectName("ajouternom_2");
        ajouternom_2->setGeometry(QRect(650, 120, 131, 41));
        idproduitmodif = new QLineEdit(menumodifier);
        idproduitmodif->setObjectName("idproduitmodif");
        idproduitmodif->setGeometry(QRect(130, 140, 151, 26));
        label_15 = new QLabel(menumodifier);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(0, 140, 121, 20));
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_16 = new QLabel(menumodifier);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(0, 90, 431, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_16->setFont(font1);
        label_16->setFrameShape(QFrame::Shape::Box);
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_2 = new QPushButton(menumodifier);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(320, 140, 111, 29));
        ajouterdatedebut_2 = new QDateEdit(menumodifier);
        ajouterdatedebut_2->setObjectName("ajouterdatedebut_2");
        ajouterdatedebut_2->setGeometry(QRect(650, 430, 131, 41));
        ajouterexpiration_2 = new QDateEdit(menumodifier);
        ajouterexpiration_2->setObjectName("ajouterexpiration_2");
        ajouterexpiration_2->setGeometry(QRect(660, 180, 121, 41));
        formLayoutWidget = new QWidget(menumodifier);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(460, 90, 401, 471));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        formLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(menumodifier, QString());
        menusupprimer = new QWidget();
        menusupprimer->setObjectName("menusupprimer");
        button_supprimer = new QPushButton(menusupprimer);
        button_supprimer->setObjectName("button_supprimer");
        button_supprimer->setGeometry(QRect(420, 120, 161, 51));
        label_14 = new QLabel(menusupprimer);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 120, 161, 41));
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);
        idsupprimer = new QLineEdit(menusupprimer);
        idsupprimer->setObjectName("idsupprimer");
        idsupprimer->setGeometry(QRect(200, 130, 201, 26));
        tabWidget->addTab(menusupprimer, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Produits", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(menuafficher), QCoreApplication::translate("MainWindow", "Liste Produits", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251 Disponible", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Humidit\303\251", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Temp\303\251rature", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Date D\303\251but", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Date Expiration", nullptr));
        bouttonajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(menuajouter), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251 Disponible", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Humidit\303\251", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Date D\303\251but", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Temp\303\251rature", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Date Expiration", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "ID Produit", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Veuillez introduire l'ID du Produit \303\240 modifier", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "confirmer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(menumodifier), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        button_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Id Produit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(menusupprimer), QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
