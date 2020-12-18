@ECHO OFF
cd build
cmake ..
cmake --build . --config Release
cd ..