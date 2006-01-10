/***************************************************************************
 * Header for the dock functions.
 * Copyright (C) 2006 Joe Wingbermuehle
 ***************************************************************************/

#ifndef DOCK_H
#define DOCK_H

struct TrayComponentType;

void InitializeDock();
void StartupDock();
void ShutdownDock();
void DestroyDock();

struct TrayComponentType *CreateDock();

void HandleDockEvent(const XClientMessageEvent *event);
int HandleDockDestroy(Window win);
int HandleDockSelectionClear(const XSelectionClearEvent *event);
int HandleDockResizeRequest(const XResizeRequestEvent *event);

#endif

