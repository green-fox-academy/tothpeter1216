//
// Created by Peti on 2019. 07. 10..
//

#include "BlogPost.h"

BlogPost::BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
                   const std::string &publicationDate) : authorName(authorName), title(title), text(text),
                                                         publicationDate(publicationDate)
{}

const std::string &BlogPost::getAuthorName() const
{
    return authorName;
}

const std::string &BlogPost::getTitle() const
{
    return title;
}

const std::string &BlogPost::getText() const
{
    return text;
}

const std::string &BlogPost::getPublicationDate() const
{
    return publicationDate;
}
