#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena = new QGraphicsScene(-500, -300, 1000, 600);
    ui->graphicsView->setScene(escena);

   astros.push_back(new astro(0,0,50000,200,0,0,1));
   escena->addItem(astros.back());

   astros.push_back(new astro (-5000,0,70,70,0,-2,2));
   escena->addItem(astros.back());

   astros.push_back(new astro (5000,0,70,70,0,2,3));
   escena->addItem(astros.back());
   astros.push_back(new astro (0,-5000,70,70,2,0,2));
   escena->addItem(astros.back());
   astros.push_back(new astro (0,5000,70,70,-2,0,3));
   escena->addItem(astros.back());


}

MainWindow::~MainWindow()
{
    delete ui;
}
