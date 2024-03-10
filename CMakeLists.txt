cmake_minimum_required(VERSION 3.27)
project(data_struct_learn C)

set(CMAKE_C_STANDARD 11)

add_executable(data_struct_learn main.c
        lineList.c
        lineList.h
        linkList.c
        linkList.h
        bothLinkList.h
        bothLinkList.c
        ArrayStack.h
        ArrayStack.c)
