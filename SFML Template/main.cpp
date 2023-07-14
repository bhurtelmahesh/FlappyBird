//#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.hpp"
#include "DEFINITIONS.hpp"
//
//
//#define SCREEN_WIDTH 1024
//#define SCREEN_HEIGHT 1024



int main(){
    Bhurtel::Game(SCREEN_WIDTH,SCREEN_HEIGHT,"Flappy Bird");
//    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Awesome Game");
//
//    while (window.isOpen()) {
//        //handle input/events
//        sf::Event event;
//
//        while(window.pollEvent(event)){
//            switch (event.type) {
//                case sf::Event::Closed:
//                    window.close();
//                    break;
//            }
//        }
//
//        //Update logic
//        window.clear();
//
//        //draw the objects
//        window.display();
//    }
    return EXIT_SUCCESS;
}
