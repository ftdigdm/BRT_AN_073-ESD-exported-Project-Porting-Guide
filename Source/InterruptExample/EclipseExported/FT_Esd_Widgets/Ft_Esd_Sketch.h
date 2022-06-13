/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Sketch
Header
*/

#ifndef Ft_Esd_Sketch__H
#define Ft_Esd_Sketch__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_BitmapInfo.h"
#include "Ft_Esd_Math.h"
#include "Ft_Esd_TouchTag.h"
#include "Ft_Esd_Widget.h"

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

#define Ft_Esd_Sketch_CLASSID 0x30D5A2C6
ESD_SYMBOL(Ft_Esd_Sketch_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Ft_Esd_Sketch, Include = "Ft_Esd_Sketch.h", Callback, DisplayName = "ESD Sketch", Category = EsdWidgets, X = 50, Y = 50, Width = 200, Height = 150)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_VARIABLE(BitmapCell, DisplayName = "OutputBitmap", Type = Ft_Esd_BitmapCell, ReadOnly)
	Ft_Esd_BitmapCell BitmapCell;
	ESD_SIGNAL(Changed)
	void(* Changed)(void *context);
	ESD_VARIABLE(BitmapInfo, Type = Ft_Esd_BitmapInfo, Private)
	Ft_Esd_BitmapInfo BitmapInfo;
	ESD_VARIABLE(PenColor, Type = ft_argb32_t, Public)
	ft_argb32_t PenColor;
	ft_uint32_t Watch_Variables_2__0;
	ft_bool_t Watch_Variables_2__1;
	ft_uint16_t Watch_Variables_2__2;
	ft_uint16_t Watch_Variables_2__3;
	ft_uint16_t Watch_Variables__0;
	ft_uint16_t Watch_Variables__1;
	ESD_VARIABLE(MinWidth, Type = ft_int16_t, Min = 0, Public)
	ft_int16_t MinWidth;
	ESD_VARIABLE(MinHeight, Type = ft_int16_t, Min = 0, Public)
	ft_int16_t MinHeight;
	Ft_Esd_TouchTag Touch_Tag;
} Ft_Esd_Sketch;

void Ft_Esd_Sketch__Initializer(Ft_Esd_Sketch *context);

ESD_SLOT(Start)
void Ft_Esd_Sketch_Start(Ft_Esd_Sketch *context);

ESD_SLOT(Update)
void Ft_Esd_Sketch_Update(Ft_Esd_Sketch *context);

ESD_SLOT(End)
void Ft_Esd_Sketch_End(Ft_Esd_Sketch *context);

ESD_SLOT(Render)
void Ft_Esd_Sketch_Render(Ft_Esd_Sketch *context);

ESD_SLOT(Clear)
void Ft_Esd_Sketch_Clear(Ft_Esd_Sketch *context);

ESD_SLOT(Disable)
void Ft_Esd_Sketch_Disable(Ft_Esd_Sketch *context);

#endif /* Ft_Esd_Sketch__H */

/* end of file */
