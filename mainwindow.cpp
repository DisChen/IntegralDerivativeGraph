#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}

std::function<double(double)> MainWindow::parseFunction(const QString &func)
{
    return [func](double x) -> double {
        typedef exprtk::expression<double> expression_t;    // Expression type
        typedef exprtk::parser<double> parser_t;             // Parser type

        // Create the expression object
        expression_t expr;

        // Create the symbol table
        exprtk::symbol_table<double> symbol_table;

        // Add variable "x" to the symbol table
        symbol_table.add_variable("x", x);

        // Register the symbol table
        expr.register_symbol_table(symbol_table);

        // Create the parser and compile the expression
        parser_t parser;
        if (parser.compile(func.toStdString(), expr)) {
            return expr.value();  // Return the evaluated result
        } else {
            qDebug() << "Error parsing expression";
            return 0.0;  // Return 0 in case of error
        }
    };
}

void MainWindow::getInput()
{
    xMax = ui->rangeSpin->value(); //get Max 'x' value from doubleSpin
    xMin = 0 - xMax; //Min 'x' value is just the negative value of xMax
    input = ui->functionInput->text(); //get function from lineEdit
}

void MainWindow::init()
{
    //clear all QVectors and set values to default
    x.clear();
    y.clear();
    yDer.clear();
    yInt.clear();
    step = 0.1, integral = 0;
}

void MainWindow::calcGraph(double xMax, double xMin)
{
    auto f = parseFunction(input); //parse the function with the exprtk parser library

    for (double xi = xMin; xi <= xMax; xi += step)
    {
        //calculate original graph
        x.push_back(xi);        //assign x values (register x from min to max and increase by 0.1 each)
        y.push_back(f(xi));     //get y value, which is the x value run through the function
        //qDebug() << x << y;


        //calculate derivative graph
        derivative = (f(xi + step) - f(xi - step)) / (2*step); //derive the function and get the derivated value
        yDer.push_back(derivative); //assign derivated y value


        //calculate integral graph
        integral += f(xi) * step;   //get the integral value from the function
        yInt.push_back(integral);   //assign y value that has been integral-ed
    }
}

void MainWindow::initGraph()
{
    ui->allGraph->clearGraphs();    //clear previous graphs


    //create the original function graph
        //in all tab
        ui->allGraph->addGraph();
        ui->allGraph->graph(0)->setData(x, y);
        ui->allGraph->graph(0)->setPen(QPen(Qt::blue));
        ui->allGraph->graph(0)->setName("f(x)");

        //in original only tab
        ui->orgGraph->addGraph();
        ui->orgGraph->graph(0)->setData(x, y);
        ui->orgGraph->graph(0)->setPen(QPen(Qt::blue));
        ui->orgGraph->graph(0)->setName("f(x)");

    //create the derivative function graph
        //in all tab
        ui->allGraph->addGraph();
        ui->allGraph->graph(1)->setData(x, yDer);
        ui->allGraph->graph(1)->setPen(QPen(Qt::red));
        ui->allGraph->graph(1)->setName("f'(x)");

        //in derivative only tab
        ui->derGraph->addGraph();
        ui->derGraph->graph(0)->setData(x, yDer);
        ui->derGraph->graph(0)->setPen(QPen(Qt::red));
        ui->derGraph->graph(0)->setName("f'(x)");

    //create the integral function graph
        //in all tab
        ui->allGraph->addGraph();
        ui->allGraph->graph(2)->setData(x, yInt);
        ui->allGraph->graph(2)->setPen(QPen(Qt::green));
        ui->allGraph->graph(2)->setName("∫f(x)dx");

        //in integral only tab
        ui->intGraph->addGraph();
        ui->intGraph->graph(0)->setData(x, yInt);
        ui->intGraph->graph(0)->setPen(QPen(Qt::green));
        ui->intGraph->graph(0)->setName("∫f(x)dx");

    //misc. adjustments to graphs
        //enable legend for graph
        ui->allGraph->legend->setVisible(true);

        //rescale the y and x axes to fit the whole graph
        ui->allGraph->rescaleAxes();
        ui->orgGraph->rescaleAxes();
        ui->derGraph->rescaleAxes();
        ui->intGraph->rescaleAxes();

        //add feature such ass drag, zoom, and graph selection
        ui->allGraph->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
        ui->orgGraph->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
        ui->derGraph->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
        ui->intGraph->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    //replot the graph once ready
    ui->allGraph->replot();
    ui->orgGraph->replot();
    ui->derGraph->replot();
    ui->intGraph->replot();
}


void MainWindow::on_plotButton_clicked()
{
    getInput();
    init();
    calcGraph(xMax, xMin);
    initGraph();
}

