//
// Created by rcala on 26-07-2023.
//

#include "../include/main_window.h"
#include <iostream>

MainWindow::MainWindow() {
    set_size_request(400,500);
    set_title("Euro Currerncy");
    set_resizable(false);
    set_position(WIN_POS_CENTER);
    set_border_width(10);
    override_background_color(Gdk::RGBA("#A0A0A0"));

    grid.set_row_spacing(5);
    grid.set_column_spacing(5);

    for (int i = currency_size; i > 0; i--)
    {
        std::cout << currencies_acronyms[currency_size-i] << std::endl;
    }

    curr_EUR.set_label("EUR");
    curr_EUR.set_property("use-markup",true);
    curr_EUR.set_label("<span foreground='black' font='20'>EUR</span>");
    grid.attach(curr_EUR,0 ,1 ,1 ,1);
    add(grid);
    show_all_children();
}
