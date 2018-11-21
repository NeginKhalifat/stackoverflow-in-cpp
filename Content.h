//
// Created by spsina on 11/8/18.
//

#ifndef STACKOVERFLOW_IN_CPP1_CONTENT_H
#define STACKOVERFLOW_IN_CPP1_CONTENT_H
#include <vector>
#include <iostream>
#include "AbstractUser.h"
#include <sys/time.h>
#include <time.h>
enum ContentType{
    QUESTION,
    ANSWER
};

enum ContentRelationType{
    DUPLECATE_OF,
    ANSWER_TO
};
class ContentRelation ;
class Content {
   string body;
   ContentType type;
   vector<string> tag; 
   int visit;
   vector<ContentRelation> relations;
    char* time_create=new char(100);
public:
    Content(){
        time_t ticks[100];
        time(ticks);
        time_create=ctime(ticks);
    }
    void set_body(string str);
    string get_body();
    ContentType get_ContentType();
    void set_tag(string str);
    void remove_tag(string str);
    bool search_tag(string str);
    int get_visit();
    void visit_content();

};

class ContentRelation {
    Content destination;
    ContentRelationType type;

};

#endif //STACKOVERFLOW_IN_CPP1_CONTENT
