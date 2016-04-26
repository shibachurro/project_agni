#pragma once
#include "stdafx.h"


/////////////////////////////////////////////////
///	@file GoalSprite.h
/////////////////////////////////////////////////





/////////////////////////////////////////////////
/// @class GoalSprite
///	@brief end of level sprite
///
/////////////////////////////////////////////////
class GoalSprite : public VisibleObject{
public:

	////////////////////////////////
	//CONSTRUCTORS DESTRUCTORS

	/// Constructor
	GoalSprite();
	/// Destructor
	~GoalSprite();


	////////////////////////////////
	//DRAW METHODS
	

	////////////////////////////////////////////
	/// @brief		function to draw objects in
	///				window
	/// @param[in]	rw A sf::RenderWindow object
	////////////////////////////////////////////
	void draw(sf::RenderWindow& rw);





private:

	////////////////////////////////
	//ATTRIBUTES


	sf::Vector2f _position;



	
};