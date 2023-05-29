#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <fstream>
#include "astro.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void movimiento();

private slots:
    void on_primer_clicked();
    void on_segundo_clicked();
    void on_terminar_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *escena;

    QList <astro*> astros;
    QTimer *actualizar;
    ofstream texto;

    bool simulando;

};
#endif // MAINWINDOW_H
