#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QFileDialog>
#include<QMessageBox>
#include<QLabel>
#include<QTextStream>
#include<QFileDialog>
#include<QTextCharFormat>
#include<QFontDialog>
#include<QtPrintSupport/QPrintDialog>
#include<QtPrintSupport/QPrinter>
#include<QColor>
#include<QFont>
#include<QColorDialog>
#include<QFontInfo>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    file_path="";
    ui->textEdit->setText("");
}

void MainWindow::on_actionOpen_triggered()
{
    QString file_name=QFileDialog::getOpenFileName(this,"open the file");
    QFile file(file_name);
    file_path=file_name;
    if(!file.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::warning(this,"..","file not open");
        return;
    }
    QTextStream in(&file);
    QString text=in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_actionSave_triggered()
{
    QFile file(file_path);
    if(!file.open(QFile::WriteOnly|QFile::Text))
    {
        QMessageBox::warning(this,"..","file not open");
        return;
    }
    QTextStream out(&file);
    QString text=ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}


void MainWindow::on_actionSave_as_triggered()
{
    QString file_name=QFileDialog::getSaveFileName(this,"open the file");
    QFile file(file_name);
    file_path=file_name;
    if(!file.open(QFile::WriteOnly|QFile::Text))
    {
        QMessageBox::warning(this,"..","file not open");
        return;
    }
    QTextStream out(&file);
    QString text=ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}

void MainWindow::on_actionClose_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionPrint_triggered()
{

}

void MainWindow::on_actionBold_triggered()
{

    ui->textEdit->setFontWeight(QFont::Bold);

}

void MainWindow::on_actionselect_Font_triggered()
{
    bool fontSelected;
    QFont font=QFontDialog::getFont(&fontSelected,this);
    if(fontSelected)
    {
        ui->textEdit->setFont(font);
    }
}

void MainWindow::on_actionItalic_triggered()
{
    ui->textEdit->setFontItalic(true);
}

void MainWindow::on_actionUnderline_triggered()
{
    ui->textEdit->setFontUnderline(true);
}

void MainWindow::on_actionFont_color_triggered()
{
    QColor color=QColorDialog::getColor(Qt::white,this,"Choose a color");
        if(color.isValid())
        {
            ui->textEdit->setTextColor(color);
        }
}

void MainWindow::on_actionFont_bgcolor_triggered()
{
    QColor color=QColorDialog::getColor(Qt::white,this,"Choose the background color");
        if(color.isValid())
        {
            ui->textEdit->setTextBackgroundColor(color);
        }
}

void MainWindow::on_actionAboutqt_triggered()
{
    QMessageBox::information(this,"ABOUT QT","Qt is the faster, smarter way to create innovative devices, modern UIs & applications for multiple screens. Cross-platform software development at its best.");
}

void MainWindow::on_actionzoom_in_triggered()
{
    ui->textEdit->zoomIn();
}

void MainWindow::on_actionzoom_out_triggered()
{
    ui->textEdit->zoomOut();
}

void MainWindow::on_actionHelp_triggered()
{
   QMessageBox::information(this,"HELP","wiki.qt.io/Basic_Qt_Programming_Tutorial");
}
