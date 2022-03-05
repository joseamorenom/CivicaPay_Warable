
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/
				
#ifndef UIB_TRANS_NEG_VIEW_H_
#define UIB_TRANS_NEG_VIEW_H_


#include "g_inc_uib.h"
#include "uib_views.h"

/**
* view context definitions
*/

typedef struct _uib_Trans_Neg_view_context {

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
	struct _uib_Trans_Neg_control_context *cc;

	/* UI Components in this view */
	Evas_Object *grid10;
	Evas_Object *circle_object_grid10;
	Evas_Object *bg10;
	Evas_Object *circle_object_bg10;
	Evas_Object *button10;
	Evas_Object *circle_object_button10;
} uib_Trans_Neg_view_context;



/**
* @brief	Create a new view then return view context of that view.
* 			You can delete view using evas_object_del(vc->evas_object) like other EFL evas objects.
*/
uib_view_context *uib_view_Trans_Neg_create(Evas_Object *parent, void *create_callback_param);
uib_view_context *uib_view_Trans_Neg_destroy(Evas_Object *parent, void *create_callback_param);

void uib_Trans_Neg_config_CIRCLE_360x360_portrait();
#endif /* UIB_TRANS_NEG_VIEW_H_ */
