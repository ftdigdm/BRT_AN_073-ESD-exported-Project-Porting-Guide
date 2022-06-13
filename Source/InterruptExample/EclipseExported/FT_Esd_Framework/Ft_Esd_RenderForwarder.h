/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_RenderForwarder
Header
*/

#ifndef Ft_Esd_RenderForwarder__H
#define Ft_Esd_RenderForwarder__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Math.h"
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

#define Ft_Esd_RenderForwarder_CLASSID 0x44C4CF62
ESD_SYMBOL(Ft_Esd_RenderForwarder_CLASSID, Type = esd_classid_t)

/* Use to insert custom rendering at a specific location in the layout */
ESD_WIDGET(Ft_Esd_RenderForwarder, Include = "Ft_Esd_RenderForwarder.h", Callback, DisplayName = "Render Forwarder", Category = EsdLayoutAdvanced, Icon = ":/icons/layer--arrow.png", X = 0, Y = 0, Width = 50, Height = 50)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_SIGNAL(ForwardUpdate)
	void(* ForwardUpdate)(void *context);
	ESD_SIGNAL(ForwardRender)
	void(* ForwardRender)(void *context);
	ESD_SIGNAL(ForwardIdle)
	void(* ForwardIdle)(void *context);
} Ft_Esd_RenderForwarder;

void Ft_Esd_RenderForwarder__Initializer(Ft_Esd_RenderForwarder *context);

ESD_OUTPUT(GlobalX, Type = ft_int16_t)
ft_int16_t Ft_Esd_RenderForwarder_GlobalX(Ft_Esd_RenderForwarder *context);

ESD_OUTPUT(GlobalY, Type = ft_int16_t)
ft_int16_t Ft_Esd_RenderForwarder_GlobalY(Ft_Esd_RenderForwarder *context);

ESD_OUTPUT(GlobalWidth, Type = ft_int16_t)
ft_int16_t Ft_Esd_RenderForwarder_GlobalWidth(Ft_Esd_RenderForwarder *context);

ESD_OUTPUT(GlobalHeight, Type = ft_int16_t)
ft_int16_t Ft_Esd_RenderForwarder_GlobalHeight(Ft_Esd_RenderForwarder *context);

ESD_SLOT(Update)
void Ft_Esd_RenderForwarder_Update(Ft_Esd_RenderForwarder *context);

ESD_SLOT(Render)
void Ft_Esd_RenderForwarder_Render(Ft_Esd_RenderForwarder *context);

ESD_SLOT(Idle)
void Ft_Esd_RenderForwarder_Idle(Ft_Esd_RenderForwarder *context);

#endif /* Ft_Esd_RenderForwarder__H */

/* end of file */
