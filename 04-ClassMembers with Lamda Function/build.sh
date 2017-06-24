c++ -O3 -shared -std=c++11 -I /usr/local/include `python-config --cflags --ldflags` member.cpp -o member.so -fPIC
