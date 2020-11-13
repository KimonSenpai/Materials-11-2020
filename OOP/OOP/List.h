#pragma once

class List
{
private:
    class Node {
    public:
        int val;
        Node* prev;
        Node* next;
    };
    Node* beg;
    Node* end;
    int size;
public:
    List() {
        beg = nullptr;
        end = nullptr;
        size = 0;
    }
    void insert(int val, int pos) {
        if (pos < 0 || pos > size)
            throw 1;

        if (beg == nullptr) {
            beg = end = new Node;
            beg->next = beg->prev = nullptr;
            beg->val = val;
            return;
        }
        Node* cur;
        Node* obj = new Node;
        if (pos >= size / 2) {
            cur = end;
            for (int i = size - 1; i > pos; i--)
                cur = cur->prev;
        }
        else {
            cur = beg;
            for (int i = 0; i < pos; i++)
                cur = cur->next;
        }
        cur->prev->next = obj;
        obj->prev = cur->prev;
        cur->prev = obj;
        obj->next = cur;
        
    }
};

