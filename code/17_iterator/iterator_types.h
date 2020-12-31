#pragma once
#include <iostream>
#include <string>
#include <vector>

class Iterator{
public:
    virtual int next()=0;
    virtual bool hasNext()=0;
};

class Aggregate{
public:
    virtual Iterator* createIterator()=0;
};

class Post{
public:
    Post(std::string cont):m_content(cont){

    }
    void show(){
        std::cout<<m_content<<std::endl;
    }
private:
    std::string m_content;
};

class PostBox;
class PostIterator: public Iterator{
public:
    PostIterator(PostBox* bx);
    int next();
    bool hasNext();
private:
    PostBox* box;
    int index;
    int total;
};



class PostBox: public Aggregate{
public:    
    PostBox(std::vector<Post*> list):postList(list){

    }
    Iterator* createIterator();
    void switchAndShow(int index);
    int totalSize();
private:
    std::vector<Post*> postList;    
};