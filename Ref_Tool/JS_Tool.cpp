#include "JS_Tool"
#include "ui_JS_Tool.h"

JS_Tool::JS_Tool(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::JS_Tool)
{
    ui->setupUi(this);
}

JS_Tool::~JS_Tool()
{
    delete ui;
}

