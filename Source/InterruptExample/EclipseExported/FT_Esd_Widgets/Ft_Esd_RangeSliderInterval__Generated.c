/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_RangeSliderInterval
C Source
*/

#include "Ft_Esd_RangeSliderInterval.h"

#include "Esd_Context.h"
#include "Ft_Esd_Dl.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
Ft_Esd_Theme * Ft_Esd_RangeSliderInterval_Theme__Default(void *context) { return Ft_Esd_Theme_GetCurrent(); }
ft_int32_t Ft_Esd_RangeSliderInterval_Min__Default(void *context) { return 0L; }
ft_int32_t Ft_Esd_RangeSliderInterval_Max__Default(void *context) { return 100L; }
ft_int32_t Ft_Esd_RangeSliderInterval_Step__Default(void *context) { return 5L; }
ft_bool_t Ft_Esd_RangeSliderInterval_Marker_Lines__Default(void *context) { return 1; }


static Ft_Esd_WidgetSlots s_Ft_Esd_RangeSliderInterval__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_RangeSliderInterval_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_RangeSliderInterval_Update,
	(void(*)(void *))Ft_Esd_RangeSliderInterval_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_RangeSliderInterval_End,
};


void Ft_Esd_RangeSliderInterval__Touch_Tag__Initializer(Ft_Esd_RangeSliderInterval *context)
{
	Ft_Esd_TouchTag *object = (Ft_Esd_TouchTag *)&context->Touch_Tag;
	Ft_Esd_TouchTag__Initializer(object);
	object->Owner = (void *)context;
}

void Ft_Esd_RangeSliderInterval__Initializer(Ft_Esd_RangeSliderInterval *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_RangeSliderInterval_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_RangeSliderInterval__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 160;
	context->Widget.LocalHeight = 20;
	context->Theme = Ft_Esd_RangeSliderInterval_Theme__Default;
	context->inputLeft = 20L;
	context->inputRight = 80L;
	context->Min = Ft_Esd_RangeSliderInterval_Min__Default;
	context->Max = Ft_Esd_RangeSliderInterval_Max__Default;
	context->Step = Ft_Esd_RangeSliderInterval_Step__Default;
	context->Marker_Lines = Ft_Esd_RangeSliderInterval_Marker_Lines__Default;
	Ft_Esd_RangeSliderInterval__Touch_Tag__Initializer(context);
}

void updateLimits(Ft_Esd_RangeSliderInterval *context, int, int);
void updateFunction(Ft_Esd_RangeSliderInterval *context, int, int, int, int, int, int, int, int, int);
void RenderFunction(Ft_Esd_RangeSliderInterval *context, int, int, int, int, int, int, int, int, int, int, Ft_Esd_Theme *, int, ft_bool_t);

void Ft_Esd_RangeSliderInterval_Start(Ft_Esd_RangeSliderInterval *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_Start((Ft_Esd_Widget *)context);
	Ft_Esd_TouchTag_Start(&context->Touch_Tag);
}

void Ft_Esd_RangeSliderInterval_End(Ft_Esd_RangeSliderInterval *context)
{
	void *owner = context->Owner;
	Ft_Esd_TouchTag_End(&context->Touch_Tag);
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
}

void Ft_Esd_RangeSliderInterval_Update(Ft_Esd_RangeSliderInterval *context)
{
	void *owner = context->Owner;
	ft_int32_t min = context->Min(owner);
	ft_int32_t max = context->Max(owner);
	updateLimits(context, min, max);
	ft_bool_t if_1 = Ft_Esd_TouchTag_Touching(&context->Touch_Tag);
	if (if_1)
	{
		ft_int16_t GlobalWidgetX = context->Widget.GlobalX;
		ft_int16_t GlobalWidgetY = context->Widget.GlobalY;
		ft_int16_t WidgetWidth = context->Widget.GlobalWidth;
		ft_int16_t WidgetHeight = context->Widget.GlobalHeight;
		ft_int16_t TouchX = Ft_Esd_TouchTag_TouchX(&context->Touch_Tag);
		ft_int16_t TouchY = Ft_Esd_TouchTag_TouchY(&context->Touch_Tag);
		ft_int32_t min_1 = context->Min(owner);
		ft_int32_t max_1 = context->Max(owner);
		ft_int32_t step = context->Step(owner);
		updateFunction(context, GlobalWidgetX, GlobalWidgetY, WidgetWidth, WidgetHeight, TouchX, TouchY, min_1, max_1, step);
	}
	else
	{
	}
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context); 
}

int Ft_Esd_RangeSliderInterval_StartValue(Ft_Esd_RangeSliderInterval *context)
{
	void *owner = context->Owner;
	return context->inputLeft;
}

int Ft_Esd_RangeSliderInterval_EndValue(Ft_Esd_RangeSliderInterval *context)
{
	void *owner = context->Owner;
	return context->inputRight;
}

int Ft_Esd_RangeSliderInterval_Interval(Ft_Esd_RangeSliderInterval *context)
{
	void *owner = context->Owner;
	int left = context->inputRight;
	int right = context->inputLeft;
	return left - right;
}

void Ft_Esd_RangeSliderInterval_Render(Ft_Esd_RangeSliderInterval *context)
{
	void *owner = context->Owner;
	ft_uint8_t s = Ft_Esd_TouchTag_Tag(&context->Touch_Tag);
	Ft_Esd_Dl_TAG(s);
	ft_int16_t GlobalWidgetX_1 = context->Widget.GlobalX;
	ft_int16_t GlobalWidgetY_1 = context->Widget.GlobalY;
	ft_int16_t WidgetWidth_1 = context->Widget.GlobalWidth;
	ft_int16_t WidgetHeight_1 = context->Widget.GlobalHeight;
	ft_int16_t TouchX_1 = Ft_Esd_TouchTag_TouchX(&context->Touch_Tag);
	ft_int16_t TouchY_1 = Ft_Esd_TouchTag_TouchY(&context->Touch_Tag);
	int LeftValue = context->inputLeft;
	int RightValue = context->inputRight;
	ft_int32_t min_2 = context->Min(owner);
	ft_int32_t max_2 = context->Max(owner);
	Ft_Esd_Theme * theme = context->Theme(owner);
	ft_int32_t step_1 = context->Step(owner);
	ft_bool_t markerlines = context->Marker_Lines(owner);
	RenderFunction(context, GlobalWidgetX_1, GlobalWidgetY_1, WidgetWidth_1, WidgetHeight_1, TouchX_1, TouchY_1, LeftValue, RightValue, min_2, max_2, theme, step_1, markerlines);
	ft_uint8_t s_1 = 255;
	Ft_Esd_Dl_TAG(s_1);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context); 
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_RangeSliderInterval Instance;
	Ft_Esd_Theme * Theme;
	ft_int32_t Min;
	ft_int32_t Max;
	ft_int32_t Step;
	ft_bool_t Marker_Lines;
} Ft_Esd_RangeSliderInterval__ESD;

Ft_Esd_Theme * Ft_Esd_RangeSliderInterval__Get_Theme__ESD(void *context) { return ((Ft_Esd_RangeSliderInterval__ESD *)context)->Theme; }
void Ft_Esd_RangeSliderInterval__Set_Theme__ESD(void *context, Ft_Esd_Theme * value) { ((Ft_Esd_RangeSliderInterval__ESD *)context)->Theme = value; }
ft_int32_t Ft_Esd_RangeSliderInterval__Get_Min__ESD(void *context) { return ((Ft_Esd_RangeSliderInterval__ESD *)context)->Min; }
void Ft_Esd_RangeSliderInterval__Set_Min__ESD(void *context, ft_int32_t value) { ((Ft_Esd_RangeSliderInterval__ESD *)context)->Min = value; }
ft_int32_t Ft_Esd_RangeSliderInterval__Get_Max__ESD(void *context) { return ((Ft_Esd_RangeSliderInterval__ESD *)context)->Max; }
void Ft_Esd_RangeSliderInterval__Set_Max__ESD(void *context, ft_int32_t value) { ((Ft_Esd_RangeSliderInterval__ESD *)context)->Max = value; }
ft_int32_t Ft_Esd_RangeSliderInterval__Get_Step__ESD(void *context) { return ((Ft_Esd_RangeSliderInterval__ESD *)context)->Step; }
void Ft_Esd_RangeSliderInterval__Set_Step__ESD(void *context, ft_int32_t value) { ((Ft_Esd_RangeSliderInterval__ESD *)context)->Step = value; }
ft_bool_t Ft_Esd_RangeSliderInterval__Get_Marker_Lines__ESD(void *context) { return ((Ft_Esd_RangeSliderInterval__ESD *)context)->Marker_Lines; }
void Ft_Esd_RangeSliderInterval__Set_Marker_Lines__ESD(void *context, ft_bool_t value) { ((Ft_Esd_RangeSliderInterval__ESD *)context)->Marker_Lines = value; }

void *Ft_Esd_RangeSliderInterval__Create__ESD()
{
	Ft_Esd_RangeSliderInterval__ESD *context = (Ft_Esd_RangeSliderInterval__ESD *)malloc(sizeof(Ft_Esd_RangeSliderInterval__ESD));
	if (context)
	{
		Ft_Esd_RangeSliderInterval__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->Theme = Ft_Esd_Theme_GetCurrent();
		context->Instance.Theme = Ft_Esd_RangeSliderInterval__Get_Theme__ESD;
		context->Min = 0L;
		context->Instance.Min = Ft_Esd_RangeSliderInterval__Get_Min__ESD;
		context->Max = 100L;
		context->Instance.Max = Ft_Esd_RangeSliderInterval__Get_Max__ESD;
		context->Step = 5L;
		context->Instance.Step = Ft_Esd_RangeSliderInterval__Get_Step__ESD;
		context->Marker_Lines = 1;
		context->Instance.Marker_Lines = Ft_Esd_RangeSliderInterval__Get_Marker_Lines__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_RangeSliderInterval__Create__ESD)");
	}
	return context;
}

void Ft_Esd_RangeSliderInterval__Destroy__ESD(void *context)
{
	free(context);
}

void Ft_Esd_RangeSliderInterval__Set_inputLeft__ESD(void *context, int value) { ((Ft_Esd_RangeSliderInterval__ESD *)context)->Instance.inputLeft = value; }
void Ft_Esd_RangeSliderInterval__Set_inputRight__ESD(void *context, int value) { ((Ft_Esd_RangeSliderInterval__ESD *)context)->Instance.inputRight = value; }

#endif /* ESD_SIMULATION */

/* end of file */
