//
// Created by Peti on 2019. 07. 10..
//

#ifndef BLOG_POST_BLOGPOST_H
#define BLOG_POST_BLOGPOST_H

#include <string>


class BlogPost
{
public:
    BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
             const std::string &publicationDate);

    const std::string &getAuthorName() const;

    const std::string &getTitle() const;

    const std::string &getText() const;

    const std::string &getPublicationDate() const;

private:
    std::string authorName;
    std::string title;
    std::string text;
    std::string publicationDate;

};


#endif //BLOG_POST_BLOGPOST_H
