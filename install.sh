conan remote add bincrafters https://api.bintray.com/conan/bincrafters/public-conan
conan remote add skypjack https://api.bintray.com/conan/skypjack/conan
conan install . -s build_type=Release --install-folder=cmake-build-debug