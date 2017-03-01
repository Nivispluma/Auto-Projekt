#pragma once
//---------------------------------------------------------------------------
using namespace System::Drawing;
using namespace System;
ref class Fahrer 
 {
  private:
   // Attribute
    Color haut; //deklaration Farben
	Color augen;
    int grosse; //deklaration größe
  public:
    Fahrer(Color h, Color a, int g); //überladener Konstruktor
    void zeigen(Graphics^ c, int x, int y);
 };

