#include <iostream>
#include <windows.h>
#include "Headers/Expert.h"

using namespace std;

/**********************Prototype func****************************/
void show_start(); // show main text
/****************************************************************/

/*
 * Start expert system
 */
int main () {
    system("chcp 65001"); // Translate on Russian in console

    show_start();
    Expert expert;
    expert.askAQuestion();

    return 0;
}


/*****************************Func********************************/
void show_start() {
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "|    Вас приветствует экспертная система технического обслуживания ПК     |" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "- Для выявления проблемы нужно будет ответить на мои вопросы." << endl;
    cout << "- Либо Yes" << endl;
    cout << "- Либо No" << endl;
}
/****************************************************************/



