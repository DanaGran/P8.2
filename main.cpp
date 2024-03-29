#include <iostream>
#include <vector>



int main(){
    std::vector<std::string>NR1;
    std::vector<std::string>NR2;
    std::vector<std::string>NR3;
    std::string Nume;
    int numar;

    while( std::cin>>Nume>>numar){

        if(numar==1 )NR1.push_back( Nume );
        else if( numar==2) NR2.push_back( Nume );
        else NR3.push_back( Nume );

    }

    int minim;
    if( minim> NR1.size() ) minim=NR1.size();
    if( minim> NR2.size() ) minim=NR2.size();
    if( minim> NR3.size() ) minim=NR3.size();

    for( int i =0 ; i< minim ;i++) std::cout<<NR1[i]<<" "<<NR2[i]<<" "<<NR3[i]<<std::endl;

    return 0;
}