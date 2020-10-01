#ifndef GAMEDIMENSIONSDIALOGWINDOW_H
#define GAMEDIMENSIONSDIALOGWINDOW_H

#include <QDialog>

namespace Ui {
class GameDimensionsDialogWindow;
}

class GameDimensionsDialogWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GameDimensionsDialogWindow(QWidget *parent = nullptr);
    ~GameDimensionsDialogWindow();

private:
    Ui::GameDimensionsDialogWindow *ui;
};

#endif // GAMEDIMENSIONSDIALOGWINDOW_H
