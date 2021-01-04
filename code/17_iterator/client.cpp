#include <iostream>

#include "iterator_types.h"

void mysleep(long count);

int main(){
    std::cout<<"Iterator pattern case:"<<std::endl;
    std::vector<Post*> list;
    list.push_back(new Post("Post 1"));
    list.push_back(new Post("Post 2"));
    list.push_back(new Post("Post 3"));
    list.push_back(new Post("Post 4"));
    list.push_back(new Post("Post 5"));
    
    const int POST_SIZE = list.size();
    PostBox* box = new PostBox(list);
    Iterator* iter = box->createIterator();

    while(iter->hasNext()){        
        int postIndex = iter->next();        
        box->switchAndShow(postIndex);
        if(postIndex == (POST_SIZE-1)){
            std::cout<< " --- " <<std::endl;
        }
        mysleep(50000000);
    }

    return 0;
}

void mysleep(long count){
    
    for(long i=0;i<count;i++){
        
    }
}