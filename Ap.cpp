#include <iostream>
#include <string>

using namespace std;
static std::string splce(std::string obj,int splicer){
   int newl = obj.length()/ splicer;
   std::string kl = obj.substr(0,newl);
   return kl;
}
int main(){
   std::string g;
   std::string end;
   int gi;
   string hl;
   std::cout << "give me a number ";
   getline(std::cin,g);
   gi = stoi(g);
   std::cout << "give me a string ";
   getline(cin,hl);
   end = splce(hl,gi);
   std::cout << end;
}