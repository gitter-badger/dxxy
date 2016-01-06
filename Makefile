# Makefile for DXXY

all:
	mkdir build && cd build && qmake ../src/DXXY.pro -r -spec linux-g++
	cd build && make

run:
	mkdir -p etc/dxxy
	./bin/dxxy &

clean:
	rm -rf build etc
