#include <iostream>
#include <SFML/Graphics.hpp>

int main (){
   sf::RenderWindow window(sf::VideoMode(400, 700), "Falopinha Bird");
   window.setFramerateLimit(60);
    while(window.isOpen()){
  
        while(true) {
            sf::Event event;
            while(window.pollEvent(event)){
                if(event.type==sf::Event::Closed){
                    window.close();
                    return 0;
                }

            }
            window.clear();
            window.display();
            

        }
    }
    return 0;
}