#ifndef SHERTEXT_H
#define SHERTEXT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class shertext;
}
QT_END_NAMESPACE

class shertext : public QMainWindow
{
    Q_OBJECT

public:
    shertext(QWidget *parent = nullptr);
    ~shertext();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionAbout_SherText_triggered();

    void on_actionSave_as_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionPaste_triggered();

    void on_actionLicense_triggered();

    void on_actionSherText_Github_triggered();

    void on_actionCristal_icons_Github_triggered();

    void on_actionQuit_triggered();

    void on_actionSettings_triggered();

private:
    Ui::shertext *ui;
    QString FilePath;

};
#endif // SHERTEXT_H
