$BUILD_DIR = "./build"
$RELEASE_MODE = "Debug"

cmake -S . -B $BUILD_DIR -G Ninja -D CMAKE_BUILD_TYPE=$RELEASE_MODE
