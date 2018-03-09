#/bin/bash

./make-dependencies.sh
export PKG_CONFIG_PATH=${PWD}/build/prefix/lib/pkgconfig
cmake -DCMAKE_INSTALL_PREFIX=${PWD}/build/prefix .
make -j2
find . -name librawrtc-static.a