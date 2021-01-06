#include <iostream>
#include <string>

using namespace std;

class  Bird {
protected:
    string classname;
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
        printf("\n");
    }

    virtual string ClassName() {
        printf("ClassName is Bird\n");
        return "Bird";
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

    string ClassName() {
        printf("ClassName is Goose\n");
        return "Goose";
    }
};


int main()
{
    Bird *b1 = new Bird;
    b1->ClassName();
    Goose* g1 = new Goose;
    g1->ClassName();
    Bird* g2 = new Goose;
    g2->ClassName();
	return 0;
}