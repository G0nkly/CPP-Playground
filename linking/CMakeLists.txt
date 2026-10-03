cmake_minimum_required(VERSION 3.10)

#Name deines Projekts
    project(MeinErstesCMakeProjekt VERSION 1.0 LANGUAGES CXX)

#Wir nutzen modernen C++ 20 Standard
        set(CMAKE_CXX_STANDARD 20)
            set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Erstellt aus der main.cpp eine ausführbare Datei namens "app"
                add_executable(app Math.cpp Log.cpp)
