#include "game_dimensions_dialog_window.h"
#include "ui_game_dimensions_dialog_window.h"

GameDimensionsDialogWindow::GameDimensionsDialogWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameDimensionsDialogWindow)
{
    ui->setupUi(this);
}

GameDimensionsDialogWindow::~GameDimensionsDialogWindow()
{
    delete ui;
}
