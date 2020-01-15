#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun: car
 action 1: The car drives
 action 2: The car stops
 action 3: The car crashes violently 
 */
car.drive();
car.stop();
car.crashViolently();

/*
 2)
 Noun: shark
 action 1: the shark hunts for a meal
 action 2: The shark eats a meal
 action 3: The shark kills a prey
 */
shark.huntsForMeal();
shark.eatsMeal();
shark.killsPrey();
/*
 3)
 Noun: fish
 action 1: the fish eats algae
 action 2: the fish swims in sea
 action 3: the fish mates madly with lover
 */
fish.eatAlgae();
fish.swimInSea();
fish.mateWithLover();

/*
 4)
 Noun: plane
 action 1: the plane acsends to the sky
 action 2: the plane descends to the ground
 action 3: the plane crashes into the ground 
 */
plane.ascendToSky();
plane.descendToGround();
plane.crashIntoGround();

/*
 5)
 Noun: monkey
 action 1: the monkey climbs up
 action 2: the monkey climbs down 
 action 3: the monkey eats banana
 */
monkey.climbUp();
monkey.climbDown();
monkey.eatBanana();

/*
 6) snake
 Noun:
 action 1: snake stalks prey
 action 2: snake hisses
 action 3: snake bites prey
 */
snake.stalkPrey();
snake.hiss();
snake.bitePrey();
/*
 7)
 Noun:cow
 action 1: the cow grazes on grass
 action 2: the cow moos
 action 3: the cow sleeps
 */
cow.grazeOnGrass();
cow.moo();
cow.sleep();

/*
 8)
 Noun:gun
 action 1: the gun shoots at target
 action 2: the gun reloads
 action 3: the gun dismantles
 */
gun.shootTarget();
gun.reload();
gun.dismantle();


/*
 9)
 Noun: door
 action 1: the door opens
 action 2: the door closes
 action 3: the door locks
 */
door.open();
door.close();
door.lock();


/*
 10) fighter
 Noun:
 action 1: the fighter punches
 action 2: the fighter kicks
 action 3: the fighter grapples
 */
fighter.punch();
fighter.kick();
fighter.grapple();


#endif

#include <iostream>
int main()
{
	std::cout << "good to go!" << std::endl;
	return 0;
}
