/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionClose;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionPrint;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionFont_color;
    QAction *actionFont_bgcolor;
    QAction *actionAboutqt;
    QAction *actionselect_Font;
    QAction *actionzoom_in;
    QAction *actionzoom_out;
    QAction *actionHelp;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFont;
    QMenu *menuAbout;
    QMenu *menuView;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(739, 323);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Desktop/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Desktop/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Desktop/images/save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Desktop/images/save as.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Desktop/images/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon4);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Desktop/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Desktop/images/copy.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        QFont font;
        font.setPointSize(11);
        actionCopy->setFont(font);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Desktop/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon7);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Desktop/images/undo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon8);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Desktop/images/redo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon9);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Desktop/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon10);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Desktop/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon11);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Desktop/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon12);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Desktop/images/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon13);
        actionFont_color = new QAction(MainWindow);
        actionFont_color->setObjectName(QString::fromUtf8("actionFont_color"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Desktop/images/font color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont_color->setIcon(icon14);
        actionFont_bgcolor = new QAction(MainWindow);
        actionFont_bgcolor->setObjectName(QString::fromUtf8("actionFont_bgcolor"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Desktop/images/font bgcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont_bgcolor->setIcon(icon15);
        actionAboutqt = new QAction(MainWindow);
        actionAboutqt->setObjectName(QString::fromUtf8("actionAboutqt"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Desktop/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutqt->setIcon(icon16);
        actionselect_Font = new QAction(MainWindow);
        actionselect_Font->setObjectName(QString::fromUtf8("actionselect_Font"));
        actionzoom_in = new QAction(MainWindow);
        actionzoom_in->setObjectName(QString::fromUtf8("actionzoom_in"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Desktop/images/zoom in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionzoom_in->setIcon(icon17);
        actionzoom_out = new QAction(MainWindow);
        actionzoom_out->setObjectName(QString::fromUtf8("actionzoom_out"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Desktop/images/zoom out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionzoom_out->setIcon(icon18);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Desktop/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon19);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 10, 751, 261));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 739, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuFont = new QMenu(menubar);
        menuFont->setObjectName(QString::fromUtf8("menuFont"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFont->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menubar->addAction(menuView->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuFont->addAction(actionBold);
        menuFont->addAction(actionItalic);
        menuFont->addAction(actionUnderline);
        menuFont->addAction(actionFont_color);
        menuFont->addAction(actionFont_bgcolor);
        menuFont->addAction(actionselect_Font);
        menuAbout->addAction(actionAboutqt);
        menuAbout->addAction(actionHelp);
        menuView->addAction(actionzoom_in);
        menuView->addAction(actionzoom_out);
        toolBar_3->addAction(actionNew);
        toolBar_3->addAction(actionOpen);
        toolBar_3->addAction(actionSave);
        toolBar_3->addAction(actionSave_as);
        toolBar_3->addAction(actionClose);
        toolBar_3->addAction(actionCut);
        toolBar_3->addAction(actionCopy);
        toolBar_3->addAction(actionPaste);
        toolBar_3->addAction(actionUndo);
        toolBar_3->addAction(actionRedo);
        toolBar_3->addAction(actionPrint);
        toolBar_3->addAction(actionBold);
        toolBar_3->addAction(actionItalic);
        toolBar_3->addAction(actionUnderline);
        toolBar_3->addAction(actionFont_color);
        toolBar_3->addAction(actionFont_bgcolor);
        toolBar_3->addAction(actionHelp);
        toolBar_3->addAction(actionAboutqt);
        toolBar_3->addAction(actionselect_Font);
        toolBar_3->addAction(actionzoom_in);
        toolBar_3->addAction(actionzoom_out);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        actionItalic->setText(QCoreApplication::translate("MainWindow", "Italic", nullptr));
        actionUnderline->setText(QCoreApplication::translate("MainWindow", "Underline", nullptr));
        actionFont_color->setText(QCoreApplication::translate("MainWindow", "Font color", nullptr));
        actionFont_bgcolor->setText(QCoreApplication::translate("MainWindow", "Font bgcolor", nullptr));
        actionAboutqt->setText(QCoreApplication::translate("MainWindow", "Aboutqt", nullptr));
        actionselect_Font->setText(QCoreApplication::translate("MainWindow", "select Font", nullptr));
        actionzoom_in->setText(QCoreApplication::translate("MainWindow", "zoom in", nullptr));
        actionzoom_out->setText(QCoreApplication::translate("MainWindow", "zoom out", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuFont->setTitle(QCoreApplication::translate("MainWindow", "Font", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
