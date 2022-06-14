/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_RSSIBar
Header
*/

#ifndef Ft_Esd_RSSIBar__H
#define Ft_Esd_RSSIBar__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Math.h"
#include "Ft_Esd_Theme.h"
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

#define Ft_Esd_RSSIBar_CLASSID 0x8AF27C82
ESD_SYMBOL(Ft_Esd_RSSIBar_CLASSID, Type = esd_classid_t)

/* ESD built-in RaSSI Bar Widget */
ESD_WIDGET(Ft_Esd_RSSIBar, Include = "Ft_Esd_RSSIBar.h", Callback, DisplayName = "ESD RSSI Bar", Category = EsdWidgets, Icon = ":/icons/ui-bar-graph.png", X = 100, Y = 60, Width = 200, Height = 200)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Theme, Type = Ft_Esd_Theme *, Default = Ft_Esd_Theme_GetCurrent)
	Ft_Esd_Theme *(* Theme)(void *context);
	ESD_INPUT(Default_Color, DisplayName = "Default Color", Type = ft_argb32_t, Default = #969696)
	ft_argb32_t(* Default_Color)(void *context);
	ESD_INPUT(Fill_Color, Type = ft_argb32_t, Default = #0d36f0)
	ft_argb32_t(* Fill_Color)(void *context);
	ESD_INPUT(Min_Strength, Type = int, Min = 0, Max = 1024, Default = 1)
	int(* Min_Strength)(void *context);
	ESD_INPUT(Max_Strength, Type = int, Min = 1, Max = 1024, Default = 5)
	int(* Max_Strength)(void *context);
	ESD_INPUT(Number_of_Bars, Type = int, Min = 1, Max = 100, Default = 5)
	int(* Number_of_Bars)(void *context);
	ESD_INPUT(Current_Strength, Type = int, Min = 0, Max = 1024, Default = 3)
	int(* Current_Strength)(void *context);
	ESD_INPUT(Signal_Search_Mode, Type = ft_bool_t)
	ft_bool_t(* Signal_Search_Mode)(void *context);
	ESD_VARIABLE(BaseValue, Type = int, Private)
	int BaseValue;
	ESD_VARIABLE(RepeatValue, Type = int, Private)
	int RepeatValue;
} Ft_Esd_RSSIBar;

void Ft_Esd_RSSIBar__Initializer(Ft_Esd_RSSIBar *context);

ESD_SLOT(Update)
void Ft_Esd_RSSIBar_Update(Ft_Esd_RSSIBar *context);

ESD_SLOT(Render)
void Ft_Esd_RSSIBar_Render(Ft_Esd_RSSIBar *context);

#endif /* Ft_Esd_RSSIBar__H */

/* end of file */
