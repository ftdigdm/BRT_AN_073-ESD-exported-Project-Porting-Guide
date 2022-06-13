/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_IdleChecker
Header
*/

#ifndef Ft_Esd_IdleChecker__H
#define Ft_Esd_IdleChecker__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Timer.h"
#include "Ft_Esd_TouchArea.h"

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

/* Utility for managing idle/screensaver page. Idle Checker will emit timeout for going screen saver or wake up up to go into main screen. */
ESD_ACTOR(Ft_Esd_IdleChecker, Include = "Ft_Esd_IdleChecker.h", Callback, DisplayName = "ESD Idle Checker", Category = EsdUtilities, DefaultSignal = Timeout, Icon = ":/icons/clock.png")
typedef struct
{
	void *Owner;
	ESD_INPUT(X, Type = int)
	int(* X)(void *context);
	ESD_INPUT(Y, Type = int)
	int(* Y)(void *context);
	ESD_VARIABLE(PreviousStatus, Type = ft_bool_t, Private)
	ft_bool_t PreviousStatus;
	ESD_INPUT(Width, Type = int, Default = 800)
	int(* Width)(void *context);
	/* in sec */
	ESD_VARIABLE(IdleTime, Type = int, Private)
	int IdleTime;
	ESD_INPUT(Height, Type = int, Default = 800)
	int(* Height)(void *context);
	/* Idling Status */
	ESD_VARIABLE(Status, DisplayName = "Idling", Type = ft_bool_t, ReadOnly)
	ft_bool_t Status;
	/* Count no of intervals */
	ESD_INPUT(Count, DisplayName = "Count", Type = int, Min = 1, Default = 30)
	int(* Count)(void *context);
	ESD_VARIABLE(TimeLimit, Type = int, Private)
	int TimeLimit;
	/* Checking interval in mili-seconds */
	ESD_INPUT(Interval, DisplayName = "Interval", Type = int, Min = 20, Max = 60000, Default = 1000)
	int(* Interval)(void *context);
	ESD_SIGNAL(Timeout)
	void(* Timeout)(void *context);
	ESD_VARIABLE(Deferred_Wakeup, Type = ft_bool_t, Private)
	ft_bool_t Deferred_Wakeup;
	ESD_SIGNAL(WakeUp)
	void(* WakeUp)(void *context);
	Ft_Esd_Timer ESD_Timer;
	Ft_Esd_TouchArea Touch_Area;
} Ft_Esd_IdleChecker;

void Ft_Esd_IdleChecker__Initializer(Ft_Esd_IdleChecker *context);

ESD_SLOT(End)
void Ft_Esd_IdleChecker_End(Ft_Esd_IdleChecker *context);

ESD_SLOT(Start)
void Ft_Esd_IdleChecker_Start(Ft_Esd_IdleChecker *context);

ESD_SLOT(Update)
void Ft_Esd_IdleChecker_Update(Ft_Esd_IdleChecker *context);

#endif /* Ft_Esd_IdleChecker__H */

/* end of file */
