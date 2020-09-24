#include <cstdio>
#include <string>
#include <tuplet/tuplet.hpp>

int main() {
    auto tup = tuplet::tuple{1, 2, std::string("Hello, world!")};

    printf("tup = (%i, %i, \"%s\")\n\n",
        get<0>(tup),
        get<1>(tup),
        get<2>(tup).c_str());
}