c++ -O3 -shared -std=c++11 -I /usr/local/include `python-config --cflags --ldflags` classes.cpp -o classes.so -fPIC
