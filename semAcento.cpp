//Kalil Saldanha Kaliffe
#include <iostream>
#include <string>
#include "semAcento.h"
using namespace std;

string semAcento (string comAcento){
  
  string semAcento="";
  string ASCIIAcento= "ÄÅÁÂÀÃäáâàãÉÊËÈéêëèÍÎÏÌíîïìÖÓÔÒÕöóôòõÜÚÛüúûùÇç";
  string ASCIIsemAcento= "AAAAAAaaaaaEEEEeeeeIIIIiiiiOOOOOoooooUUUuuuuCc";
  int aux=0;
  int aux2=0;
  
  for(int k = 0; k<comAcento.length(); ++k){
    if(comAcento[k]>0){
        semAcento += comAcento[k];
      }

    for(int i = 0 ; i<ASCIIAcento.length(); ++i){
      if (ASCIIAcento[0]!=comAcento[k] && comAcento[k] == ASCIIAcento[i])
      {
        semAcento += ASCIIsemAcento[i/2];
      } 
      
    }
  }

  cout<<"\n semAcento: ";
  return semAcento;
}








