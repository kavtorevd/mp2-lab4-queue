file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

#include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../3rdparty")

add_executable(${queue_test} ${srcs} ${hdrs}) #Создаем проект с именем из переменной ${postftest}, в него добавляются файлы из переменных ${srcs} и ${hdrs}
target_link_libraries(${queue_test} ${queue} gtest) #Подключаем к проекту с именем ${postf} библиотеки с именами ${postflib} и gtest