cmake_minimum_required(VERSION 2.8) #Проверка версии CMake.

set(PROJECT_NAME mp2-lab4-queue) #Создаем обычную локальную переменную с именем проекта
project(${PROJECT_NAME}) # Название проекта

set(queue queue) #Переменная с именем приложения
set(queue_test queue_test) #Переменная с именем библиотеки
set(queue_main queue_main)

set(form form)


set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE) #Создается переменная CMAKE_CONFIGURATION_TYPES со значением "Debug;Release" и меткой/разделом Configs, переменная сохраниется в специальном файле доступном из всех файлов,
if(NOT CMAKE_BUILD_TYPE) # проверка имеющихся у компилятора вариантов сборки
  set(CMAKE_BUILD_TYPE Release) #Если нет то устанавливаем Release
endif()
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gtest)
add_subdirectory(gtest)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/queue) #Добавляем директорию "${CMAKE_CURRENT_SOURCE_DIR}/stacklib" в дополняемые каталоги включаемых файлов
add_subdirectory(queue) #Добавляем директорию с под-CMakeList-ом, и выполняем под-CMakeList
add_subdirectory(queue_test)
add_subdirectory(queue_main)

add_subdirectory(form)


