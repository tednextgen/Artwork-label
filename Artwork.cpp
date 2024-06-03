#include "Artwork.h"
#include <iostream>
Artwork::Artwork(){
      title = "unknown";
      yearCreated = -1;
   }
Artwork::Artwork(string sup, int bruh, Artist gey){
   title = sup;
   yearCreated = bruh;
   artist = gey;
   }
   string Artwork::GetTitle(){
      return title;
   }
   int Artwork::GetYearCreated(){
      return yearCreated;
   }
   void Artwork::PrintInfo(){
      artist.PrintInfo();
      cout << "Title: " << title << ", " << yearCreated << endl;
   }
