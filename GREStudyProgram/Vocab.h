#pragma once
#ifndef Vocab_H
#define Vocab_H
#include <string>
#include <iostream>
enum class PartOfSpeech { noun, verb, pronoun, adverb, adjective, 
    conjunction, article, preposition, interjection, unassigned };

class Vocab {
private:
    std::string name, definition, example;
    char commonRating;
    PartOfSpeech part;
public: 
    Vocab();
    Vocab(std::string, std::string, char, PartOfSpeech);
    Vocab(std::string, std::string, std::string, char, PartOfSpeech);
    void print();
    std::string getName() const { return name; }
    std::string getDefinition() const { return definition; }
    std::string getExample() const { return example; }
    char getRating() const { return commonRating; }
    std::string speechToString();
    PartOfSpeech getPartOfSpeech() const { return part; }
    void setName(std::string newname) { name = newname; }
    void setDefinition(std::string newdefinition) { definition = newdefinition; }
    void setExample(std::string newexample) { example = newexample; }
    void setRating(char newrating) { commonRating = newrating; }
    void setSpeechFromString(std::string);
    ~Vocab();
};

#endif