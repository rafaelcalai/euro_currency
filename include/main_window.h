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
        const std::string currencies_acronyms[currency_size] = {"EUR", "BRL", "GBP", "USD"};
        const std::string currencies_ratios[currency_size] = {"1.00", "5.31", "0.85", "1.12"};
        Grid grid;
        Label currency[4];
        Label ratio[4];
        Image flag[4];

        void add_data_to_window();

    public:
        MainWindow();

};


#endif //EURO_CURRENCY_MAIN_WINDOW_H
