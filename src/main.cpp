#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::cout << "مرحبا بك في MESMAAG1!" << std::endl;
    std::cout << "البرنامج يعمل بنجاح!" << std::endl;
    
    if (argc > 1) {
        std::cout << "المعاملات المُمررة: ";
        for (int i = 1; i < argc; ++i) {
            std::cout << argv[i] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
