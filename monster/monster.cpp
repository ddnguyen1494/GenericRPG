/********************************************************************************
File name: monster.cpp
Written by: Daniel Nguyen
Written on 08/27/2016
Purpose: This is a c++ file containing classes for all monsters

Class: CPSC 362
*********************************************************************************/

#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
	
/*********************************************************************
This is the base class for all enemies. It include title, skills, hp,
exp. Item drops haven't been implemented.
*********************************************************************/
class Enemy{
	protected:
        string name;
		int hp;
		int exp;
		int min_atk;
		int max_atk;
		string description;
	public:
		//Accessor functions for hp
		void set_hp(int num){ hp = num;}
		int get_hp(){return hp;}
		
		//Accessor functions for exp
		int get_exp(){return exp;}
		
		//Accessor function for min_atk
		void set_min_atk(int num){min_atk = num;}
		
		//Accessor function for max_atk
		void set_max_atk(int num){max_atk = num;}
		
		
		//Function for attacks that randomize number between minimum atk and maximum atk
        //The function also ouputs the attack command
		int attack(){
			//Use time function to get a "seed" value for srand
			unsigned seed = time(0);
			srand(seed);
			//Generate and return a random number between min_atk and max_atk
			int range = max_atk - min_atk;
            int atk_damage = rand() % range + min_atk;
            cout << name << " deals " << atk_damage << " damage." << endl;
            return atk_damage;
		}
    
        //Function that takes an int as argument and subtract it from the monster's hp
        void take_damage(int damage){
            hp = hp - damage;
            cout << name << " takes " << damage <<" damage." << endl;
            cout << name << "'s HP: " << hp << endl;
        }

    

};

/************************************************************************
The following classes contain information about different monster.
Again, skills haven't been implemented.
*************************************************************************/
class Hedgehog : public Enemy
{
	public:
		Hedgehog(){
            this->name= "Hedgehog";
			this->hp = 50;
			this->exp = 2;
			this->min_atk = 7;
			this->max_atk = 10;
			this->description = "Small, spiny monster that shoots spiens at enemies";
		}
};

class Dead_Tree: public Enemy
{
	public:
		Dead_Tree(){
            this->name = "Dead_Tree";
			this->hp = 95;
			this->exp = 5;
			this->min_atk =9;
			this->max_atk =12;
			this->description = "A tree monster. The feature and sound that it makes "
								"are incredibly eerie";
			}
};

class Giant_Frog :public Enemy
{
	public:
		Giant_Frog(){
            this->name = "Giant Frog";
			this->hp = 133;
			this->exp = 6;
			this->min_atk = 11;
			this->max_atk =14;
			this->description="A mutant frog that is 5 times the size of normal frog."
                            " It makes annoying sounds.";
		}
};

class Roach_Egg : public Enemy
{
	public:
		Roach_Egg(){
            this->name = "Roach Egg";
			this->hp = 48;
			this->exp =8;
			this->min_atk = 0;
			this->max_atk = 0;
			this->description="It hatches into several Roaches It makes "
							"horrible omelette.";
		}
};

class CockRoach : public Enemy
{
	public:
		CockRoach(){
            this->name = "Cockroach";
			this->hp=126;
			this->exp = 17;
			this->min_atk = 18;
			this->max_atk =24;
			this->description="Dirty, filthy creatures that tend to work in swarms.";
		}
};

class Skeleton : public Enemy
{
	public:
		Skeleton(){
            this->name = "Skeleton";
			this->hp = 234;
			this->exp =18;
			this->min_atk = 39;
			this->max_atk = 47;
			this->description="A skeleton of a dead person who had died holding "
							"a grudge. It's undead so of course it hates living things.";
		}
};

class Violinist : public Enemy
{
	public:
		Violinist(){
            this->name = "Violinist";
			this->hp =198;
			this->exp =20;
			this->min_atk = 24;
			this->max_atk = 29;
			this->description = "A long-horned grass hopper of a romantic turn of mind,"
							" that always play a violin. Most consider him as the main "
							"culprit for noise.";
		}
};

class GruBat: public Enemy
{
	public:
		GruBat(){
            this->name="GruBat";
			this->hp=155;
			this->exp =28;
			this->min_atk = 20;
			this->max_atk = 28;
			this->description = "A gray bat that's not very strong, but annoying because"
							" it attacks very fast and relentlessly pursuits passerby";
		}
};

class Arthropod : public Enemy
{
	public:
		Arthropod(){
            this->name="Arthropod";
			this->hp = 507;
			this->exp =38;
			this->min_atk = 28;
			this->max_atk = 37;
			this->description = "Kukre is a small bug living near the beach.";
		}
};

class Zombie : public Enemy
{
	public:
		Zombie(){
            this->name="Zombie";
			this->hp = 534;
			this->exp =50;
			this->min_atk = 67;
			this->max_atk = 79;
			this->description = "A walking curse which has been cursed by an evil shaman."
								" Beware of its poisonous breath.";
		}
};


class Roddent_Tail : public Enemy
{
	public:
		Roddent_Tail(){
            this->name ="Roddent Tail";
			this->hp = 426;
			this->exp =59;
			this->min_atk = 42;
			this->max_atk = 51;
			this->description = "A roddent that uses whipping attacks with a "
								"tail that looks like a blade of grass.";
		}
};

class Poison_Hedgehog : public Enemy
{
	public:
		Poison_Hedgehog(){
            this->name = "Poison Hedgehog";
			this->hp = 344;
			this->exp =81;
			this->min_atk = 59;
			this->max_atk = 72;
			this->description = "A kind of Hedgehog living in the swarm. It is covered "
								"with poisonous elastic skins all around the body.";
		}
};

class Steel_Fly : public Enemy
{
	public:
		Steel_Fly(){
            this->name="Steel Fly";
			this->hp = 530;
			this->exp =109;
			this->min_atk = 54;
			this->max_atk = 65;
			this->description = "A kind of fly that has a firm shell covering its body.";
		}
};

class Crazy_Squirrel : public Enemy
{
	public:
		Crazy_Squirrel(){
            this->name="Crazy Squrirrel";
			this->hp = 817;
			this->exp =120;
			this->min_atk = 56;
			this->max_atk = 67;
			this->description = "A small squirrel that is not that strong but very fast."
								" It has dark piercing eyes and is always holding an Acorn.";
		}
};

class Horn : public Enemy
{
	public:
		Horn(){
            this->name="Horn";
			this->hp = 659;
			this->exp =134;
			this->min_atk = 58;
			this->max_atk = 69;
			this->description = "A giant ground beetle that never cares about things"
				" going around except its business. When it's threatened, it uses sciccor-like"
				" mandibles to attack enemies.";
		}
};

class Fire_Ant : public Enemy
{
	public:
		Fire_Ant(){
            this->name="Fire Ant";
			this->hp = 760;
			this->exp =135;
			this->min_atk = 68;
			this->max_atk = 79;
			this->description = "A kind of ant of red color. They live in group and are "
							"very cooperative to attack.";
		}
};

int main(){
    Horn newHorn;
    newHorn.attack();
    newHorn.take_damage(200);
    return 0;
}


		
		
		
		

