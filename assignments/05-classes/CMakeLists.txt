project(classes_library)

add_library(classes_library "invoice_detail.cpp" "invoice_detail.h" "invoice.h" "invoice.cpp" "invoice_utility.h" "invoice_utility.cpp"
"invoice_progress.h" "invoice_progress.cpp" "midterm.h" "midterm.cpp")
add_executable(classes_exe "main.cpp")
target_link_libraries(classes_exe classes_library)