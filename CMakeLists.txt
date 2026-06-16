cmake_minimum_required(VERSION 3.19)
project(qt-practice LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(qt-practice
    WIN32 MACOSX_BUNDLE
    main.cpp
    main.cpp
    main.h
    main.ui
    sender.h sender.cpp
    receiver.h receiver.cpp
)

target_link_libraries(qt-practice
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS qt-practice
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET qt-practice
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
