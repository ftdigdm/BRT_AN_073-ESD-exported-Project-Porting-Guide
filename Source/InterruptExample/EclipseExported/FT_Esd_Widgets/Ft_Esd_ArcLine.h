/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_ArcLine
Header
*/

#ifndef Ft_Esd_ArcLine__H
#define Ft_Esd_ArcLine__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_RenderForwarder.h"
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

#define Ft_Esd_ArcLine_CLASSID 0x3D72318C
ESD_SYMBOL(Ft_Esd_ArcLine_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Ft_Esd_ArcLine, Include = "Ft_Esd_ArcLine.h", Callback, DisplayName = "ESD Arc Line", Category = EsdBasicWidgets, X = 18, Y = 22, Width = 302, Height = 285, BackToFront)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_VARIABLE(Border, Type = int, Min = 0, Default = 20, Public)
	int Border;
	ESD_VARIABLE(cX, Type = int, Private)
	int cX;
	ESD_VARIABLE(cY, Type = int, Private)
	int cY;
	ESD_VARIABLE(Color, Type = ft_argb32_t, Default = #7d35ac39, Public)
	ft_argb32_t Color;
	ESD_VARIABLE(Radius, Type = int, Default = 100, Private)
	int Radius;
	/* Origin In Degree */
	ESD_VARIABLE(Origin, DisplayName = "Origin", Type = int, Min = 0, Max = 360, Public)
	int Origin;
	/* Value In Degree */
	ESD_VARIABLE(Angle, DisplayName = "Angle", Type = int, Min = 0, Max = 360, Default = 90, Public)
	int Angle;
	ESD_VARIABLE(IsClockwise, Type = ft_bool_t, Default = true, Public)
	ft_bool_t IsClockwise;
	ESD_VARIABLE(ShowStartPoint, DisplayName = "Show Start Point", Type = ft_bool_t, Default = true, Public)
	ft_bool_t ShowStartPoint;
	ESD_VARIABLE(ShowEndPoint, DisplayName = "Show End Point", Type = ft_bool_t, Default = true, Public)
	ft_bool_t ShowEndPoint;
	ESD_VARIABLE(ShowPointShadow, DisplayName = "Show Point Shadow", Type = ft_bool_t, Public)
	ft_bool_t ShowPointShadow;
	Ft_Esd_RenderForwarder Render_Forwarder;
} Ft_Esd_ArcLine;

void Ft_Esd_ArcLine__Initializer(Ft_Esd_ArcLine *context);

ESD_SLOT(End)
void Ft_Esd_ArcLine_End(Ft_Esd_ArcLine *context);

#endif /* Ft_Esd_ArcLine__H */

/* end of file */
