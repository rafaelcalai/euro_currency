//
// Created by rcala on 26-07-2023.
//

#ifndef EURO_CURRENCY_MAIN_WINDOW_H
#define EURO_CURRENCY_MAIN_WINDOW_H

#include "gtkmm-3.0/gtkmm.h"
using namespace Gtk;


class MainWindow : public Window
{
    private:
        static const int currency_size = 4;
        const char *currencies_acronyms[currency_size] = {"EUR", "BRL", "GDB", "USD"};
        Grid grid;
        Label curr_EUR, curr_USD, curr_BRL, curr_GDB;
        Label ratio_EUR, ratio_USD, ratio_BRL, ratio_GDB;
        Image flag_EUR, flag_USD, flag_BRL, flag_GDB;

    public:
        MainWindow();

};


#endif //EURO_CURRENCY_MAIN_WINDOW_H
