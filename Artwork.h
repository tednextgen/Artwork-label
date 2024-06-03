#ifndef ARTWORKH
#define ARTWORKH
#include "Artist.h"

class Artwork{
   public:
      Artwork();
      Artwork(string sup, int bruh, Artist gey);
      string GetTitle();
      int GetYearCreated();
      void PrintInfo();
   
   private:
   string title;
   int yearCreated;
   Artist artist;

};
#endif
