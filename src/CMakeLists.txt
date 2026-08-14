add_executable(mesmaag1 
    main.cpp
)

target_include_directories(mesmaag1 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# وضع التطبيق في مجلد البناء الرئيسي
set_target_properties(mesmaag1 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)
