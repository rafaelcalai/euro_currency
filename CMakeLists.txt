cmake_minimum_required(VERSION 3.25)
project(euro_currency)

find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)

set(CMAKE_CXX_STANDARD 17)

file(COPY data DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")

link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

add_executable(euro_currency
        main.cpp
        source/main_window.cpp
        include/main_window.h source/currency_ratio.cpp include/currency_ratio.h)



target_link_libraries(${PROJECT_NAME} ${GTKMM_LIBRARIES} -ltinyxml -lcurl)
