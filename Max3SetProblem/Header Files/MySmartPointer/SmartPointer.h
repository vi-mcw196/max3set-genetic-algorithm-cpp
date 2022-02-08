#include "Counter.h"

using namespace std;
#ifndef MAX3SETPROBLEM_SHARED_PTR_H
#define MAX3SETPROBLEM_SHARED_PTR_H

template<typename T>
class SmartPointer {
public:
    explicit SmartPointer(T *ptr = nullptr) {
        shared_ptr = ptr;
        m_counter = new Counter();
        if (ptr) {
            (*m_counter)++;
        }
    }

    SmartPointer(SmartPointer<T> &Other) {
        shared_ptr = Other.shared_ptr;
        m_counter = Other.m_counter;
        (*m_counter)++;
    }

    unsigned int use_count() { return m_counter->get(); }

    T *getPointer() { return shared_ptr; }

    T &operator*() { return *shared_ptr; }

    T *operator->() { return shared_ptr; }

    ~SmartPointer() {
        (*m_counter)--;
        if (m_counter->get() == 0) {
            delete m_counter;
            delete shared_ptr;
        }
    }

private:
    Counter *m_counter;
    T *shared_ptr;
};

#endif //MAX3SETPROBLEM_SHARED_PTR_H
