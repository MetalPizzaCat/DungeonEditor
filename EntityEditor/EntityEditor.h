#pragma once

#include "EntityEditItem.h"
#include <QtWidgets/QMainWindow>
#include "ui_EntityEditor.h"

class EntityEditor : public QMainWindow
{
    Q_OBJECT

public:
    EntityEditor(QWidget *parent = Q_NULLPTR);

    QString FileName = "";

    QVBoxLayout* scrollAreaLayout;

    QWidget* scrollAreaCentralWidget;

    QVector<EntityEditItem*>Entities = QVector<EntityEditItem*>();

    void RemoveChild(int);

private:
    Ui::EntityEditorClass ui;

private slots:
    void OpenFile();

    void SaveFile();

    void AddNewItem();
};
