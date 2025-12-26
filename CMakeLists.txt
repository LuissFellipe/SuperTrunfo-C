cmake_minimum_required(VERSION 3.20)
project(Tema_2 C)

set(CMAKE_C_STANDARD 11)

# Executável para o Nível Básico
add_executable(Tema_2_Basico Nivel_Basico/SuperTrunfo.c)

# Executável para o Nível Intermediário
add_executable(Tema_2_Intermediario Nivel_Intermediario/Super_Trunfo_Intermediario.c)