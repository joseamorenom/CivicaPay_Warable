
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/
		#include "g_inc_uib.h"
#include "uib_views.h"
#include "uib_views_inc.h"
#include "uib_app_manager.h"


/* event handler declarations */

uib_view_context* uib_view_view13_create(Evas_Object* parent, void* create_callback_param) {
	uib_view13_view_context* vc = calloc(1, sizeof(uib_view13_view_context));
	vc->parent = parent;
	vc->view_name = "view13";
	vc->indicator_state = ELM_WIN_INDICATOR_SHOW;
	vc->is_user_view = false;
	uib_app_manager_get_instance()->add_view_context((uib_view_context*)vc);
	if (!vc->grid12) {
		vc->grid12= elm_grid_add(parent);
		vc->root_container = vc->grid12;
	}
	uib_views_get_instance()->set_targeted_view((uib_view_context*)vc);

	//bind event handler


	evas_object_data_set(vc->root_container, KEY_VIEW_CONTEXT, vc);
	uib_views_create_callback(vc, evas_object_evas_get(vc->root_container), vc->root_container, create_callback_param);
	evas_object_event_callback_add(vc->root_container, EVAS_CALLBACK_DEL, (Evas_Object_Event_Cb)uib_views_destroy_callback, vc);

	return (uib_view_context*)vc;
}
void uib_view13_config_CIRCLE_360x360_portrait() {
	uib_app_manager_st* uib_app_manager = uib_app_manager_get_instance();
	uib_view13_view_context* vc = (uib_view13_view_context*)uib_app_manager->find_view_context("view13");
	if(!vc) {
		return;
	}
	if(vc->grid12) {
		elm_grid_clear(vc->grid12, EINA_FALSE);
		evas_object_size_hint_align_set(vc->grid12, -1.0, -1.0);
		if (!vc->bg12) {
			vc->bg12 = elm_bg_add(vc->grid12);
		}
		if(vc->bg12) {
			evas_object_size_hint_align_set(vc->bg12, -1.0, -1.0);
			int hexValue = strtol("#ffffff"+1, NULL, 16);
			int r = (hexValue&0xFF0000)>>16;
			int g = (hexValue&0xFF00)>>8;
			int b = (hexValue&0xFF);
			elm_bg_color_set(vc->bg12, r, g, b);
			evas_object_show(vc->bg12);
		}
		if (!vc->genlist2) {
			vc->genlist2= elm_genlist_add(vc->grid12);
		}
		if (!vc->circle_object_genlist2) {
			vc->circle_object_genlist2= eext_circle_object_genlist_add(vc->genlist2, uib_views_get_instance()->get_window_obj()->circle_surface);
			eext_rotary_object_event_activated_set(vc->circle_object_genlist2, EINA_TRUE);
		}
		if(vc->genlist2) {
			evas_object_size_hint_align_set(vc->genlist2, -1.0, -1.0);
			vc->genlistitem2= create_genlist_item(vc->genlist2, "default" , _UIB_LOCALE("Tienda 2"), _UIB_LOCALE("Sub Text"), "","", "","", NULL, ELM_GENLIST_ITEM_NONE, NULL, NULL);
			vc->genlistitem3= create_genlist_item(vc->genlist2, "default" , _UIB_LOCALE("Tienda 3"), _UIB_LOCALE("Sub Text"), "","", "","", NULL, ELM_GENLIST_ITEM_NONE, NULL, NULL);
			evas_object_show(vc->genlist2);
		}
		elm_grid_pack(vc->grid12, vc->bg12, 0, 0, 1050, 1055);
	}
}
