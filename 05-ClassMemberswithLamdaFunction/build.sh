c++ -O3 -shared -std=c++11 -I /usr/local/include `python-config --cflags --ldflags` lambdamember.cpp -o lambdamember.so -fPIC
