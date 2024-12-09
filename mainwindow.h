#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include <cmath>
#include <functional>
#include <QString>
#include <QVector>
#include <qdebug.h>
#include "exprtk.hpp"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void getInput(), calcGraph(double xMax, double xMin), init(), initGraph();
    QVector<double> x, y, yInt, yDer;
    double xMin, xMax, step, integral, derivative;
    QString input;


private slots:
    void on_plotButton_clicked();

private:
    Ui::MainWindow *ui;
    std::function<double(double)> parseFunction(const QString &func);
};
#endif // MAINWINDOW_H
