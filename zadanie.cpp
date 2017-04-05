#include <iostream>

using namespace std;

class figuraGeometryczna
{
protected:
    double pole;
public:
    figuraGeometryczna() {}
    figuraGeometryczna(double pole): pole(pole) { }

    virtual double Pole() {return pole; };
};

class kwadrat: public figuraGeometryczna
{
private:
    double bokA;
public:
    kwadrat(double bokA): figuraGeometryczna(bokA*bokA)
    {
        this->bokA = bokA;
    }
};

class trojkat: public figuraGeometryczna
{
private:
    double bokA;
    double wysokosc;
public:
    trojkat(double bokA, double Wysokosc=0) : wysokosc(Wysokosc)
        //:figuraGeometryczna(Wysokosc=0 ? 0,433 * bokA*bokA : bokA*Wysokosc/2)
    {
        if (Wysokosc == 0)
        {
            pole = 0.433 * bokA * bokA;
        }
        else{
            pole= bokA*bokA/2;
        }

        pole= (wysokosc == 0) ? 0.433 * bokA * bokA : bokA * bokA/2;

        this->bokA = bokA;
    }
};

int main(int agrc, char **argv)
{
    for (int argNo=0; argNo<argc; argNo++)
    {
        cout<<"Argument nr "<<argNo<<" = "<<argv[argNo]<<"\n";
    }
    figuraGeometryczna mojKwadrat = new kwadrat (5);
    figuraGeometryczna mojTrojkat = nwe trojkat (5);

    cout<<"Pole kwadratu wynosi "<<mojKwadrat ->Pole()<<"\n";
    //prntf("pole kwadratu wynosi %lf\n", mojkwadrat ->Pole() );

    return 0;
}
