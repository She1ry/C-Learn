

#ifndef P10_QUEUE_H
#define P10_QUEUE_H

template<class T>
class Queue{
private:
    enum {init_Size=10};
    struct Node{
        T item;
        struct Node * next;
    };
    Node *front;
    Node *end;
    int items;
    const int qsize;

//private:
//    Queue(const Queue &){};
//    Queue & operator=(const Queue &){return *this;};
public:
    explicit Queue(int size);
    ~Queue();
    bool isEmpty() const;
    bool isFull() const;
    int count() const;
    bool enQueue(const T& t);
    bool deQueue();
};


//模板的定义与声明要放入同一个文件


template<class T>
Queue<T>::Queue(int size) : qsize(size) {
    //qsize为常量，因此要在创建对象前初始化，所以不能写入函数体内。因为函数体是对象创建后调用的，应写入初始化列表
    front=end= nullptr;
    items=0;
}

template<class T>
bool Queue<T>::isEmpty() const {
    return items==0;
}

template<class T>
bool Queue<T>::isFull() const {
    return qsize == items;
}

template<class T>
int Queue<T>::count() const {
    return items;
}

template<class T>
bool Queue<T>::enQueue(const T& t) {
    if(isFull())
        return false;

    Node *add = new Node;
    add->item = t;
    add->next = nullptr;
    items++;

    if(front== nullptr)
        front=add;
    else
        end->next=add;
    end=add;
    return true;
}

template<class T>
bool Queue<T>::deQueue() {
    if(isEmpty())
        return false;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;
    return true;
}

template<class T>
Queue<T>::~Queue() {
    Node *temp;
    while (front!= nullptr){
        temp=front;
        front=front->next;
        delete temp;
    }
}


#endif //P10_QUEUE_H
