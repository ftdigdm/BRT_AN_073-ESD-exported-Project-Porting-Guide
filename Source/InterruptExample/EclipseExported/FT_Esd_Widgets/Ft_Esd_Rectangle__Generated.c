/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Rectangle
C Source
*/

/*
Comment :
Introduction:
This widget draws a rectangle.
Fill color is taken from "Color" property.
*/

#include "Ft_Esd_Rectangle.h"

#include "Esd_Context.h"
#include "FT_Esd_Primitives.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
ft_int32_t Ft_Esd_Rectangle_Radius__Default(void *context) { return 4L; }
ft_argb32_t Ft_Esd_Rectangle_Color__Default(void *context) { return 0xffffffffUL; }


static Ft_Esd_WidgetSlots s_Ft_Esd_Rectangle__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Rectangle_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Widget_End,
};


void Ft_Esd_Rectangle__Initializer(Ft_Esd_Rectangle *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Rectangle_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Rectangle__Slots;
	context->Widget.LocalX = 33;
	context->Widget.LocalY = 42;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->Radius = Ft_Esd_Rectangle_Radius__Default;
	context->Color = Ft_Esd_Rectangle_Color__Default;
}


static int Ft_Esd_Rectangle_RadiusValue(Ft_Esd_Rectangle *context, ft_int32_t inputRadius);

void Ft_Esd_Rectangle_Render(Ft_Esd_Rectangle *context)
{
	void *owner = context->Owner;
	ft_int16_t x = context->Widget.GlobalX;
	ft_int16_t y = context->Widget.GlobalY;
	ft_int16_t width = context->Widget.GlobalWidth;
	ft_int16_t height = context->Widget.GlobalHeight;
	ft_int32_t inputRadius = context->Radius(owner);
	int radius = Ft_Esd_Rectangle_RadiusValue(context, inputRadius);
	ft_argb32_t color = context->Color(owner);
	Ft_Esd_Render_Rectangle(x, y, width, height, radius, color);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context);
}

static int Ft_Esd_Rectangle_RadiusValue(Ft_Esd_Rectangle *context, ft_int32_t inputRadius)
{
	void *owner = context->Owner;
	if (inputRadius == 0)
	return 1;
	else
	return inputRadius;
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_Rectangle Instance;
	ft_int32_t Radius;
	ft_argb32_t Color;
} Ft_Esd_Rectangle__ESD;

ft_int32_t Ft_Esd_Rectangle__Get_Radius__ESD(void *context) { return ((Ft_Esd_Rectangle__ESD *)context)->Radius; }
void Ft_Esd_Rectangle__Set_Radius__ESD(void *context, ft_int32_t value) { ((Ft_Esd_Rectangle__ESD *)context)->Radius = value; }
ft_argb32_t Ft_Esd_Rectangle__Get_Color__ESD(void *context) { return ((Ft_Esd_Rectangle__ESD *)context)->Color; }
void Ft_Esd_Rectangle__Set_Color__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_Rectangle__ESD *)context)->Color = value; }

void *Ft_Esd_Rectangle__Create__ESD()
{
	Ft_Esd_Rectangle__ESD *context = (Ft_Esd_Rectangle__ESD *)malloc(sizeof(Ft_Esd_Rectangle__ESD));
	if (context)
	{
		Ft_Esd_Rectangle__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->Radius = 4L;
		context->Instance.Radius = Ft_Esd_Rectangle__Get_Radius__ESD;
		context->Color = 0xffffffffUL;
		context->Instance.Color = Ft_Esd_Rectangle__Get_Color__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_Rectangle__Create__ESD)");
	}
	return context;
}

void Ft_Esd_Rectangle__Destroy__ESD(void *context)
{
	free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */
