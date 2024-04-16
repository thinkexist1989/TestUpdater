# Copyright (c) 2024 'Yang Luo, luoyang@sia.cn'
# 
# This software is released under the MIT License.
# https://opensource.org/licenses/MIT

cmake_minimum_required(VERSION 3.10)

project(QSimpleUpdater VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-DQSU_SHARED -DQSU_INCLUDE_MOC=1)

include_directories(include)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Gui Widgets Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Gui Widgets Network)

set(PROJECT_SOURCES
        src/Downloader.h
        src/Downloader.cpp
        src/Downloader.ui
        src/Updater.h
        src/Updater.cpp
        include/QSimpleUpdater.h
        src/QSimpleUpdater.cpp

        etc/resources/qsimpleupdater.qrc
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_library(QSimpleUpdater SHARED
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES} )
    # add_library(QSimpleUpdater SHARED
    #     ${PROJECT_SOURCES}
    # )
else()
    if(ANDROID)
        add_library(QSimpleUpdater SHARED
            ${PROJECT_SOURCES}
        )
    else()
    add_library(QSimpleUpdater
            ${PROJECT_SOURCES}
        )
    endif()
endif()


target_link_libraries(QSimpleUpdater 
    PUBLIC 
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Gui
    Qt${QT_VERSION_MAJOR}::Network
    )

target_include_directories(QSimpleUpdater PUBLIC include)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.QSimpleUpdater)
endif()
set_target_properties(QSimpleUpdater PROPERTIES
  ${BUNDLE_ID_OPTION}
  MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
  MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
  MACOSX_BUNDLE TRUE
  WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS QSimpleUpdater
  BUNDLE DESTINATION .
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
  qt_finalize_target(QSimpleUpdater)
endif()
