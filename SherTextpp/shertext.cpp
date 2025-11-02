#include "shertext.h" //Szerwigi1410 was there
#include "./ui_shertext.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

shertext::shertext(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::shertext)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit); // Centering the widget
}

shertext::~shertext()
{
    delete ui;
}

void shertext::on_actionNew_triggered() //======NEW
{
    FilePath = ""; //Clearing the file path
    ui->textEdit->setText("");
}


void shertext::on_actionOpen_triggered() //======OPEN
{
    QString FileName = QFileDialog::getOpenFileName(this, "Open your file");
    QFile file(FileName);
    FilePath = FileName;

    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this,"..","File couldn't open"); //Error message
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void shertext::on_actionSave_triggered() //======SAVE
{

    QFile file(FilePath);

    if(!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this,"..","File couldn't open"); //Error message
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void shertext::on_actionAbout_SherText_triggered()
{
    QString aboutSherTextpp;
    aboutSherTextpp = "SherText++ made by Szerwigi1410\n";
    aboutSherTextpp += "Written in C++ and Qt on FreeBSD 14.3!\n\n";
    aboutSherTextpp += "See \"License\" to read about the license";
    QMessageBox::about(this, "About SherText++" ,aboutSherTextpp);
}


void shertext::on_actionSave_as_triggered() //======SAVE AS
{
    QString FileName = QFileDialog::getSaveFileName(this, "Where?");
    QFile file(FileName);
    FilePath = FileName;

    if(!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this,"..","File couldn't open"); //Error message
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void shertext::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void shertext::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void shertext::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void shertext::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}


void shertext::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void shertext::on_actionLicense_triggered()
{
    QString SherTextLicense;
    SherTextLicense = "BSD 2-Clause License";
    SherTextLicense += "\n\n";
    SherTextLicense += "Copyright (c) 2025, Szerwigi1410";
    SherTextLicense += "\n\n";
    SherTextLicense += "Redistribution and use in source and binary forms, with or without";
    SherTextLicense += "modification, are permitted provided that the following conditions are met:";
    SherTextLicense += "\n\n";
    SherTextLicense += "1. Redistributions of source code must retain the above copyright notice, this\nlist of conditions and the following disclaimer.";
    SherTextLicense += "\n\n";
    SherTextLicense += "2. Redistributions in binary form must reproduce the above copyright notice,\nthis list of conditions and the following disclaimer in the documentation\nand/or other materials provided with the distribution.\n\n";
    SherTextLicense += "THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\"\nAND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE\nIMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE\nDISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE\nFOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL\nDAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR\nSERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER\nCAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,\nOR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE\nOF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.";

    QMessageBox::about(this, "License", SherTextLicense);
}


void shertext::on_actionSherText_Github_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/Szerwigi1410/SherTextpp"));
}


void shertext::on_actionCristal_icons_Github_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/dangvd/crystal-remix-icon-theme"));
}


void shertext::on_actionQuit_triggered()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Quitting", "Are you sure?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        qDebug() << "Yes was clicked";
        QApplication::quit();
    } else {
        qDebug() << "Yes was *not* clicked";
    }
}


void shertext::on_actionSettings_triggered()
{
    QMessageBox::information(this, "Settings", "Comming soon!");
}

