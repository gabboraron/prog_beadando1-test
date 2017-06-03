#define CATCH_CONFIG_MAIN
/*
//K�sz�tette:    Burian Sandor
//D�tum:         2017.03.31
//NEPTUN k�d:    AWXYHE
//mail:          burjansanyi@yahoo.com
//Feladat:       Egy kutya ki�ll�t�son n kateg�ri�ban m kutya vesz r�szt. Minden kutya minden
                 kateg�ri�ban egy 0 �s 10 k�z�tti pontsz�mot kap. Melyik az a kutya, amelyik a legt�bb
                 kateg�ri�ban indult? */

#include <iostream>
#include <string>
#include <vector>
#include "tetelek.h" // maxKiv; szamlalas;
#include "matrixmuveletek.h" //PrintMatrix, ReadMatrix, initMatrixConsole, FillMatrixRnd, MatrixTest
#include "egyeb.h" //menu, read_int
#include "feldolgozas.h" //feldolgozas
#include "catch.hpp"

using namespace std;


TEST_CASE("0 eset", "egysoros")
{
    vector<vector<int> > v;
    string filename = "0.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(feldolgozas(v)==0);
}


TEST_CASE("1 eset", "tobb jo sor")
{
    vector<vector<int> > v;
    string filename = "1.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(feldolgozas(v)==0);
}

TEST_CASE("2 eset", "tobb jo sor")
{
    vector<vector<int> > v;
    string filename = "2.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(feldolgozas(v)==2);
}

TEST_CASE("3 eset", "egy kutya, egy kategoria")
{
    vector<vector<int> > v;
    string filename = "3.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(feldolgozas(v)==0);
}

TEST_CASE("5 eset", "tobb kutya minden kategoriaban 0 pont")
{
    vector<vector<int> > v;
    string filename = "5.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(feldolgozas(v)==0);
}

TEST_CASE("6 eset", "mind negyativ")
{
    vector<vector<int> > v;
    string filename = "6.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(feldolgozas(v)==0);
}

TEST_CASE("maxKiv teszt", "mind negyativ")
{
    vector<vector<int> > v;
    string filename = "7.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(maxKiv(v)==0);
}

TEST_CASE("7 eset", "mind nagy")
{
    vector<vector<int> > v;
    string filename = "8.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(feldolgozas(v)==0);
}

TEST_CASE("8 eset", "mind nagy")
{
    vector<vector<int> > v;
    string filename = "9.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(feldolgozas(v)==2);
}

TEST_CASE("9 eset", "mind nagy")
{
    vector<vector<int> > v;
    string filename = "10.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(feldolgozas(v)==2);
}

TEST_CASE("10 eset", "mind nagy")
{
    vector<vector<int> > v;
    string filename = "11.txt";
    int n,m;

    FillMatriFromFile(v,filename);
    CHECK(feldolgozas(v)==1);
}
