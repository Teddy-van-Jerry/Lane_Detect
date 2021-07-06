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


void MainWindow::on_action_E_triggered()
{
    close();
}

void MainWindow::on_action_O_triggered()
{
    QString Open_Location = QFileDialog::getOpenFileName(this,
                                                         tr("打开文件"),
                                                         QDir::currentPath());
    qDebug() << Open_Location;
}

void MainWindow::on_action_Teddy_van_Jerry_triggered()
{
    QDesktopServices::openUrl(QUrl("https://teddy-van-jerry.org"));
}

void MainWindow::on_pushButton_2_clicked()
{
    on_action_E_triggered();
}

void MainWindow::on_label_linkActivated(const QString &link)
{
    on_action_O_triggered();
}
