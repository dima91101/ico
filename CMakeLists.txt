cmake_minimum_required(VERSION 3.5)

SET(PROJECT_NAME IcoWidget)
#########################################################################
OPTION(BUILD_WITH_SANITIZER "Build with address sanitizer" OFF)
OPTION(BUILD_WITH_PRINCE "Build with prince" OFF)
#########################################################################
PROJECT(${PROJECT_NAME} LANGUAGES CXX )

SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)
#########################################################################
#SET (COMMON_DIR ${PROJECT_SOURCE_DIR}/../common)

#SET (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${COMMON_DIR}/cmake/Modules/")
#INCLUDE ( GetVersion )
#GetVersion(VERSION_MAJOR VERSION_MINOR VERSION_PATCH)

SET(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTORCC ON)
SET(CMAKE_AUTOUIC ON)
SET(CMAKE_INCLUDE_CURRENT_DIR "YES")
SET(CMAKE_VERBOSE_MAKEFILE on)
#########################################################################
FIND_PACKAGE(Qt5 COMPONENTS Core Gui Widgets Network REQUIRED)

FIND_PACKAGE(Qt5LinguistTools)

IF ( NOT Qt5_LRELEASE_EXECUTABLE )
MESSAGE(STATUS "Qt5LinguistTools not found. Please install qttools5-dev and qttools5-dev-tools for it" )
ENDIF()

#########################################################################
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g0 -ggdb -Wall")

IF (BUILD_WITH_SANITIZER)
    MESSAGE(STATUS "Sanitizer ENABLED" )
    SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
    SET(CMAKE_LINKER_FLAGS"${CMAKE_LINKER_FLAGS} -fno-omit-frame-pointer -fsanitize=address")
ENDIF()
#########################################################################

INCLUDE_DIRECTORIES(
    ${PROJECT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_BINARY_DIR}
    )

#if (BUILD_WITH_PRINCE)
#    message(STATUS "Build with prince")
#    include_directories(${PROJECT_SOURCE_DIR}/../common/include)
#    add_definitions(-DUSE_PRINCE)
#endif(BUILD_WITH_PRINCE)

SET (SOURCES_FILES
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    ${PROJECT_SOURCE_DIR}/src/mainwindow.cpp
    ${PROJECT_SOURCE_DIR}/src/icowidget.cpp
    )

SET (HEADERS_FILES
    ${PROJECT_SOURCE_DIR}/include/mainwindow.h
    ${PROJECT_SOURCE_DIR}/include/icowidget.h
    )

#SET(FORMS_FILES
#    forms/mainwindow.ui
#    )
SET( FORMS_FILES
    ${PROJECT_SOURCE_DIR}/forms/mainwindow.ui
#    ${PROJECT_SOURCE_DIR}/forms/changecolor.ui
    )


#########################################################################
SET(CMAKE_AUTOUIC_SEARCH_PATHS ${PROJECT_SOURCE_DIR}/forms)

QT5_WRAP_CPP (
    HEADERS_MOC
    ${HEADERS_FILES}
    )

#########################################################################
#########################################################################

ADD_EXECUTABLE(${PROJECT_NAME}
    ${SOURCES_FILES}
    ${HEADERS_MOC}
    ${RESOURCES_FILES}
    ${UI_HEADERS})

TARGET_LINK_LIBRARIES(${PROJECT_NAME}
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::Network)

#########################################################################
#########################################################################
#########################################################################
#########################################################################
#function(generate_translations CUSTOM_TARGET TS_DIR TS_FILES SRC_DIR)
#    set(UPADTE_TS_TARGET_NAME ${CUSTOM_TARGET}_ts)
#    set(UPADTE_QM_TARGET_NAME ${CUSTOM_TARGET}_qm)

#    add_custom_target(${UPADTE_TS_TARGET_NAME}
#        COMMAND ${Qt5_LUPDATE_EXECUTABLE} -recursive ${SRC_DIR} -ts ${TS_FILES}
#        WORKING_DIRECTORY ${TS_DIR})

#    add_custom_target(${UPADTE_QM_TARGET_NAME}
#        COMMAND ${Qt5_LRELEASE_EXECUTABLE} ${TS_FILES}
#        WORKING_DIRECTORY ${TS_DIR})

#    add_dependencies(${UPADTE_QM_TARGET_NAME} ${UPADTE_TS_TARGET_NAME} )
#    add_dependencies(${CUSTOM_TARGET} ${UPADTE_QM_TARGET_NAME})
#endfunction()

#set(MY_TS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/resources)
#FILE(GLOB MY_TS_FILES "${MY_TS_DIR}/*.ts")

#FILE(GLOB_RECURSE TS_SOURCES "*.cpp" "*.h" "*.ui")

##MESSAGE( "TS_SOURCES is ${TS_SOURCES}" )

#set(MY_SOURCE_LOOKUP_DIR ${CMAKE_CURRENT_SOURCE_DIR})

#generate_translations("${PROJECT_NAME}" "${MY_TS_DIR}" "${MY_TS_FILES}" "${TS_SOURCES}")


#########################################################################
#########################################################################
#########################################################################
#########################################################################
#execute_process(COMMAND lsb_release -cs
#    OUTPUT_VARIABLE RELEASE_CODENAME
#    OUTPUT_STRIP_TRAILING_WHITESPACE
#    )

#EXECUTE_PROCESS( COMMAND dpkg --print-architecture
#    COMMAND tr -d '\n'
#    OUTPUT_VARIABLE ARCHITECTURE )

#set(PACKAGE_FILENAME "aert-prv16-eesett")
#set(CPACK_PACKAGE_NAME ${PACKAGE_FILENAME})
##############################################################################
#set(PACKAGE_FILENAME "${PACKAGE_FILENAME}_${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

#find_package(Hg)
#if(HG_FOUND)
#    message("hg found: ${HG_EXECUTABLE}")
#    HG_WC_INFO(${PROJECT_SOURCE_DIR} Project)
#    message("Current revision is ${Project_WC_REVISION}")
#    message("Current changeset is ${Project_WC_CHANGESET}")
#    set( PACKAGE_FILENAME "${PACKAGE_FILENAME}+${Project_WC_REVISION}-${Project_WC_CHANGESET}+${RELEASE_CODENAME}_${ARCHITECTURE}" )
#    file( WRITE "${PROJECT_SOURCE_DIR}/include/version.h"
#        "const char * VERSION=\"${Project_WC_REVISION}\";" )
#endif(HG_FOUND)


