#include <iostream>
#include "include/main_window.h"
int main(int argc, char *argv[]) {
    Main main(argc, argv);
    MainWindow main_window;
    main.run(main_window);

    std::cout << "Euro Currency" << std::endl;
    return 0;
}
