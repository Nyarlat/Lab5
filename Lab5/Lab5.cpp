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

    virtual void sound() {
        printf("Void");
    }
};


class WhiteGoose : public Bird {
public:
    WhiteGoose() :Bird() {
        printf("WhiteGoose()\n");
    }
    WhiteGoose(const WhiteGoose* g) {
        printf("WhiteGoose(const WhiteGoose* g)\n");
    }

    WhiteGoose(const WhiteGoose& g) {
        printf("WhiteGoose(const WhiteGoose& g)\n");
    }

    ~WhiteGoose() {
        printf("~WhiteGoose()\n");
    }

    string GetClassName() {
        return "WhiteGoose";
    }

    bool isA(string classname) {
        if (classname == "WhiteGoose" || Bird::isA(classname))
            return true;
        return false;
    }

    void sound() {
        printf("Honk!\n");
    }

    void white_skin() {
        printf("White skin\n");
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

    bool isA(string classname || Bird::isA(classname))) {
        if (classname == "Toucan")
            return true;
        return false;
    }

    void sound() {
        printf("Groomkk!\n");
    }

    void long_beak() {
        printf("Long beak\n");
    }
};


int main()
{
    Bird* g1 = new WhiteGoose;
    g1->sound();
    delete g1;
    cout << endl;



    Bird* Cage[10];
    for (int i = 0; i < 10; ++i)
    {
        int random = rand() % 2;
        if (random == 0)
            Cage[i] = new WhiteGoose;
        else if (random == 1)
            Cage[i] = new Toucan;
    }
    for (int i = 0; i < 10; ++i)
    {
        if (Cage[i]->GetClassName() == "Toucan")
            ((Toucan*)Cage)[i].long_beak();
        if (Cage[i]->isA("WhiteGoose"))
            ((WhiteGoose*)Cage)[i].white_skin();
    }
    printf("\n\n");
    for (int i = 0; i < 10; ++i)
    {
        Toucan* t = dynamic_cast<Toucan*>(Cage[i]);
        if (t != NULL)
            t->sound();
        WhiteGoose* g = dynamic_cast<WhiteGoose*>(Cage[i]);
        if (g != NULL)
            g->sound();
    }



	return 0;
}