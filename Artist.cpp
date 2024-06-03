#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

Artist::Artist(){
   artistName = "unknown";
   birthYear = -1;
   deathYear = -1;
}
Artist::Artist(string lol, int yo, int da){
   artistName = lol;
   birthYear = yo;
   deathYear = da;
}
string Artist::GetName() const{
   return artistName;
}
int Artist::GetBirthYear() const {
   return birthYear;
}
int Artist::GetDeathYear() const{
   return deathYear;
}
void Artist::PrintInfo() const{
   if(deathYear == -1 && birthYear != -1){
      cout << "Artist: " << artistName << " (" << birthYear << " to present)" << endl;
   }else if(birthYear != -1 && deathYear != -1){
      cout << "Artist: " << artistName << " (" << birthYear << " to " << deathYear << ")"<< endl;
   }else{
      cout << "Artist: " << artistName << " (unknown)" << endl;
   }
}
