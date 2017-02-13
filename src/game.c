#include<gb/gb.h>
//---------------------INITIALIZATION-------------------------
#define BIRD_GRAVITY 35
//Different possible states in game
typedef enum _GameState
{
	GAME_STATE_INTRO=0;
	GAME_STATE_GAME=1;
	GAME_STATE_DEAD=2;
} GameState;

//To define the location of sprite on screen
typedef enum _SpriteLayoutOnScreen
{
	BIRD_SPACE=0;
	PIPE_SPACE=2;
	SCORE_SPACE=2+21;
} SpriteLayout;

typedef struct _Pipe
{
	UINT8 x;
	UINT8 gap;
	UINT8 size;
	UINT8 top_y;
	UINT8 bottom_y;
	
	BOOLEAN counted
} Pipe;

//Initial game state
GameState _gameState=GAME_STATE_INTRO;
//Game Score
UINT8 _gameScore; 
//Game object for Pipe
Pipe pipe;
//-------------------------------------------------------------
//-----------------------METHODS-------------------------------
void MoveBird()
{
	move_sprite(0,bird_x,bird_y);
	move_sprite(1,bird_x+8,bird_y);
}

void SetupBird()
{
	
}

