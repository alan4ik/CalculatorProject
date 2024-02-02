cmake_minimum_required(VERSION 3.14)  # Укажите минимально требуемую версию CMake

project(CalculatorProject)            # Название вашего проекта

# Установите C++ стандарт
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Включите тестирование
enable_testing()

# Добавьте подкаталоги
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)               # Убедитесь, что добавили каталог тестов
