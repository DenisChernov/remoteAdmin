/* 
 * File:   mainForm.h
 * Author: demiin
 *
 * Created on November 12, 2013, 4:35 PM
 */

#ifndef _MAINFORM_H
#define	_MAINFORM_H

#include "ui_mainForm.h"
#include <iostream>
#include <string>
#include <QScrollArea>
#include <QLabel>

using namespace std;


class mainForm : public QMainWindow {
    Q_OBJECT
public:
    mainForm();
    virtual ~mainForm();
private:
    Ui::mainForm mainFrm;
    
    QLabel* lblMap;
    void setupFrm();
};

#endif	/* _MAINFORM_H */
