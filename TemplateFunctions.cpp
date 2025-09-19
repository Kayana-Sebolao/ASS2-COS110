#include "TemplateFunctions.h"

namespace TemplateFunctions {

template <class T>
void createAndPopulate(int size, T**& array) {
}

template <class T>
void expand(int& size, T**& array, T*& new_value) {
}

template <class T>
void reduce(int& size, T**& array, std::string value) {
}

template <class T>
void reduce(int& size, T**& array, int index) {
}

template <class T>
T* get(const int size, T** array, std::string value) {
    return NULL;
}

template <class T>
int getIndex(const int size, T** array, std::string value) {
    return -1;
}

template <class T>
bool isFull(const int size, T** array) {
    return false;
}

template <class T>
T** clone(const int size, T** array) {
    return NULL;
}

template <class T>
void update(int size, T**& array, std::string oldValue, std::string newValue) {
}

template <class T, bool destroyElements>
void destroyArray(int& size, T**& array) {
}

}