#include "Tag.h"
#include <iostream>

Tag::Tag(const std::string& tagName)
    : tagName(tagName) {}

void Tag::showTagInfo() const {
    std::cout << "Tag: " << tagName << std::endl;
}


