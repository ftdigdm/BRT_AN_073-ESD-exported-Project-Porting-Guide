/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_TouchArea
Header
*/

#ifndef Ft_Esd_TouchArea__H
#define Ft_Esd_TouchArea__H

#include "Esd_Base.h"
#include "Ft_DataTypes.h"
#include "Ft_Esd.h"

#ifndef ESD_LOGIC
#define ESD_LOGIC(name, ...)
#define ESD_ACTOR(name, ...)
#define ESD_WIDGET(name, ...)
#define ESD_PAGE(name, ...)
#define ESD_APPLICATION(name, ...)
#define ESD_INPUT(name, ...)
#define ESD_OUTPUT(name, ...)
#define ESD_SLOT(name, ...)
#define ESD_SIGNAL(name, ...)
#define ESD_VARIABLE(name, ...)
#define ESD_WRITER(name, ...)
#endif

/* Utility for managing touch area. Create one instance for each touch area you need to handle */
ESD_ACTOR(Ft_Esd_TouchArea, Include = "Ft_Esd_TouchArea.h", Callback, DisplayName = "Touch Area", Category = EsdUtilities, Icon = ":/icons/hand-point-090.png")
typedef struct
{
	void *Owner;
	ESD_SIGNAL(Up)
	void(* Up)(void *context);
	ESD_VARIABLE(LastTouching, Type = ft_bool_t, Private)
	ft_bool_t LastTouching;
	ESD_SIGNAL(Down)
	void(* Down)(void *context);
	/* Set while touching and touch started inside this touch area */
	ESD_VARIABLE(Touching, Type = ft_bool_t, ReadOnly)
	ft_bool_t Touching;
	ESD_INPUT(X, Type = int)
	int(* X)(void *context);
	ESD_INPUT(Y, Type = int)
	int(* Y)(void *context);
	ESD_INPUT(Width, Type = int)
	int(* Width)(void *context);
	ESD_INPUT(Height, Type = int)
	int(* Height)(void *context);
} Ft_Esd_TouchArea;

void Ft_Esd_TouchArea__Initializer(Ft_Esd_TouchArea *context);

ESD_SLOT(Update)
void Ft_Esd_TouchArea_Update(Ft_Esd_TouchArea *context);

ESD_OUTPUT(Inside, Type = ft_bool_t)
ft_bool_t Ft_Esd_TouchArea_Inside(Ft_Esd_TouchArea *context);

ESD_OUTPUT(Hover, Type = ft_bool_t)
ft_bool_t Ft_Esd_TouchArea_Hover(Ft_Esd_TouchArea *context);

ESD_OUTPUT(TouchX, Type = ft_int16_t)
ft_int16_t Ft_Esd_TouchArea_TouchX(Ft_Esd_TouchArea *context);

ESD_OUTPUT(TouchY, Type = ft_int16_t)
ft_int16_t Ft_Esd_TouchArea_TouchY(Ft_Esd_TouchArea *context);

#endif /* Ft_Esd_TouchArea__H */

/* end of file */
