#pragma once
#include <cassert>
#include <iostream>

template <typename T>
class LinkedList {
    private:
        struct Node {
            Node* Next = nullptr;
            T Data{};

            Node()=default;
            Node(T const& data)
                : Data(data) {}
            Node(T const& data, Node* next) 
                : Data{data}, Next{next} {}
        };

        Node* m_head = nullptr;
        int m_count = 0;

    public:
        typedef Node* Position;

        // Disable default copy constructor and copy assignment operator
        LinkedList(LinkedList const &list) = delete;
        LinkedList &operator=(LinkedList const &list) = delete;
        LinkedList()=default;
        ~LinkedList() { Clear(); };

        // Clear List Method - Remove Head manages memory;
        void Clear() {
          while (!(IsEmpty())) {
              RemoveHead();
          }
        }

        // Check if list is empty
        bool IsEmpty() const {
            return m_count == 0;
        }

        // Return number of nodes in lisr
        int Count() const {
            return m_count;
        }

        bool IsValidPosition(Position node) const {
            // checks if an address points to a node in the list
            Node* currentNode = m_head;
            while(currentNode != nullptr) {
                if(currentNode == node) {
                    return true;
                }
                currentNode = currentNode->Next;
            }
            return false;
        }

        // Return node data at given position
        T const& ElementAt(Position node) const {
            assert(!IsEmpty());
            assert(node != nullptr);
            return node->Data;
        }

        // Find the position of a value in the linked list
        Position Find(T const& value) const {
            if(IsEmpty()) {
                return nullptr;
            }

            Node* node = m_head;
            while(node != nullptr) {
                if(node->Data == value) {
                    return node; 
                }
                // move on to next node
                node = node->Next;
            }
            // value not found
            return nullptr;
        }

        // Insert Head
        void InsertHead(T const& value) {
            // create new node on the heap, keeping its pointer
            Node* newHead = new Node{value, m_head};

            // update list head
            m_head = newHead;

            // increment count
            m_count++;
        }

        // Remove Head
        void RemoveHead() {
            assert(!IsEmpty());

            // create pointer to second item in list
            Node* newHead = m_head->Next;

            // clear memory from old head
            delete m_head;

            // update list head to the second node
            m_head = newHead;
            m_count--;
        }

        // insert after a particular node
        void InsertAfter(Position node, T const& value) {
            // check that list is not empty
            assert(!IsEmpty());
            // check that position exists within list
            assert(node != nullptr);
            assert(IsValidPosition(node));
            
            Node* newNode = new Node{value};
            newNode->Next = node->Next;
            node->Next = newNode;
            m_count++;
        }

        // Remove after a particular node
        void RemoveAfter(Position node) {
            // check that list is not empty
            assert(!IsEmpty());
            // check that position exists within list
            assert(node != nullptr);
            assert(IsValidPosition(node));

            Node* nextNode = node->Next;
            node->Next = nextNode->Next;
            delete nextNode;

            m_count--;
        }

        // Output stream for a simple linked list
        friend std::ostream& operator<<(std::ostream& os, LinkedList<T> const& list) {
            if(list.IsEmpty()) {
                os << "[ ***EMPTY LIST*** ]";
                return os;
            }

            os << "[ ";

            Node* node = list.m_head;
            while(node != nullptr) {
                os << node->Data << ' ';
                node = node->Next;
            }
            os << "]";
            return os;
        }

};