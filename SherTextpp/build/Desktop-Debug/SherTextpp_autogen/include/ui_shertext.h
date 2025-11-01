/********************************************************************************
** Form generated from reading UI file 'shertext.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHERTEXT_H
#define UI_SHERTEXT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shertext
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionAbout_SherText;
    QAction *actionSave_as;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionPaste;
    QAction *actionLicense;
    QAction *actionSherText_Github;
    QAction *actionCristal_icons_Github;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *shertext)
    {
        if (shertext->objectName().isEmpty())
            shertext->setObjectName("shertext");
        shertext->resize(814, 649);
        actionNew = new QAction(shertext);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/icons/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(shertext);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/icons/open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(shertext);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/icons/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon2);
        actionAbout_SherText = new QAction(shertext);
        actionAbout_SherText->setObjectName("actionAbout_SherText");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/icons/about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbout_SherText->setIcon(icon3);
        actionSave_as = new QAction(shertext);
        actionSave_as->setObjectName("actionSave_as");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/icons/save-as.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave_as->setIcon(icon4);
        actionCut = new QAction(shertext);
        actionCut->setObjectName("actionCut");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/icons/cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon5);
        actionCopy = new QAction(shertext);
        actionCopy->setObjectName("actionCopy");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/icons/copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon6);
        actionUndo = new QAction(shertext);
        actionUndo->setObjectName("actionUndo");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rec/icons/undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(shertext);
        actionRedo->setObjectName("actionRedo");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/icons/redo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRedo->setIcon(icon8);
        actionPaste = new QAction(shertext);
        actionPaste->setObjectName("actionPaste");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/rec/icons/paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon9);
        actionLicense = new QAction(shertext);
        actionLicense->setObjectName("actionLicense");
        actionSherText_Github = new QAction(shertext);
        actionSherText_Github->setObjectName("actionSherText_Github");
        actionCristal_icons_Github = new QAction(shertext);
        actionCristal_icons_Github->setObjectName("actionCristal_icons_Github");
        centralwidget = new QWidget(shertext);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        shertext->setCentralWidget(centralwidget);
        menubar = new QMenuBar(shertext);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 814, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        shertext->setMenuBar(menubar);
        statusbar = new QStatusBar(shertext);
        statusbar->setObjectName("statusbar");
        shertext->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuHelp->addAction(actionAbout_SherText);
        menuHelp->addAction(actionLicense);
        menuHelp->addSeparator();
        menuHelp->addAction(actionSherText_Github);
        menuHelp->addAction(actionCristal_icons_Github);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);

        retranslateUi(shertext);

        QMetaObject::connectSlotsByName(shertext);
    } // setupUi

    void retranslateUi(QMainWindow *shertext)
    {
        shertext->setWindowTitle(QCoreApplication::translate("shertext", "shertext", nullptr));
        actionNew->setText(QCoreApplication::translate("shertext", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("shertext", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("shertext", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("shertext", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("shertext", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("shertext", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_SherText->setText(QCoreApplication::translate("shertext", "About SherText++", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout_SherText->setShortcut(QCoreApplication::translate("shertext", "Meta+Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("shertext", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("shertext", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("shertext", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("shertext", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("shertext", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("shertext", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("shertext", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("shertext", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("shertext", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("shertext", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("shertext", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("shertext", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLicense->setText(QCoreApplication::translate("shertext", "License", nullptr));
        actionSherText_Github->setText(QCoreApplication::translate("shertext", "SherText++ Github", nullptr));
        actionCristal_icons_Github->setText(QCoreApplication::translate("shertext", "Crystal icons Github", nullptr));
        menuFile->setTitle(QCoreApplication::translate("shertext", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("shertext", "Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("shertext", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shertext: public Ui_shertext {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHERTEXT_H
