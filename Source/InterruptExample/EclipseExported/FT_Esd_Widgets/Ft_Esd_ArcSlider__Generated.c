/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_ArcSlider
C Source
*/

/*
Comment :
Introduction:
This widget acts the same as a Slider Bar. But instead of sliding in a bar, it slides in a arc line.
Arc Slider supports touch input.
*/

/*
Comment 2 :
Partial Ring is used as a widget base.
*/

#include "Ft_Esd_ArcSlider.h"

#include "Esd_Context.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
ft_bool_t Ft_Esd_ArcSlider_Clockwise__Default(void *context) { return 1; }
int Ft_Esd_ArcSlider_Origin__Default(void *context) { return 135L; }
int Ft_Esd_ArcSlider_RingWidth__Default(void *context) { return 50L; }
int Ft_Esd_ArcSlider_InnerBorder__Default(void *context) { return 2L; }
int Ft_Esd_ArcSlider_OuterBorder__Default(void *context) { return 4L; }
ft_argb32_t Ft_Esd_ArcSlider_BorderColor__Default(void *context) { return 0xffd0cec6UL; }
ft_argb32_t Ft_Esd_ArcSlider_SelectionColor__Default(void *context) { return 0xffc55a11UL; }
ft_argb32_t Ft_Esd_ArcSlider_BackgroundColor__Default(void *context) { return 0xff060504UL; }

static ft_uint8_t Ft_Esd_ArcSlider_Set_Touch_Tag_Tag__Property(void *context);
static ft_int16_t Ft_Esd_ArcSlider_ESD_Partial_Ring_Angle__Property(void *context);
static ft_int16_t Ft_Esd_ArcSlider_ESD_Partial_Ring_MaxAngle__Property(void *context);
static ft_bool_t Ft_Esd_ArcSlider_ESD_Partial_Ring_Clockwise__Property(void *context);
static int Ft_Esd_ArcSlider_ESD_Partial_Ring_Origin__Property(void *context);
static int Ft_Esd_ArcSlider_ESD_Partial_Ring_RingWidth__Property(void *context);
static int Ft_Esd_ArcSlider_ESD_Partial_Ring_InnerBorder__Property(void *context);
static int Ft_Esd_ArcSlider_ESD_Partial_Ring_OuterBorder__Property(void *context);
static ft_argb32_t Ft_Esd_ArcSlider_ESD_Partial_Ring_BorderColor__Property(void *context);
static ft_argb32_t Ft_Esd_ArcSlider_ESD_Partial_Ring_SelectionColor__Property(void *context);
static ft_argb32_t Ft_Esd_ArcSlider_ESD_Partial_Ring_BackgroundColor__Property(void *context);

static Ft_Esd_WidgetSlots s_Ft_Esd_ArcSlider__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_ArcSlider_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_ArcSlider_Update,
	(void(*)(void *))Ft_Esd_Widget_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_ArcSlider_End,
};

static void Ft_Esd_ArcSlider_Touch_Tag_Down__Signal(void *context);
static void Ft_Esd_ArcSlider_Touch_Tag_Up__Signal(void *context);
static void Ft_Esd_ArcSlider_Render_Forwarder_ForwardUpdate__Signal(void *context);
static void Ft_Esd_ArcSlider_Render_Forwarder_ForwardRender__Signal(void *context);

void Ft_Esd_ArcSlider__Touch_Tag__Initializer(Ft_Esd_ArcSlider *context)
{
	Ft_Esd_TouchTag *object = (Ft_Esd_TouchTag *)&context->Touch_Tag;
	Ft_Esd_TouchTag__Initializer(object);
	object->Owner = (void *)context;
	object->Down = Ft_Esd_ArcSlider_Touch_Tag_Down__Signal;
	object->Up = Ft_Esd_ArcSlider_Touch_Tag_Up__Signal;
}

void Ft_Esd_ArcSlider__Render_Forwarder__Initializer(Ft_Esd_ArcSlider *context)
{
	Ft_Esd_RenderForwarder *object = (Ft_Esd_RenderForwarder *)&context->Render_Forwarder;
	Ft_Esd_RenderForwarder__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	object->ForwardUpdate = Ft_Esd_ArcSlider_Render_Forwarder_ForwardUpdate__Signal;
	object->ForwardRender = Ft_Esd_ArcSlider_Render_Forwarder_ForwardRender__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void Ft_Esd_ArcSlider__Set_Touch_Tag__Initializer(Ft_Esd_ArcSlider *context)
{
	Ft_Esd_Layout_Tag *object = (Ft_Esd_Layout_Tag *)&context->Set_Touch_Tag;
	Ft_Esd_Layout_Tag__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	object->Tag = Ft_Esd_ArcSlider_Set_Touch_Tag_Tag__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void Ft_Esd_ArcSlider__Fixed_Positioning__Initializer(Ft_Esd_ArcSlider *context)
{
	Ft_Esd_Layout_Fixed *object = (Ft_Esd_Layout_Fixed *)&context->Fixed_Positioning;
	Ft_Esd_Layout_Fixed__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 344;
	object->Widget.LocalY = 212;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Set_Touch_Tag);
}

void Ft_Esd_ArcSlider__ESD_Partial_Ring__Initializer(Ft_Esd_ArcSlider *context)
{
	Ft_Esd_PartialRing *object = (Ft_Esd_PartialRing *)&context->ESD_Partial_Ring;
	Ft_Esd_PartialRing__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 4;
	object->Widget.LocalY = 3;
	object->Widget.LocalWidth = 579;
	object->Widget.LocalHeight = 469;
	object->Angle = Ft_Esd_ArcSlider_ESD_Partial_Ring_Angle__Property;
	object->MaxAngle = Ft_Esd_ArcSlider_ESD_Partial_Ring_MaxAngle__Property;
	object->Clockwise = Ft_Esd_ArcSlider_ESD_Partial_Ring_Clockwise__Property;
	object->Origin = Ft_Esd_ArcSlider_ESD_Partial_Ring_Origin__Property;
	object->RingWidth = Ft_Esd_ArcSlider_ESD_Partial_Ring_RingWidth__Property;
	object->InnerBorder = Ft_Esd_ArcSlider_ESD_Partial_Ring_InnerBorder__Property;
	object->OuterBorder = Ft_Esd_ArcSlider_ESD_Partial_Ring_OuterBorder__Property;
	object->BorderColor = Ft_Esd_ArcSlider_ESD_Partial_Ring_BorderColor__Property;
	object->SelectionColor = Ft_Esd_ArcSlider_ESD_Partial_Ring_SelectionColor__Property;
	object->BackgroundColor = Ft_Esd_ArcSlider_ESD_Partial_Ring_BackgroundColor__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Positioning);
}

void Ft_Esd_ArcSlider__Initializer(Ft_Esd_ArcSlider *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_ArcSlider_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_ArcSlider__Slots;
	context->Widget.LocalX = 1;
	context->Widget.LocalY = -2;
	context->Widget.LocalWidth = 801;
	context->Widget.LocalHeight = 481;
	context->Angle = 90;
	context->Max_Angle = 270;
	context->Clockwise = Ft_Esd_ArcSlider_Clockwise__Default;
	context->Origin = Ft_Esd_ArcSlider_Origin__Default;
	context->RingWidth = Ft_Esd_ArcSlider_RingWidth__Default;
	context->InnerBorder = Ft_Esd_ArcSlider_InnerBorder__Default;
	context->OuterBorder = Ft_Esd_ArcSlider_OuterBorder__Default;
	context->StartAngle = 0L;
	context->BorderColor = Ft_Esd_ArcSlider_BorderColor__Default;
	context->ClampedNewAngle = 50L;
	context->NewAngle = 0L;
	context->SelectionColor = Ft_Esd_ArcSlider_SelectionColor__Default;
	context->TrackAngle = 0L;
	context->BackgroundColor = Ft_Esd_ArcSlider_BackgroundColor__Default;
	context->StartTrackAngle = 0L;
	context->IsTracking = 0;
	context->Value = 10;
	context->IsOutOfBound = 0;
	context->MaxValue = 100;
	Ft_Esd_ArcSlider__Touch_Tag__Initializer(context);
	Ft_Esd_ArcSlider__Render_Forwarder__Initializer(context);
	Ft_Esd_ArcSlider__Set_Touch_Tag__Initializer(context);
	Ft_Esd_ArcSlider__Fixed_Positioning__Initializer(context);
	Ft_Esd_ArcSlider__ESD_Partial_Ring__Initializer(context);
}

void Ft_Esd_ArcSlider_Update_TouchTracker(Ft_Esd_ArcSlider *context, ft_int16_t);

void Ft_Esd_ArcSlider_Start(Ft_Esd_ArcSlider *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_Start((Ft_Esd_Widget *)context);
	Ft_Esd_TouchTag_Start(&context->Touch_Tag);
}

void Ft_Esd_ArcSlider_Update(Ft_Esd_ArcSlider *context)
{
	void *owner = context->Owner;
	ft_int16_t update_variable = context->ESD_Partial_Ring.Angle(context->ESD_Partial_Ring.Owner);
	context->Angle = update_variable;
	Ft_Esd_TouchTag_Update(&context->Touch_Tag);
	ft_int16_t update_variable_1 = Ft_Esd_RenderForwarder_GlobalWidth(&context->Render_Forwarder);
	Ft_Esd_Widget_SetWidth((Ft_Esd_Widget *)&context->Fixed_Positioning, update_variable_1);
	ft_int16_t update_variable_2 = Ft_Esd_RenderForwarder_GlobalHeight(&context->Render_Forwarder);
	Ft_Esd_Widget_SetHeight((Ft_Esd_Widget *)&context->Fixed_Positioning, update_variable_2);
	ft_int16_t update_variable_3 = Ft_Esd_RenderForwarder_GlobalWidth(&context->Render_Forwarder);
	Ft_Esd_Widget_SetWidth((Ft_Esd_Widget *)&context->ESD_Partial_Ring, update_variable_3);
	ft_int16_t update_variable_4 = Ft_Esd_RenderForwarder_GlobalHeight(&context->Render_Forwarder);
	Ft_Esd_Widget_SetHeight((Ft_Esd_Widget *)&context->ESD_Partial_Ring, update_variable_4);
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context);
}

void Ft_Esd_ArcSlider_End(Ft_Esd_ArcSlider *context)
{
	void *owner = context->Owner;
	Ft_Esd_TouchTag_End(&context->Touch_Tag);
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Render_Forwarder); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Set_Touch_Tag); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Fixed_Positioning); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Partial_Ring); 
}

void Ft_Esd_ArcSlider_Touch_Tag_Down__Signal(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	ft_bool_t reset_variable = 0;
	context->IsTracking = reset_variable;
	context->IsOutOfBound = reset_variable;
	int reset_variable_2 = context->ClampedNewAngle;
	context->NewAngle = reset_variable_2;
}

void Ft_Esd_ArcSlider_Touch_Tag_Up__Signal(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	ft_bool_t reset_variable_1 = 0;
	context->IsTracking = reset_variable_1;
	context->IsOutOfBound = reset_variable_1;
	int reset_variable_2_1 = context->ClampedNewAngle;
	context->NewAngle = reset_variable_2_1;
}

void Ft_Esd_ArcSlider_Render_Forwarder_ForwardUpdate__Signal(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	ft_bool_t if_1 = Ft_Esd_TouchTag_Touching(&context->Touch_Tag);
	if (if_1)
	{
		ft_int16_t left_1 = context->Angle;
		ft_int16_t right = context->MaxValue;
		int left = left_1 * right;
		ft_int16_t right_1 = context->Max_Angle;
		int set_value_from_angle = left / right_1;
		context->Value = (int)set_value_from_angle;
	}
	else
	{
		ft_int16_t left_3 = context->Max_Angle;
		ft_int16_t right_2 = context->Value;
		int left_2 = left_3 * right_2;
		ft_int16_t right_3 = context->MaxValue;
		int set_intial_angle = left_2 / right_3;
		context->ClampedNewAngle = set_intial_angle;
	}
}

void Ft_Esd_ArcSlider_Render_Forwarder_ForwardRender__Signal(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	ft_bool_t if_2 = Ft_Esd_TouchTag_Touching(&context->Touch_Tag);
	if (if_2)
	{
		ft_uint8_t tag = Ft_Esd_TouchTag_Tag(&context->Touch_Tag);
		Ft_Esd_ArcSlider_Update_TouchTracker(context, tag);
	}
	else
	{
	}
}

ft_uint8_t Ft_Esd_ArcSlider_Set_Touch_Tag_Tag__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	return Ft_Esd_TouchTag_Tag(&context->Touch_Tag);
}

ft_int16_t Ft_Esd_ArcSlider_ESD_Partial_Ring_Angle__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	return context->ClampedNewAngle;
}

ft_int16_t Ft_Esd_ArcSlider_ESD_Partial_Ring_MaxAngle__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	return context->Max_Angle;
}

ft_bool_t Ft_Esd_ArcSlider_ESD_Partial_Ring_Clockwise__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	return context->Clockwise(owner);
}

int Ft_Esd_ArcSlider_ESD_Partial_Ring_Origin__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	return context->Origin(owner);
}

int Ft_Esd_ArcSlider_ESD_Partial_Ring_RingWidth__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	return context->RingWidth(owner);
}

int Ft_Esd_ArcSlider_ESD_Partial_Ring_InnerBorder__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	return context->InnerBorder(owner);
}

int Ft_Esd_ArcSlider_ESD_Partial_Ring_OuterBorder__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	return context->OuterBorder(owner);
}

ft_argb32_t Ft_Esd_ArcSlider_ESD_Partial_Ring_BorderColor__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	ft_bool_t value = context->IsOutOfBound;
	switch (value)
	{
		case 0L:
		{
			ft_bool_t value_1 = Ft_Esd_TouchTag_Touching(&context->Touch_Tag);
			switch (value_1)
			{
				case 0L:
				{
					return context->BorderColor(owner);
				}
				case 1L:
				{
					ft_argb32_t left_4 = context->ESD_Partial_Ring.SelectionColor(context->ESD_Partial_Ring.Owner);
					ft_argb32_t right_4 = 0xff212121UL;
					ft_argb32_t color = ((left_4 >> 8) & 0x00ff00ff) + ((right_4 >> 8) & 0x00ff00ff);
					ft_argb32_t color_1 = (left_4 & 0x00ff00ff) + (right_4 & 0x00ff00ff);
					return (((color & 0x00ff00ff) << 8) | ((color & 0x01000100) * 0xff)) | ((color_1 & 0x00ff00ff) | (((color_1 & 0x01000100) * 0xff) >> 8));
				}
				default:
				{
					return context->BorderColor(owner);
				}
			}
		}
		case 1L:
		{
			ft_argb32_t left_5 = context->ESD_Partial_Ring.SelectionColor(context->ESD_Partial_Ring.Owner);
			ft_argb32_t right_5 = 0xff141414UL;
			ft_argb32_t color_2 = (((left_5 >> 8) & 0x00ff00ff) | 0x01000100) - ((right_5 >> 8) & 0x00ff00ff);
			ft_argb32_t color_3 = ((left_5 & 0x00ff00ff) | 0x01000100) - (right_5 & 0x00ff00ff);
			return (((color_2 & 0x00ff00ff) << 8) & ((color_2 & 0x01000100) * 0xff)) | ((color_3 & 0x00ff00ff) & (((color_3 & 0x01000100) * 0xff) >> 8));
		}
		default:
		{
			ft_bool_t value_2 = Ft_Esd_TouchTag_Touching(&context->Touch_Tag);
			switch (value_2)
			{
				case 0L:
				{
					return context->BorderColor(owner);
				}
				case 1L:
				{
					ft_argb32_t left_6 = context->ESD_Partial_Ring.SelectionColor(context->ESD_Partial_Ring.Owner);
					ft_argb32_t right_6 = 0xff212121UL;
					ft_argb32_t color_4 = ((left_6 >> 8) & 0x00ff00ff) + ((right_6 >> 8) & 0x00ff00ff);
					ft_argb32_t color_5 = (left_6 & 0x00ff00ff) + (right_6 & 0x00ff00ff);
					return (((color_4 & 0x00ff00ff) << 8) | ((color_4 & 0x01000100) * 0xff)) | ((color_5 & 0x00ff00ff) | (((color_5 & 0x01000100) * 0xff) >> 8));
				}
				default:
				{
					return context->BorderColor(owner);
				}
			}
		}
	}
}

ft_argb32_t Ft_Esd_ArcSlider_ESD_Partial_Ring_SelectionColor__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	return context->SelectionColor(owner);
}

ft_argb32_t Ft_Esd_ArcSlider_ESD_Partial_Ring_BackgroundColor__Property(void *c)
{
	Ft_Esd_ArcSlider *context = (Ft_Esd_ArcSlider *)c;
	void *owner = context->Owner;
	return context->BackgroundColor(owner);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_ArcSlider Instance;
	ft_bool_t Clockwise;
	int Origin;
	int RingWidth;
	int InnerBorder;
	int OuterBorder;
	ft_argb32_t BorderColor;
	ft_argb32_t SelectionColor;
	ft_argb32_t BackgroundColor;
} Ft_Esd_ArcSlider__ESD;

ft_bool_t Ft_Esd_ArcSlider__Get_Clockwise__ESD(void *context) { return ((Ft_Esd_ArcSlider__ESD *)context)->Clockwise; }
void Ft_Esd_ArcSlider__Set_Clockwise__ESD(void *context, ft_bool_t value) { ((Ft_Esd_ArcSlider__ESD *)context)->Clockwise = value; }
int Ft_Esd_ArcSlider__Get_Origin__ESD(void *context) { return ((Ft_Esd_ArcSlider__ESD *)context)->Origin; }
void Ft_Esd_ArcSlider__Set_Origin__ESD(void *context, int value) { ((Ft_Esd_ArcSlider__ESD *)context)->Origin = value; }
int Ft_Esd_ArcSlider__Get_RingWidth__ESD(void *context) { return ((Ft_Esd_ArcSlider__ESD *)context)->RingWidth; }
void Ft_Esd_ArcSlider__Set_RingWidth__ESD(void *context, int value) { ((Ft_Esd_ArcSlider__ESD *)context)->RingWidth = value; }
int Ft_Esd_ArcSlider__Get_InnerBorder__ESD(void *context) { return ((Ft_Esd_ArcSlider__ESD *)context)->InnerBorder; }
void Ft_Esd_ArcSlider__Set_InnerBorder__ESD(void *context, int value) { ((Ft_Esd_ArcSlider__ESD *)context)->InnerBorder = value; }
int Ft_Esd_ArcSlider__Get_OuterBorder__ESD(void *context) { return ((Ft_Esd_ArcSlider__ESD *)context)->OuterBorder; }
void Ft_Esd_ArcSlider__Set_OuterBorder__ESD(void *context, int value) { ((Ft_Esd_ArcSlider__ESD *)context)->OuterBorder = value; }
ft_argb32_t Ft_Esd_ArcSlider__Get_BorderColor__ESD(void *context) { return ((Ft_Esd_ArcSlider__ESD *)context)->BorderColor; }
void Ft_Esd_ArcSlider__Set_BorderColor__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_ArcSlider__ESD *)context)->BorderColor = value; }
ft_argb32_t Ft_Esd_ArcSlider__Get_SelectionColor__ESD(void *context) { return ((Ft_Esd_ArcSlider__ESD *)context)->SelectionColor; }
void Ft_Esd_ArcSlider__Set_SelectionColor__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_ArcSlider__ESD *)context)->SelectionColor = value; }
ft_argb32_t Ft_Esd_ArcSlider__Get_BackgroundColor__ESD(void *context) { return ((Ft_Esd_ArcSlider__ESD *)context)->BackgroundColor; }
void Ft_Esd_ArcSlider__Set_BackgroundColor__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_ArcSlider__ESD *)context)->BackgroundColor = value; }

void *Ft_Esd_ArcSlider__Create__ESD()
{
	Ft_Esd_ArcSlider__ESD *context = (Ft_Esd_ArcSlider__ESD *)malloc(sizeof(Ft_Esd_ArcSlider__ESD));
	if (context)
	{
		Ft_Esd_ArcSlider__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->Clockwise = 1;
		context->Instance.Clockwise = Ft_Esd_ArcSlider__Get_Clockwise__ESD;
		context->Origin = 135L;
		context->Instance.Origin = Ft_Esd_ArcSlider__Get_Origin__ESD;
		context->RingWidth = 50L;
		context->Instance.RingWidth = Ft_Esd_ArcSlider__Get_RingWidth__ESD;
		context->InnerBorder = 2L;
		context->Instance.InnerBorder = Ft_Esd_ArcSlider__Get_InnerBorder__ESD;
		context->OuterBorder = 4L;
		context->Instance.OuterBorder = Ft_Esd_ArcSlider__Get_OuterBorder__ESD;
		context->BorderColor = 0xffd0cec6UL;
		context->Instance.BorderColor = Ft_Esd_ArcSlider__Get_BorderColor__ESD;
		context->SelectionColor = 0xffc55a11UL;
		context->Instance.SelectionColor = Ft_Esd_ArcSlider__Get_SelectionColor__ESD;
		context->BackgroundColor = 0xff060504UL;
		context->Instance.BackgroundColor = Ft_Esd_ArcSlider__Get_BackgroundColor__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_ArcSlider__Create__ESD)");
	}
	return context;
}

void Ft_Esd_ArcSlider__Destroy__ESD(void *context)
{
	free(context);
}

void Ft_Esd_ArcSlider__Set_Angle__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.Angle = value; }
void Ft_Esd_ArcSlider__Set_Max_Angle__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.Max_Angle = value; }
void Ft_Esd_ArcSlider__Set_StartAngle__ESD(void *context, int value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.StartAngle = value; }
void Ft_Esd_ArcSlider__Set_ClampedNewAngle__ESD(void *context, int value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.ClampedNewAngle = value; }
void Ft_Esd_ArcSlider__Set_NewAngle__ESD(void *context, int value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.NewAngle = value; }
void Ft_Esd_ArcSlider__Set_TrackAngle__ESD(void *context, int value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.TrackAngle = value; }
void Ft_Esd_ArcSlider__Set_StartTrackAngle__ESD(void *context, int value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.StartTrackAngle = value; }
void Ft_Esd_ArcSlider__Set_IsTracking__ESD(void *context, ft_bool_t value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.IsTracking = value; }
void Ft_Esd_ArcSlider__Set_Value__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.Value = value; }
void Ft_Esd_ArcSlider__Set_IsOutOfBound__ESD(void *context, ft_bool_t value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.IsOutOfBound = value; }
void Ft_Esd_ArcSlider__Set_MaxValue__ESD(void *context, ft_int16_t value) { ((Ft_Esd_ArcSlider__ESD *)context)->Instance.MaxValue = value; }

#endif /* ESD_SIMULATION */

/* end of file */
