#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena = new QGraphicsScene(-500, -300, 1000, 600);
    ui->graphicsView->setScene(escena);

    escena->setBackgroundBrush(Qt::black);

   actualizar = new QTimer;
   connect(actualizar,SIGNAL(timeout()), this, SLOT(movimiento()));


}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::movimiento()
{

    QList<astro*>:: iterator it;
    QList<astro*>:: iterator i;

    int b = 0;

    while (b < 15){

        for ( it = astros.begin(); it != astros.end(); it++){

            for ( i = astros.begin(); i != astros.end(); i ++){

                if (i != it)
                    (*it)->aceleracion((*i)->masa,(*i)->posx,(*i)->posy);

            }


        }

        b++;

    }
}

void MainWindow::on_primer_clicked()
{
    actualizar->start(30);
    astros.push_back(new astro (0,-7000,70,120,2,0,1));
    escena->addItem(astros.back());
    astros.push_back(new astro (0,0,70000,300,0,0,4));
    escena->addItem(astros.back());
    astros.push_back(new astro (4000,5000,25,100,-1.6,1.2,3));
    escena->addItem(astros.back());
}

void MainWindow::on_segundo_clicked()
{
    actualizar->start(30);
    astros.push_back(new astro(0,0,50000,200,0,0,4));
    escena->addItem(astros.back());
    astros.push_back(new astro (-5000,0,70,70,0,-2,2));
    escena->addItem(astros.back());
    astros.push_back(new astro (5000,0,70,70,0,2,1));
    escena->addItem(astros.back());
    astros.push_back(new astro (0,-5000,70,70,2,0,3));
    escena->addItem(astros.back());
    astros.push_back(new astro (0,5000,70,70,-2,0,4));
    escena->addItem(astros.back());

}


