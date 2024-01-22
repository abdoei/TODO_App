#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QStandardPaths>
#include <QMessageBox>
#include <QTextStream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(width(), height());

    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/tasks.txt");

    if(!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0, "Error", file.errorString());
    }

    QTextStream file_in(&file);

    while(!file_in.atEnd()){
        QString st = file_in.readLine();
        QListWidgetItem* item =  new QListWidgetItem(st, ui->listWidget);
        // QMessageBox::information(0, "Error", st);
        if(st == "") {delete item; continue;}
        ui->listWidget->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
        ui->textbox->setFocus();
    }

    file.close();
}

MainWindow::~MainWindow()
{

    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/tasks.txt");

    if(!file.open(QFile::WriteOnly|QFile::Truncate)){
        QMessageBox::information(0, "Error", file.errorString());
    }



    QTextStream file_out(&file);

    for(int i = 0; i < ui->listWidget->count(); ++i){
        file_out << ui->listWidget->item(i)->text() << '\n';
    }

    file.close();

    delete ui;
}

void MainWindow::on_btn_add_clicked()
{
    if(ui->textbox->text() == "") return;
    QListWidgetItem* item =  new QListWidgetItem(ui->textbox->text(), ui->listWidget);
    ui->listWidget->addItem(item);
    item->setFlags(item->flags() | Qt::ItemIsEditable);
    ui->textbox->clear();
    ui->textbox->setFocus();
    ui->listWidget->scrollToItem(item);
}


void MainWindow::on_btn_rm_clicked()
{
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}


void MainWindow::on_btn_rmall_clicked()
{
    ui->listWidget->clear();
}


void MainWindow::on_textbox_returnPressed()
{
    on_btn_add_clicked();
}

