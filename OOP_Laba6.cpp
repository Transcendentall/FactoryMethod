#include <iostream>

using namespace std;


class Product
{

    private:

    public:
        virtual ~Product()
        {

        }

    virtual void WhatIsIt() const = 0;

    protected:

};

class Chocolate: public Product
{
    private:

    public:
        void WhatIsIt() const override
        {
            cout << "It is Chocolate!" << endl;
        }
    protected:

};

class Sausage: public Product
{
    private:

    public:
        void WhatIsIt() const override
        {
            cout << "It is Sausage!" << endl;
        }
    protected:

};

class Sugar: public Product
{
    private:

    public:
        void WhatIsIt() const override
        {
            cout << "It is Sugar!" << endl;
        }
    protected:

};

class Candy: public Product
{
    private:

    public:
        void WhatIsIt() const override
        {
            cout << "It is Candy!" << endl;
        }
    protected:
};

class Cheese: public Product
{
    private:

    public:
        void WhatIsIt() const override
        {
            cout << "It is Cheese!" << endl;
        }
    protected:

};

class Beer: public Product
{
    private:

    public:
        void WhatIsIt() const override
        {
            cout << "It is Beer!" << endl;
        }
    protected:

};

class Macaroni: public Product
{
    private:

    public:
        void WhatIsIt() const override
        {
            cout << "It is Macaroni!" << endl;
        }
    protected:

};


class AbstractFabric
{

    private:

    public:

    virtual ~AbstractFabric()
    {

    };
    virtual Product* FactoryMethod() const = 0;

    void ProductProduce() const
    {
    Product* product = this->FactoryMethod();
    }

    protected:

};


class FabricChocolate: public AbstractFabric
{

    private:

    public:
        Product* FactoryMethod() const override
        {
        cout << "Fabric of Chocolate :  Produced new Chocolate!" << endl;
        return new Chocolate();
        }
    protected:

};

class FabricSausage: public AbstractFabric
{

    private:

    public:
        Product* FactoryMethod() const override
        {
        cout << "Fabric of Sausages :  Produced new Sausage!" << endl;
        return new Sausage();
        }
    protected:


};

class FabricSugar: public AbstractFabric
{

    private:

    public:
        Product* FactoryMethod() const override
        {
        cout << "Fabric of Sugar :  Produced new Sugar!" << endl;
        return new Sugar();
        }
    protected:


};

class FabricCandy: public AbstractFabric
{

    private:

    public:
        Product* FactoryMethod() const override
        {
        cout << "Fabric of Candis :  Produced new Candy!" << endl;
        return new Candy();
        }
    protected:


};

class FabricCheese: public AbstractFabric
{

    private:

    public:
        Product* FactoryMethod() const override
        {
        cout << "Fabric of Cheese :  Produced new Cheese!" << endl;
        return new Cheese();
        }
    protected:


};

class FabricBeer: public AbstractFabric
{

    private:

    public:
        Product* FactoryMethod() const override
        {
        cout << "Fabric of Beer :  Produced new Beer!" << endl;
        return new Chocolate();
        }
    protected:


};

class FabricMacaroni: public AbstractFabric
{

    private:

    public:
        Product* FactoryMethod() const override
        {
        cout << "Fabric of Macaroni :  Produced new Macaroni!" << endl;
        return new Macaroni();
        }
    protected:


};


void ClientCode(const AbstractFabric& AbstractFabric)
{
 AbstractFabric.ProductProduce();
}


int main() {
  AbstractFabric* AbstractFabric1 = new FabricChocolate();
  AbstractFabric* AbstractFabric2 = new FabricSausage();
  AbstractFabric* AbstractFabric3 = new FabricCandy();
  AbstractFabric* AbstractFabric4 = new FabricCheese();
  AbstractFabric* AbstractFabric5 = new FabricBeer();
  AbstractFabric* AbstractFabric6 = new FabricMacaroni();
  AbstractFabric* AbstractFabric7 = new FabricSugar();
  AbstractFabric* AbstractFabric8 = new FabricChocolate();

  ClientCode(*AbstractFabric1);
  ClientCode(*AbstractFabric2);
  ClientCode(*AbstractFabric3);
  ClientCode(*AbstractFabric4);
  ClientCode(*AbstractFabric5);
  ClientCode(*AbstractFabric6);
  ClientCode(*AbstractFabric7);
  ClientCode(*AbstractFabric8);
  ClientCode(*AbstractFabric2);
  ClientCode(*AbstractFabric6);
  ClientCode(*AbstractFabric6);
  ClientCode(*AbstractFabric1);

  delete AbstractFabric1;
  delete AbstractFabric2;
  delete AbstractFabric3;
  delete AbstractFabric4;
  delete AbstractFabric5;
  delete AbstractFabric6;
  delete AbstractFabric7;
  delete AbstractFabric8;

  return 0;
}
