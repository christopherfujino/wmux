$BUILD_DIR = "./build"
$RELEASE_MODE = "Debug"
$NINJA_DIR = (Resolve-Path "../third_party/ninja").Path.replace('\', '\\')
$CLANG_DIR = (Resolve-Path "../third_party/clang/bin").Path.replace('\', '\\')

$env:Path = "$NINJA_DIR;$CLANG_DIR;" + $env:Path
cmake -S . -B $BUILD_DIR -GNinja -DCMAKE_BUILD_TYPE="$RELEASE_MODE"
