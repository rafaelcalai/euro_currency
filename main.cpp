#include <iostream>
#include "include/main_window.h"
#include "include/currency_ratio.h"

int main(int argc, char *argv[]) {
    Main main(argc, argv);
    MainWindow main_window;
    CurrencyRatio currency_ratio;
    main.run(main_window);

    std::cout << "Euro Currency" << std::endl;
    return 0;
}
