cmake_minimum_required(VERSION 3.20)
project(Tema_2 C)

set(CMAKE_C_STANDARD 11)

add_executable(SuperTrunfo_Basico Nivel_Basico/SuperTrunfo.c)
add_executable(SuperTrunfo_Intermediario Nivel_Intermediario/Super_Trunfo_Intermediario.c)
add_executable(SuperTrunfo_Avancado Nivel_Avancado/Super_Trunfo_Avancado.c)