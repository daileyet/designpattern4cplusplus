#include <iostream>

#include "iterator_types.h"

void mysleep(int count);

int main(){
    std::cout<<"Iterator pattern case:"<<std::endl;
    std::vector<Post*> list;
    list.push_back(new Post("Post 1"));
    list.push_back(new Post("Post 2"));
    list.push_back(new Post("Post 3"));
    list.push_back(new Post("Post 4"));
    list.push_back(new Post("Post 5"));
    
    PostBox* box = new PostBox(list);
    Iterator* iter = box->createIterator();

    while(iter->hasNext()){
       box->switchAndShow(iter->next());
       mysleep(10000);
    }

    return 0;
}

void mysleep(int count){
    for(int i=0;i<count;i++){

    }
}