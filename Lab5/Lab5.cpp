#include <iostream>
#include <string>

using namespace std;

class  Bird {
public:
    Bird() {
        printf("Bird()\n");
    }
    Bird(const Bird* b) {
        printf("Bird(const Bird* b)\n");

    }
    Bird(const Bird& b) {
        printf("Bird(const Bird& b)\n");

    }
    virtual ~Bird() {
        printf("~Bird()\n");
    }

    virtual string GetClassName() {
        return "Bird";
    }

    virtual bool isA(string classname) {
        if (classname == "Bird")
            return true;
        return false;
    }
};


class Goose : public Bird {
public:
    Goose() :Bird() {
        printf("Goose()\n");
    }
    Goose(const Goose* g) {
        printf("Goose(const Goose* g)\n");
    }

    Goose(const Goose& g) {
        printf("Goose(const Goose& g)\n");
    }

    ~Goose() {
        printf("~Goose()\n");
    }

    string GetClassName() {
        return "Goose";
    }

    bool isA(string classname) {
        if (classname == "Goose")
            return true;
        return false;
    }
};

class Toucan : public Bird {
public:
    Toucan() :Bird() {
        printf("Toucan()\n");
    }
    Toucan(const Toucan* t) {
        printf("Toucan(const Toucan* g)\n");
    }

    Toucan(const Toucan& t) {
        printf("Toucan(const Toucan& g)\n");
    }

    ~Toucan() {
        printf("~Toucan()\n");
    }

    string GetClassName() {
        return "Toucan";
    }

    bool isA(string classname) {
        if (classname == "Toucan")
            return true;
        return false;
    }
};


int main()
{











	return 0;
}