#include <iostream>

void func1 () {

std::cout<<"Function 1";
//return;
}

void func2 () {

std::cout<<"Function 2";
//return;
}


int main(int argc, char *argv[]){

std::cout<<"Test1 "<<argc<<"Test 2""\n";

for (int i=1; i<=(argc-1); i++) 
{
std::cout<<"I="<<i<<"\n";
std::cout<<"ArgS"<<argv[i]<<"ArgvE"<<"\n";
if (i==(argc-1)) std::cout<<"String "<<argv[i]<<"\n";

}

if (argv[argc-1][0]=='5') {std::cout<<"Found 5"; func1();}

if (argv[argc-1][0]=='6') {std::cout<<"Found 6"; func2();}


//std::cin.get();
//std::cin.get();

std::cout <<"\n"<<"End of Program"<<"\n";

}