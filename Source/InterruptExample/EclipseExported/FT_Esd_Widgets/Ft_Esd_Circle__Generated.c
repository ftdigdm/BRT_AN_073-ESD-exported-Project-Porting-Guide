/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Circle
C Source
*/

/*
Comment :
Introduction:
This widget simply draws a circle. Color argument is used to fill itself.
*/

#include "Ft_Esd_Circle.h"

#include "Esd_Context.h"
#include "Ft_Esd_Elements.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);


static Ft_Esd_WidgetSlots s_Ft_Esd_Circle__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Circle_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Widget_End,
};


void Ft_Esd_Circle__Initializer(Ft_Esd_Circle *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Circle_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Circle__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->Color = 0xffffffffUL;
}

void Ft_Esd_Elements_CircleFlat(ft_argb32_t, ft_int16_t, ft_int16_t, ft_int16_t);

void Ft_Esd_Circle_Render(Ft_Esd_Circle *context)
{
	void *owner = context->Owner;
	ft_argb32_t color = context->Color;
	ft_int16_t left = context->Widget.GlobalX;
	ft_int16_t left_1 = context->Widget.GlobalWidth;
	int right_1 = 2L;
	int right = left_1 / right_1;
	int x = left + right;
	ft_int16_t left_2 = context->Widget.GlobalY;
	ft_int16_t left_3 = context->Widget.GlobalHeight;
	int right_3 = 2L;
	int right_2 = left_3 / right_3;
	int y = left_2 + right_2;
	ft_int16_t left_5 = context->Widget.GlobalWidth;
	int right_4 = 2L;
	int left_4 = left_5 / right_4;
	ft_int16_t left_6 = context->Widget.GlobalHeight;
	int right_6 = 2L;
	int right_5 = left_6 / right_6;
	int if_1 = left_4 >= right_5;
	int radius;
	if (if_1)
	{
		ft_int16_t left_7 = context->Widget.GlobalHeight;
		int right_7 = 2L;
		radius = left_7 / right_7;
	}
	else
	{
		ft_int16_t left_8 = context->Widget.GlobalWidth;
		int right_8 = 2L;
		radius = left_8 / right_8;
	}
	Ft_Esd_Elements_CircleFlat(color, x, y, radius);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_Circle Instance;
} Ft_Esd_Circle__ESD;


void *Ft_Esd_Circle__Create__ESD()
{
	Ft_Esd_Circle__ESD *context = (Ft_Esd_Circle__ESD *)malloc(sizeof(Ft_Esd_Circle__ESD));
	if (context)
	{
		Ft_Esd_Circle__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_Circle__Create__ESD)");
	}
	return context;
}

void Ft_Esd_Circle__Destroy__ESD(void *context)
{
	free(context);
}

void Ft_Esd_Circle__Set_Color__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_Circle__ESD *)context)->Instance.Color = value; }

#endif /* ESD_SIMULATION */

/* end of file */
