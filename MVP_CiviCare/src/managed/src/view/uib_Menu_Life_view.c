
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

uib_view_context* uib_view_Menu_Life_create(Evas_Object* parent, void* create_callback_param) {
	uib_Menu_Life_view_context* vc = calloc(1, sizeof(uib_Menu_Life_view_context));
	vc->parent = parent;
	vc->view_name = "Menu_Life";
	vc->indicator_state = ELM_WIN_INDICATOR_SHOW;
	vc->is_user_view = false;
	uib_app_manager_get_instance()->add_view_context((uib_view_context*)vc);
	if (!vc->grid5) {
		vc->grid5= elm_grid_add(parent);
		vc->root_container = vc->grid5;
	}
	uib_views_get_instance()->set_targeted_view((uib_view_context*)vc);

	//bind event handler


	evas_object_data_set(vc->root_container, KEY_VIEW_CONTEXT, vc);
	uib_views_create_callback(vc, evas_object_evas_get(vc->root_container), vc->root_container, create_callback_param);
	evas_object_event_callback_add(vc->root_container, EVAS_CALLBACK_DEL, (Evas_Object_Event_Cb)uib_views_destroy_callback, vc);

	return (uib_view_context*)vc;
}
void uib_Menu_Life_config_CIRCLE_360x360_portrait() {
	uib_app_manager_st* uib_app_manager = uib_app_manager_get_instance();
	uib_Menu_Life_view_context* vc = (uib_Menu_Life_view_context*)uib_app_manager->find_view_context("Menu_Life");
	if(!vc) {
		return;
	}
	if(vc->grid5) {
		elm_grid_clear(vc->grid5, EINA_FALSE);
		evas_object_size_hint_align_set(vc->grid5, -1.0, -1.0);
		if (!vc->bg6) {
			vc->bg6 = elm_bg_add(vc->grid5);
		}
		if(vc->bg6) {
			evas_object_size_hint_align_set(vc->bg6, -1.0, -1.0);
			int hexValue = strtol("#ffffff"+1, NULL, 16);
			int r = (hexValue&0xFF0000)>>16;
			int g = (hexValue&0xFF00)>>8;
			int b = (hexValue&0xFF);
			elm_bg_color_set(vc->bg6, r, g, b);
			evas_object_show(vc->bg6);
		}
		if (!vc->list1) {
			vc->list1= elm_list_add(vc->grid5);
		}
		if(vc->list1) {
			elm_list_mode_set(vc->list1, (Elm_List_Mode)ELM_LIST_SCROLL);
			elm_list_select_mode_set(vc->list1, (Elm_Object_Select_Mode)ELM_OBJECT_SELECT_MODE_DEFAULT);
			elm_list_multi_select_set(vc->list1, EINA_FALSE);
			elm_scroller_policy_set(vc->list1, (Elm_Scroller_Policy)ELM_SCROLLER_POLICY_AUTO, (Elm_Scroller_Policy)ELM_SCROLLER_POLICY_AUTO);
			vc->listitem1 = elm_list_item_append(vc->list1, _UIB_LOCALE("Boton de Pánico"), NULL, NULL, NULL, NULL);
			elm_list_item_selected_set(vc->listitem1, EINA_FALSE);
			vc->listitem2 = elm_list_item_append(vc->list1, _UIB_LOCALE("Mis rutas"), NULL, NULL, NULL, NULL);
			elm_list_item_selected_set(vc->listitem2, EINA_FALSE);
			vc->Reportar = elm_list_item_append(vc->list1, _UIB_LOCALE("List item"), NULL, NULL, NULL, NULL);
			elm_list_item_selected_set(vc->Reportar, EINA_FALSE);
			evas_object_size_hint_align_set(vc->list1, -1.0, -1.0);
			evas_object_size_hint_weight_set(vc->list1, 1.0, 1.0);
			elm_object_disabled_set(vc->list1, EINA_FALSE);
		elm_list_go(vc->list1);
			evas_object_show(vc->list1);
		}
		elm_grid_pack(vc->grid5, vc->bg6, -12, -19, 1023, 1020);
	}
}
