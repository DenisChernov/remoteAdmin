/*
 * File:   mainForm.cpp
 * Author: demiin
 *
 * Created on November 12, 2013, 4:35 PM
 */

#include "mainForm.h"

mainForm::mainForm() {
    mainFrm.setupUi(this);
    
    setupFrm();
}

mainForm::~mainForm() {
}

void mainForm::setupFrm()
{
     lblMap = new QLabel;
     lblMap->setBackgroundRole(QPalette::Base);
//     lblMap->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
//     lblMap->setScaledContents(true);
     
     lblMap->setPixmap(QPixmap::fromImage(QImage("maps/fil.01.png")));
     mainFrm.scrollArea->setWidget(lblMap);
}
