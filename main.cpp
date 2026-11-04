#include<optional>
#include<SFML/Graphics.hpp>
using namespace std;
int main(){
    sf::RenderWindow window(
        sf::VideoMode({1280,720}),
        "Zombie Survival"
    );

    window.setFramerateLimit(60);

    while(window.isOpen()){
        while(const std::optional event = window.pollEvent()){
            if(event->is<sf::Event::Closed>()){
                window.close();
            }
        }

        window.clear(sf::Color(25,25,25));

        window.display();
    }

    return 0;
}