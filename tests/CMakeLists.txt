# Укажите CMake, где искать модуль Catch
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/external/catch2/contrib")

# Подключите Catch.cmake
include(Catch)

# Создайте исполняемый файл для тестов
add_executable(calculator_tests CalculatorTests.cpp)

# Укажите, где искать заголовочные файлы Catch2
target_include_directories(calculator_tests PRIVATE ../external/catch2)

# Свяжите ваш исполняемый файл с библиотекой калькулятора
target_link_libraries(calculator_tests calculator_lib)

# Подключите тесты к CTest
catch_discover_tests(calculator_tests)
