#ifndef EDUCATIONALCONTENT
#define EDUCATIONALCONTENT
#include <iostream>
#include "Article.h"
#include "Infographics.h"
#include "Video.h"
#include "Quiz.h"


using namespace std;
class EducationalContent
{
    private:
    Article article;
    Video video;
    Infographic infographic;
    Quiz quiz;

public:
    EducationalContent(Article a, Video v, Infographic i, Quiz q) : article(a), video(v), infographic(i), quiz(q) {}
    void getContent() {
        article.readArticle();
        video.watchVideo();
        infographic.viewInfographic();
        quiz.takeQuiz();
    } void getContent();
    operator+ (getContent());
};
