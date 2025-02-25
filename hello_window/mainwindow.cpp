#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myopenglptr = new MyOpenGLWidget(this);
    setCentralWidget(myopenglptr);
    myopenglptr->update();  // 手动触发重绘

}

MainWindow::~MainWindow()
{
    delete ui;
}
