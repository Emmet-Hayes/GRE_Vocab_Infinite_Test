#include "Vocab.h"

Vocab::Vocab() {
    name = "Empty Word";
    definition = "No Definition Yet";
    example = "No Example Yet";
    commonRating = 'Z';
    part = PartOfSpeech::unassigned;
}

Vocab::Vocab(std::string n, std::string d, char r, PartOfSpeech p) : Vocab() {
    name = n;
    definition = d;
    commonRating = r;
    part = p;
}

Vocab::Vocab(std::string n, std::string d, std::string e, char r, PartOfSpeech p) : Vocab(n, d, r, p) {
    example = e;
}

void Vocab::print() {
    std::cout << "\n\nWord:         \t" << name    << "\nDefinition:\t" << definition
              << "\nExample:       \t" << example << "\nRating:    \t" << commonRating
              << "\nPart of Speech:\t" << speechToString();
}

std::string Vocab::speechToString() {
    std::string s;
    switch (part) {
    case PartOfSpeech::noun: s = "noun"; break;
    case PartOfSpeech::verb: s = "verb"; break;
    case PartOfSpeech::pronoun: s = "pronoun"; break;
    case PartOfSpeech::adverb: s = "adverb"; break;
    case PartOfSpeech::adjective: s = "adjective"; break;
    case PartOfSpeech::conjunction: s = "conjunction"; break;
    case PartOfSpeech::article: s = "article"; break;
    case PartOfSpeech::preposition: s = "preposition"; break;
    case PartOfSpeech::interjection: s = "interjection"; break;
    case PartOfSpeech::unassigned: default: s = "unassigned"; break;
    }
    return s;
}

void Vocab::setSpeechFromString(std::string sts) {
    if (sts == "noun") part = PartOfSpeech::noun;
    else if (sts == "verb") part = PartOfSpeech::verb;
    else if (sts == "pronoun") part = PartOfSpeech::pronoun;
    else if (sts == "adverb") part = PartOfSpeech::adverb;
    else if (sts == "adjective") part = PartOfSpeech::adjective;
    else if (sts == "conjunction") part = PartOfSpeech::conjunction;
    else if (sts == "article") part = PartOfSpeech::article;
    else if (sts == "preposition") part = PartOfSpeech::preposition;
    else if (sts == "interjection") part = PartOfSpeech::interjection;
    else part = PartOfSpeech::unassigned;
}

Vocab::~Vocab() {
    name = "Empty Word";
    definition = "No Definition Yet";
    example = "No Example Yet";
    commonRating = 'Z';
    part = PartOfSpeech::unassigned;
}
