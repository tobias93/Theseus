/**
*  @Author: Leon Mutschke
*/


#ifndef _THESEUS_GAME_OBJECTS_GLASER_H
#define _THESEUS_GAME_OBJECTS_GLASER_H

#include "../engine/gameobject.hpp"
#include "../engine/components/update.hpp"
#include "../engine/components/animation.hpp"
#include "../engine/components/speed.hpp"
#include <SFML/System.hpp>
#include "character.hpp"

namespace theseus
{
	namespace gameobjects
	{
		class Glaser
			: public Character
			, public virtual engine::components::Update
			, public virtual engine::components::Animation
			, public virtual engine::components::Speed
		{
		private:
			// events
			void onUpdate(float passedTime);
			float time_passed = 0;
			void onCollision(const theseus::engine::components::Solide&);
			void changeDirection();

		public:
			//---- Constructor --------------------------------------------------------------------------------------

			Glaser();

			//---- Destructor ---------------------------------------------------------------------------------------

			virtual ~Glaser();
		};
	}
}

#endif
