template <class T>
class Zbior
{
    public:
    T tab[100] = {};
    void dodaj(int index ,T value)
    {
        this->tab[index] = value;
    }
    void usun(int index)
    {
        this->tab[index] = NULL;
    }
};

template <>
class Zbior <int>
{
    int tab[100];
    public:

    Zbior()
    {
        for(int i = 0; i < 100; i++)
        {
            tab[i] = 0;
        }
    }

    int suma()
    {
        int s = 0;
        for(int i = 0; i < 100; i++)
        {
            s += tab[i];
        }
        return s;
    }

    void dodaj(int index, int value)
    {
        this->tab[index] = value;
    }

    void usun(int index)
    {
        this->tab[index] = NULL;
    }
};