#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    temp.play();
    image.load("D:/qtprojects/ZorkGui/4aTDsgTECUBfIjB0_nhZjelXP9wVmKKaOcbozI1wktQ.jpg");
    scene =new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());
    ui->layoutImage->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_TeleportBtn_clicked()
{
<<<<<<< HEAD
 ui->label->setText(QString::fromStdString((temp.teleport())));
  image.load("D:/qtprojects/ZorkGui/4aTDsgTECUBfIjB0_nhZjelXP9wVmKKaOcbozI1wktQ.jpg");
 scene->addPixmap(image);
 scene->setSceneRect(image.rect());
 ui->layoutImage->setScene(scene);


=======
>>>>>>> bb76a384d6de51eb3d1487073713a2ef8ac58d53
}

void MainWindow::on_NorthBtn_clicked()
{
    ui->label->setText(QString::fromStdString(temp.goRoom("north")));
}

void MainWindow::on_EastBtn_clicked()
{
    ui->label->setText(QString::fromStdString(temp.goRoom("east")));
}

void MainWindow::on_WestBtn_clicked()
{
    ui->label->setText(QString::fromStdString(temp.goRoom("west")));
}

void MainWindow::on_SouthBtn_clicked()
{
    ui->label->setText(QString::fromStdString(temp.goRoom("south")));
}
