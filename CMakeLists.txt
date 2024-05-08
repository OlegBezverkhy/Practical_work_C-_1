cmake_minimum_required(VERSION 3.18)    # требуемая версия cmake
project(
fibonacci                               # название проекта
VERSION 0.0.0                           # номер версии проекта
DESCRIPTION "Fibonacci sequence "       # описание
LANGUAGES CXX                           # язык программирования
)

set(CMAKE_CXX_STANDARD 17)              # устанавливаем требуемый стандарт языка (это значит, что в проекте будут использоваться фичи этого стандарта)
set(CMAKE_CXX_STANDARD_REQUIRED ON)     # при сборке платформа будет проверять поддержку стандарта C++17 компилятором
set(CMAKE_BUILD_TYPE Release)           # конфигурация сборки - Release
add_executable(fibonacci)               # эта команда сообщает платформе сборки, что код будет компилироваться в исполняемый файл с названием lesson3.exe
set(sources                             # создаём cmake-переменную sources, которая содержит список файлов исходного кода (в данном случае main.cpp)
    main.cpp
)
target_sources(fibonacci PRIVATE ${sources}) # команда указывает компилятору, что исполняемый файл будет компилироваться из исходника main.cpp