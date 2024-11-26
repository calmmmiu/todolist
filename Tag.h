#ifndef TAG_H
#define TAG_H

#include <string>

class Tag {
public:
    Tag(const std::string& tagName);
    void showTagInfo() const;

private:
    std::string tagName;
};

#endif
