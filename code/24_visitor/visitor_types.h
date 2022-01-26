#ifndef __VISITOR_TYPES_H__
#define __VISITOR_TYPES_H__
#include <string>
#include <iostream>
#include <vector>

class Visitor;

class Goods
{
public:
    virtual ~Goods() {}
    virtual float getWeight() = 0;
    virtual float getPrice() = 0;
    virtual void accept(Visitor *visitor) = 0;
};

class Water : public Goods
{
public:
    Water(std::string brand_):brand(brand_){}
    float getWeight() override { return 1; }
    float getPrice() override { return 3; };
    void accept(Visitor *visitor) override;

    std::string getBrand(){
        return brand;
    }
    std::string brand;
};

class CocaCola : public Goods
{
public:
    float getWeight() override { return 0.25; }
    float getPrice() override { return 2.5; }
    void accept(Visitor *visitor) override;
};

class Visitor
{
public:
    virtual ~Visitor() {}
    virtual void visit(Water *goods) = 0;
    virtual void visit(CocaCola *goods) = 0;
};

class Customer : public Visitor
{
public:
    void visit(Water *goods) override;
    void visit(CocaCola *goods) override;
};

class Cashier : public Visitor
{
public:
    void visit(Water *goods) override;
    void visit(CocaCola *goods) override;
    void reset()
    {
        waterCount = 0;
        colaCount = 0;
    }

private:
    int waterCount;
    int colaCount;
};

class ShopCart
{
public:
    void accept(Visitor *visitor);
    void add(Goods *element);
private:
    std::vector<Goods *> list;
};
#endif // __VISITOR_TYPES_H__