/*
 * File:   main.cpp
 * Author: demiin
 *
 * Created on November 12, 2013, 4:26 PM
 */

#include <QApplication>
#include "mainForm.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    mainForm* mainFrm = new mainForm();
    mainFrm->show();
    

    return app.exec();
}
