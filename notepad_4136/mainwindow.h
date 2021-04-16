#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionClose_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionPrint_triggered();

    void on_actionBold_triggered();

    void on_actionselect_Font_triggered();

    void on_actionItalic_triggered();

    void on_actionUnderline_triggered();

    void on_actionFont_color_triggered();

    void on_actionFont_bgcolor_triggered();

    void on_actionAboutqt_triggered();

    void on_actionzoom_in_triggered();

    void on_actionzoom_out_triggered();

    void on_actionHelp_triggered();

private:
    Ui::MainWindow *ui;
    QString file_path;
};
#endif // MAINWINDOW_H
