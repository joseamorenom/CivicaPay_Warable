
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/
				
#ifndef UIB_VIEW6_VIEW_H_
#define UIB_VIEW6_VIEW_H_


#include "g_inc_uib.h"
#include "uib_views.h"

/**
* view context definitions
*/

typedef struct _uib_view6_view_context {

	/* parent evas_object which was parameter of create function */
	Evas_Object *parent;
	/* root container UI Component of this view */
	Evas_Object *root_container;
	/* view class name */
	const char *view_name;
	/* indicator state of this view */
	int indicator_state;
	/* This is view type. 'true' is user view, otherwise a UI Builder's view. */
	bool is_user_view;
	/* control context to control this view */
	struct _uib_view6_control_context *cc;

	/* UI Components in this view */
	Evas_Object *grid6;
	Evas_Object *circle_object_grid6;
} uib_view6_view_context;



/**
* @brief	Create a new view then return view context of that view.
* 			You can delete view using evas_object_del(vc->evas_object) like other EFL evas objects.
*/
uib_view_context *uib_view_view6_create(Evas_Object *parent, void *create_callback_param);
uib_view_context *uib_view_view6_destroy(Evas_Object *parent, void *create_callback_param);

void uib_view6_config_CIRCLE_360x360_portrait();
#endif /* UIB_VIEW6_VIEW_H_ */
