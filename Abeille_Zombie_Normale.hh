#pragma once
#include <string>
#include "Abeille_Zombie.hh"

class Abeille_Zombie_Normale : public Abeille_Zombie{
	public:
		Abeille_Zombie_Normale(int x, int y, int pv, int atk_spd, int mvmt_spd) : Abeille_Zombie(x, y, pv, atk_spd, mvmt_spd){
			texture = sf::Texture();
			texture.loadFromFile("zombie.png");           // Chargement de la texture à partir d'un fichier
			sprite = sf::Sprite(texture);
			sprite.setRotation(rotation);
			str_texture = "zombie.png";
		};
		Abeille_Zombie_Normale(int x, int y) : Abeille_Zombie_Normale(x, y, 100, 10, 8){};
		Abeille_Zombie_Normale() : Abeille_Zombie_Normale(176, 756, 100, 15, 8){};
		~Abeille_Zombie_Normale(){};

};
