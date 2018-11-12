#ifndef DYABLIB_SLSALLOACTOR_H
#define DYABLIB_SLSALLOACTOR_H

template <size_t arenaSize = 1024>
class SLSAllocator{
    char[arenaSize] buf_;
    char* ptr_;
public:
    SLSAllocator(){
        ptr_ = buf_;
    }
    ~SLSAllocator(){
        ptr_ = nullptr;
    }
    bool owns(char* p){
        return (p > buf_ && p < (buf_ + arenaSize));
    }
    void* allocate(size_t size){
        char* block = ptr_;
        ptr_ += size;
        return (void*)ptr_;
    }
    void deallocate(char* p){
        if(owns(p)){
            ptr_ = p;
        }
    }
    void reset(){
        ptr_ = buf_;
    }
};

#endif DYABLIB_SLSALLOACTOR_H
