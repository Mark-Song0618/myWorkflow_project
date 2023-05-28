# include output dir, to include the generated files is there are
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# set qt path
set(CMAKE_PREFIX_PATH $ENV{QT_DIRS})
message(STATUS env:$ENV{QT_DIRS})

# find packages
find_package(Qt6 REQUIRED COMPONENTS Core Widgets Gui)

# open Qt compiler
set(CMAKE_AUTOMOC ON)	# for meta-obj
set(CMAKE_AUTORCC ON) 	# for resource
set(CMAKE_AUTOUIC ON)	# for ui

add_library(appGui 
    STATIC
    MainWin.h
    MainWin.cpp
)

target_link_libraries(
    appGui
	PUBLIC
	Qt6::Core
	Qt6::Gui
	Qt6::Widgets)

