#include "iterator_types.h"

PostIterator::PostIterator(PostBox* bx):box(bx),index(0),total(1){
    if(bx){
        this->total = bx->totalSize();
    }
}

int PostIterator::next(){
    int temp = this->index;
    this->index = (++this->index) % this->total;
    return temp;
}

bool PostIterator::hasNext(){

    return true;
}

// PostBox
Iterator* PostBox::createIterator(){

    return new PostIterator(this);
}

void PostBox::switchAndShow(int index){
    this->postList.at(index)->show();
}

int PostBox::totalSize(){
    return this->postList.size();
}