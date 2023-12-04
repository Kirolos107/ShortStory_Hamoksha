#include "STD_TYPES.h"
#include "util/delay.h"

#include "DIO_interface.h"
#include "CLCD_interface.h"

void ShortMovie_voidTrailer(void);
void ShortMovie_voidRun(void);
void ShortMovie_voidPlay(void);
void ShortMovie_voidDance(void);
void Short_movie_voidKill(void);
void ShortMovie_TheEnd(void);

void main(void)
{
	DIO_u8SetPortDirection(DIO_u8PORTA,DIO_u8PORT_OUTPUT);
	CLCD_voidInit();

	ShortMovie_voidTrailer();
	CLCD_voidSendCmd(1);

	ShortMovie_voidRun();
	CLCD_voidSendCmd(1);

	ShortMovie_voidPlay();
	CLCD_voidSendCmd(1);

	ShortMovie_voidDance();
	CLCD_voidSendCmd(1);

	CLCD_voidGoToXY(0, 0);
	CLCD_u8SendString("Once a day, Hamo");
	CLCD_voidGoToXY(0, 1);
	CLCD_u8SendString("meets bad man");
	_delay_ms(2500);
	CLCD_voidSendCmd(1);

	CLCD_voidGoToXY(0, 0);
	CLCD_u8SendString("And,what happened");
	CLCD_voidGoToXY(0, 1);
	CLCD_u8SendString("was horrible !");
	_delay_ms(2500);
	CLCD_voidSendCmd(1);

	Short_movie_voidKill();
	CLCD_voidSendCmd(1);

	ShortMovie_TheEnd();
	CLCD_voidSendCmd(1);
}



void ShortMovie_voidTrailer(void)
{
	uint8 Local_au8Stand1[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00001110, 0b00010101, 0b00010101, 0b00000100};
	uint8 Local_au8Stand2[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00001010, 0b00010001, 0b00000000, 0b00000000};

	/* The trailer */
	CLCD_voidGoToXY(0, 0);
	CLCD_u8SendString("Now, Hamoksha is");
	CLCD_voidGoToXY(0, 1);
	CLCD_u8SendString("     come !!! ");
	_delay_ms(2000);
	CLCD_voidSendCmd(1);

	/* Hamoksha introduces him self */
	CLCD_voidGoToXY(0, 0);
	CLCD_u8SendString("Hi, I'm");
	CLCD_voidGoToXY(0, 1);
	CLCD_u8SendString("Hamoksha !");

	CLCD_u8SendSpecialCharacter(1, Local_au8Stand1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Stand2, 13, 1);
	_delay_ms(2000);
	CLCD_voidSendCmd(1);
}

void ShortMovie_voidRun(void)
{
	/* Hamoksha can run */
	uint8 Local_au8Run1[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00000101, 0b00001110, 0b00010100, 0b00000100};
	uint8 Local_au8Run2[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00001010, 0b00011001, 0b00000001, 0b00000000};

	uint8 Local_au8Run3[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00000101, 0b00001110, 0b00010100, 0b00000100};
	uint8 Local_au8Run4[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00001011, 0b00001001, 0b00010000, 0b00000000};

	CLCD_voidGoToXY(0, 0);
	CLCD_u8SendString("I can");
	CLCD_voidGoToXY(0, 1);
	CLCD_u8SendString("run '-'");

	CLCD_u8SendSpecialCharacter(1, Local_au8Run1, 8, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Run2, 8, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(8,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(8,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Run3, 9, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Run4, 9, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(9,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(9,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Run1, 10, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Run2, 10, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(10,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(10,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Run3, 11, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Run4, 11, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(11,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(11,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Run1, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Run2, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Run3, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Run4, 13, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Run1, 14, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Run2, 14, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(14,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(14,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Run3, 15, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Run4, 15, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(15,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(15,1);
	CLCD_voidSendData(' ');
}

void ShortMovie_voidPlay(void)
{
	uint8 Local_au8Play1[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00000100, 0b00001110, 0b00010101, 0b00000100};
	uint8 Local_au8Play2[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00011010, 0b00000001};
	uint8 Local_au8Play3[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00011011, 0b00000001};
	uint8 Local_au8Play4[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000101, 0b00011010, 0b00000001};
	uint8 Local_au8Play5[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000101, 0b00000100, 0b00011010, 0b00000001};
	uint8 Local_au8Play6[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000101, 0b00000100, 0b00000100, 0b00011010, 0b00000001};
	uint8 Local_au8Play7[8] = {0b00000100, 0b00000100, 0b00000101, 0b00000100, 0b00000100, 0b00000100, 0b00011010, 0b00000001};

	/* Hamoksha can play football */
	CLCD_voidGoToXY(0, 0);
	CLCD_u8SendString("I can play");
	CLCD_voidGoToXY(0, 1);
	CLCD_u8SendString(" football");

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play2, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play3, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play4, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play5, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play6, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play7, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play7, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play6, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play5, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play4, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play3, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play2, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play3, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play4, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play5, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play6, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play7, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play7, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play6, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play5, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play4, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Play1, 13, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Play3, 13, 1);
	_delay_ms(150);
	CLCD_voidGoToXY(13,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(13,1);
	CLCD_voidSendData(' ');
}

void ShortMovie_voidDance(void)
{
	/* Hamoksha can dance */
	uint8 Local_au8Dance1D[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00000100, 0b00011111, 0b00010101, 0b00000100};
	uint8 Local_au8Dance1U[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00010101, 0b00011111, 0b00000100, 0b00000100};

	uint8 Local_au8Dance3[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00000101, 0b00011111, 0b00010100, 0b00000100};
	uint8 Local_au8Dance4[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00010100, 0b00011111, 0b00000101, 0b00000100};
	uint8 Local_au8Dance5[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00010100, 0b00011111, 0b00000101, 0b00000100};

	uint8 Local_au8DanceLeft[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00001010, 0b00001010, 0b00000000};
	uint8 Local_au8DanceRight[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00001010, 0b00011011, 0b00000000};


	CLCD_voidGoToXY(0, 0);
	CLCD_u8SendString("I can");
	CLCD_voidGoToXY(0, 1);
	CLCD_u8SendString("dance !");

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance1D, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceLeft, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance3, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceRight, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance4, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceLeft, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance5, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceRight, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance1D, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceLeft, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance1U, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceRight, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance1D, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceLeft, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance3, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceRight, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance4, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceLeft, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance5, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceRight, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance1D, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceLeft, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8Dance1U, 12, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8DanceRight, 12, 1);
	_delay_ms(300);
	CLCD_voidGoToXY(12,0);
	CLCD_voidSendData(' ');
	CLCD_voidGoToXY(12,1);
	CLCD_voidSendData(' ');
}

void Short_movie_voidKill(void)
{
	uint8 Local_au8Stand1[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00001110, 0b00010101, 0b00010101, 0b00000100};
	uint8 Local_au8Stand2[8] = {0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00001010, 0b00010001, 0b00000000, 0b00000000};

	uint8 Local_au8StandWeapon[8] = {0b00000100, 0b00001010, 0b00001010, 0b00000100, 0b00001111, 0b00010100, 0b00010100, 0b00000100};
	uint8 Local_au8Weapon[8] = {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00011110, 0b00011000, 0b00010000, 0b00000000};

	uint8 Local_au8Bullet[8] = {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00010000, 0b00000000, 0b00000000, 0b00000000};

//	uint8 Local_au8Die1[8] = {0b00000000, 0b00000000, 0b00000000, 0b00010000, 0b00001010, 0b00011101, 0b00001010, 0b00001000};
//	uint8 Local_au8Die2[8] = {0b00000000, 0b00000000, 0b00000000, 0b00010011, 0b00001011, 0b00000111, 0b00001000, 0b00010000};

	uint8 Local_au8Die3[8] = {0b00000000, 0b00000110, 0b00011001, 0b00000110, 0b00000000, 0b00000000, 0b00000000, 0b00000000};
	uint8 Local_au8Die4[8] = {0b00010000, 0b00001000, 0b00011111, 0b00001000, 0b00010000, 0b00000000, 0b00000000, 0b00000000};
	uint8 Local_au8Die5[8] = {0b00000000, 0b00000000, 0b00011111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000};
	uint8 Local_au8Die6[8] = {0b00000100, 0b00000100, 0b00000011, 0b00000100, 0b00001000, 0b00000000, 0b00000000, 0b00000000};

	CLCD_voidGoToXY(5, 0);
	CLCD_u8SendString("Don't Kill");
	CLCD_voidGoToXY(5, 1);
	CLCD_u8SendString("   me!");
	CLCD_u8SendSpecialCharacter(1, Local_au8Stand1, 15, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Stand2, 15, 1);

	CLCD_u8SendSpecialCharacter(3, Local_au8Stand1, 0, 0);
	CLCD_u8SendSpecialCharacter(4, Local_au8Stand2, 0, 1);

	_delay_ms(1000);
	uint8 Local_u8Iterator = 0u;
	for(Local_u8Iterator = 4; Local_u8Iterator < 15; Local_u8Iterator++)
	{
		CLCD_voidGoToXY(Local_u8Iterator, 0);
		CLCD_u8SendString(" ");
		CLCD_voidGoToXY(Local_u8Iterator, 1);
		CLCD_u8SendString(" ");
	}
	_delay_ms(1000);
	CLCD_voidGoToXY(2, 0);
	CLCD_u8SendString("Gameover");
	CLCD_voidGoToXY(2, 1);
	CLCD_u8SendString("Hamoksha!");

	_delay_ms(1000);
	for(Local_u8Iterator = 2; Local_u8Iterator < 15; Local_u8Iterator++)
	{
		CLCD_voidGoToXY(Local_u8Iterator, 0);
		CLCD_u8SendString(" ");
		CLCD_voidGoToXY(Local_u8Iterator, 1);
		CLCD_u8SendString(" ");
	}
	_delay_ms(1000);

	CLCD_u8SendSpecialCharacter(3, Local_au8StandWeapon, 0, 0);
	CLCD_u8SendSpecialCharacter(4, Local_au8Stand2, 0, 1);

	CLCD_u8SendSpecialCharacter(5, Local_au8Weapon, 1, 0);
	_delay_ms(500);

	for(Local_u8Iterator = 2; Local_u8Iterator < 15; Local_u8Iterator++)
	{
		_delay_ms(100);
		CLCD_u8SendSpecialCharacter(6, Local_au8Bullet, Local_u8Iterator, 0);
		if(Local_u8Iterator >= 3)
		{
			CLCD_voidGoToXY((Local_u8Iterator - 1), 0);
			CLCD_voidSendData(' ');
		}
	}

	_delay_ms(500);

	CLCD_voidGoToXY(15, 0);
	CLCD_voidSendData(' ');

	CLCD_voidGoToXY(15, 1);
	CLCD_voidSendData(' ');

	CLCD_voidGoToXY(14, 0);
	CLCD_voidSendData(' ');

	CLCD_u8SendSpecialCharacter(1, Local_au8StandWeapon, 0, 0);
	CLCD_u8SendSpecialCharacter(2, Local_au8Stand2, 0, 1);
	CLCD_u8SendSpecialCharacter(3, Local_au8Stand2, 0, 1);
	CLCD_u8SendSpecialCharacter(4, Local_au8Weapon, 1, 0);

	CLCD_u8SendSpecialCharacter(5, Local_au8Die3, 15, 1);
	CLCD_u8SendSpecialCharacter(6, Local_au8Die4, 14, 1);
	CLCD_u8SendSpecialCharacter(7, Local_au8Die5, 13, 1);
	CLCD_u8SendSpecialCharacter(8, Local_au8Die6, 12, 1);

	_delay_ms(2000);

	CLCD_voidSendCmd(1);

	CLCD_voidGoToXY(1, 0);
	CLCD_u8SendString("R.I.P");
	CLCD_voidGoToXY(1, 1);
	CLCD_u8SendString("Hamoksha!");

	CLCD_u8SendSpecialCharacter(1, Local_au8Die3, 15, 1);
	CLCD_u8SendSpecialCharacter(2, Local_au8Die4, 14, 1);
	CLCD_u8SendSpecialCharacter(3, Local_au8Die5, 13, 1);
	CLCD_u8SendSpecialCharacter(4, Local_au8Die6, 12, 1);

	_delay_ms(2000);
}

void ShortMovie_TheEnd(void)
{
	CLCD_voidGoToXY(0, 0);
	CLCD_u8SendString("   Created By");
	CLCD_voidGoToXY(0, 1);
	CLCD_u8SendString(" 'Kirolos Milad'");
	_delay_ms(2000);
	CLCD_voidSendCmd(1);
	CLCD_voidGoToXY(0, 0);
	CLCD_u8SendString("    Goodbye !");
	_delay_ms(2000);
	CLCD_voidSendCmd(1);
}
