//
// Created by yretenai on 5/29/2020.
//

#include "../../dragon/dragon.h"
#include "../../lumberyard/Lumberyard.h"

using namespace dragon;

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " path" << std::endl;
        return 1;
    }
    char* filepath = argv[1];
    lumberyard::Material material = lumberyard::Material::from_path(filepath);
    return 0;
}
