#!/bin/bash

# clean up
#rm ./ogrelib/libogrec.so
#rm runit

# rpath appears to have issues in cgo
# hacky workaround: temp use of LD_LIBRARY_PATH
#export LD_LIBRARY_PATH=./ogrelib

# build c wrapper
#g++ $(go env GOGCCFLAGS) -Wl,-rpath=./ogrelib -L./ogrelib -lOgreMain  -shared -o ./ogrelib/libogrec.so ogrec.cpp -L./ogrelib -lOgreMain

# build example using go wrapper
#go build -ldflags="-r ./ogrelib" gogre3d.go
go build  gogre3d.go
#go build runit.go

#./runit

# remove hacky load path workaround
#unset LD_LIBRARY_PATH
