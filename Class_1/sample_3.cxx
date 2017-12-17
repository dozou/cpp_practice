//
// Created by 船戸恒宏 on 2017/12/17.
//

#include <iostream>


template <typename T>
class Vector{
private:
    struct Container{
        int index{0};
        T value;
        Container* next_ptr;

        Container(int _index, T& _value):index(_index),value(_value){
            next_ptr = nullptr;
        }

        virtual ~Container(){
            delete next_ptr;
        }

    };

    int index{0};
    Container *start;
public:

    Vector(){
        start = nullptr;
    }

    virtual ~Vector(){
        delete start;
    }

    void push_back(T _val){

        if(!start) {
            start = new Container(0,_val);
        }else{
            Container *ptr=start;
            while(ptr){
                if(!ptr->next_ptr){
                    ptr->next_ptr = new Container(index,_val);
                    break;
                }
                ptr = ptr->next_ptr;
            }
        }
        index += 1;
    }

    T get_value(int idx){
        Container *ptr=start;
        while(ptr->index < idx){
            if (!ptr->next_ptr)break;
            else ptr = ptr->next_ptr;
        }
        return ptr->value;
    }

    T& at(int idx){
        Container *ptr=start;
        while(ptr->index < idx){
            if (!ptr->next_ptr)break;
            else ptr = ptr->next_ptr;
        }
        return ptr->value;
    }

    void debug(){
        Container *ptr=start;
        while(ptr){
            std::cout << ptr << ":" << ptr->index << " "<< ptr->value << std::endl;
            ptr = ptr->next_ptr;
        }
    }

    int size(){
        return index;
    }

};

int main() {
    Vector<int> test;
    while (true){
        std::string input;
        std::cin >> input;
        if(input == "end"){
            break;
        }
        test.push_back(std::atoi(input.c_str()));
        std::cout << test.at(test.size()-1) << std::endl;
    }


    test.debug();

    return 0;
}