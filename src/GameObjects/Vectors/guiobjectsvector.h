#ifndef GUIOBJECTSVECTOR_H
#define GUIOBJECTSVECTOR_H

#include "../guiobject.h"

typedef struct{
	int maxAmount;
	int currentAmount;
	GUIObject **guiObjects;
} GUIObjectsVector;

GUIObjectsVector *createGUIObjectsVector();

void guiov_add(GUIObjectsVector *guiov, GUIObject *go);
void guiov_removeI(GUIObjectsVector *guiov, int index);
void guiov_removeV(GUIObjectsVector *guiov, GUIObject *guio);
int guiov_find(GUIObjectsVector *guiov, GUIObject *guio);
int guiov_findByType(GUIObjectsVector *guiov, GUIObjectName type);
void guiov_increaseMemory(GUIObjectsVector *gov);
void guiov_decreaseMemory(GUIObjectsVector *gov);
GUIObject *guiov_get(GUIObjectsVector *guiov, int index);
void guiov_destroy(GUIObjectsVector *guiov);
GUIObjectsVector *guiov_clear(GUIObjectsVector *guiov);

#endif