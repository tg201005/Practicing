#include "ClapTrap.hpp"

int main(){
    ClapTrap a("a");
    ClapTrap b("b");
    ClapTrap c("c");
    
    a.attack("b");
    b.takeDamage(2);
    b.print_status();
    b.beRepaired(1);
    b.print_status();

    
    b.takeDamage(10);
    b.beRepaired(10);
    b.attack("a");
    b.print_status(); 


}