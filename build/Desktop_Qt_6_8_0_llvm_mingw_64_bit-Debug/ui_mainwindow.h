/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *plotButton;
    QLineEdit *functionInput;
    QDoubleSpinBox *rangeSpin;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QCustomPlot *allGraph;
    QWidget *tab_2;
    QCustomPlot *orgGraph;
    QWidget *tab_3;
    QCustomPlot *derGraph;
    QWidget *tab_4;
    QCustomPlot *intGraph;
    QWidget *tab_5;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menuDerivative_and_Integral_Graph_Maker;
    QMenu *menu_Brilliant_M_L_MT24;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(925, 645);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        plotButton = new QPushButton(centralwidget);
        plotButton->setObjectName("plotButton");
        plotButton->setGeometry(QRect(650, 20, 101, 41));
        functionInput = new QLineEdit(centralwidget);
        functionInput->setObjectName("functionInput");
        functionInput->setGeometry(QRect(120, 20, 521, 41));
        rangeSpin = new QDoubleSpinBox(centralwidget);
        rangeSpin->setObjectName("rangeSpin");
        rangeSpin->setGeometry(QRect(20, 220, 62, 25));
        rangeSpin->setMinimum(10.000000000000000);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 200, 91, 16));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(100, 70, 821, 531));
        tab = new QWidget();
        tab->setObjectName("tab");
        allGraph = new QCustomPlot(tab);
        allGraph->setObjectName("allGraph");
        allGraph->setGeometry(QRect(10, 10, 791, 481));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        orgGraph = new QCustomPlot(tab_2);
        orgGraph->setObjectName("orgGraph");
        orgGraph->setGeometry(QRect(10, 10, 791, 481));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        derGraph = new QCustomPlot(tab_3);
        derGraph->setObjectName("derGraph");
        derGraph->setGeometry(QRect(10, 10, 791, 481));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        intGraph = new QCustomPlot(tab_4);
        intGraph->setObjectName("intGraph");
        intGraph->setGeometry(QRect(10, 10, 791, 481));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        textBrowser = new QTextBrowser(tab_5);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 10, 801, 481));
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 925, 21));
        menuDerivative_and_Integral_Graph_Maker = new QMenu(menubar);
        menuDerivative_and_Integral_Graph_Maker->setObjectName("menuDerivative_and_Integral_Graph_Maker");
        menu_Brilliant_M_L_MT24 = new QMenu(menubar);
        menu_Brilliant_M_L_MT24->setObjectName("menu_Brilliant_M_L_MT24");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDerivative_and_Integral_Graph_Maker->menuAction());
        menubar->addAction(menu_Brilliant_M_L_MT24->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Graph Maker - Brilliant M.L - MT24", nullptr));
        plotButton->setText(QCoreApplication::translate("MainWindow", "Calculate Graph", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Range from 0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "All", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Original Only", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Derivative Only", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Integral Only", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">The step-by-step algoritm for this program is as follows:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                        "<span style=\" font-size:12pt;\">1. The user will input a function using the lineEdit. The user can also insert a range for the projected function graph, the default of which is -10 to 10.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">2. Once the user clicks the button, it will clear all the graph and database for x and y variable first and also re-set the step (distance between values in graph) to 0.1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">3. The function input will then be run through a mathematical expression parser that will recognize the function and turn it from a QString into a function usable with type double (we are using exprtk parser library). The guide on how to properly use the libary is available on the exprtk github page</span></p>\n"
"<p style=\""
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">4. Using the parsed function, calculate the integral and derivative variant of the function. The formula of which are : </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	- derivative (using the central difference formula) = f'(x) = [f(x+h)-f(x-h)]/2h</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	- integral (using the rectangular rule formula) = sum[f(xi) x delta(xi)]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">5. Using a for loop to get a loop with increasing values for h (step) by 0.1 each loop (up until t"
                        "he range is reached). Calculate the y for x in the original function, derivative function, and integral function. (which will then be stored in a double type QVector for each function)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">6. Once we got the values for y on each function, using QCustomPlot, initialize and set-up a graph for the x-y of each function (each graph has the ability to be dragged and zoomed). There will be 4 graphs, each showing the x-y value for original function, derivative function, integral function, and all of them combined (can use tab widget to separate and switch between them)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0"
                        "; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">FOR THE FULL METHODOLOGY, PLEASE REFER TO THE CASE PROJECT REPORT</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://docs.google.com/document/d/1sPrsx3NYeseknPY3uZ4r375B-vhXx1f_2FqHSO0FUag/edit?usp=sharing\"><span style=\" font-size:12pt; text-decoration: underline; color:#007af4;\">Final Project Algorithm 1 Report</span></a></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Pseudo Code", nullptr));
        menuDerivative_and_Integral_Graph_Maker->setTitle(QCoreApplication::translate("MainWindow", "Derivative and Integral Graph Maker", nullptr));
        menu_Brilliant_M_L_MT24->setTitle(QCoreApplication::translate("MainWindow", "- Brilliant M. L. - MT24", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
