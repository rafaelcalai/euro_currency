//
// Created by rcala on 26-07-2023.
//

#include "../include/main_window.h"
#include <iostream>

MainWindow::MainWindow() {
    set_size_request(200,300);
    set_title("Euro Currerncy");
    set_resizable(false);
    set_position(WIN_POS_CENTER);
    set_border_width(10);
    override_background_color(Gdk::RGBA("#A0A0A0"));

    grid.set_row_spacing(5);
    grid.set_column_spacing(5);

    add_data_to_window();
    add(grid);
    show_all_children();
}

void MainWindow::add_data_to_window() {
    Glib::RefPtr<Gdk::Pixbuf> original_image;

    for (int i = currency_size; i > 0; i--)
    {
        std::cout << currencies_acronyms[currency_size-i] << std::endl;
        currency[currency_size-i].set_label("<span foreground='black' font='20'>" +
                                            currencies_acronyms[currency_size-i] +
                                            "</span>");
        currency[currency_size-i].set_property("use-markup",true);
        grid.attach(currency[currency_size-i],0, currency_size-i, 1, 1);

        original_image = Gdk::Pixbuf::create_from_file("data/flags/" + currencies_acronyms[currency_size-i] + ".png");
        flag[currency_size-i].set(original_image->scale_simple(60, 30, Gdk::INTERP_BILINEAR));
        grid.attach(flag[currency_size-i], 1 ,currency_size-i, 1, 1);

        ratio[currency_size-i].set_label("<span foreground='black' font='20'>" +
                                         currencies_ratios[currency_size-i] +
                                         "</span>");
        ratio[currency_size-i].set_property("use-markup",true);
        grid.attach(ratio[currency_size-i],2, currency_size-i, 1, 1);
    }
}
