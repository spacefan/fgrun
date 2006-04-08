// generated by Fast Light User Interface Designer (fluid) version 1.0106

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include "wizard.h"
#include "folder_open.xpm"

inline void Wizard::cb_fg_exe__i(Fl_Input*, void*) {
  fg_exe_update_cb();
}
void Wizard::cb_fg_exe_(Fl_Input* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->user_data()))->cb_fg_exe__i(o,v);
}

inline void Wizard::cb__i(Fl_Button*, void*) {
  fg_exe_select_cb();
}
void Wizard::cb_(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->user_data()))->cb__i(o,v);
}

inline void Wizard::cb_fg_root__i(Fl_Input*, void*) {
  fg_root_update_cb();
}
void Wizard::cb_fg_root_(Fl_Input* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->user_data()))->cb_fg_root__i(o,v);
}

inline void Wizard::cb_1_i(Fl_Button*, void*) {
  fg_root_select_cb();
}
void Wizard::cb_1(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->user_data()))->cb_1_i(o,v);
}

inline void Wizard::cb_scenery_dir_list__i(Fl_Browser*, void*) {
  scenery_dir_select_cb();
}
void Wizard::cb_scenery_dir_list_(Fl_Browser* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->user_data()))->cb_scenery_dir_list__i(o,v);
}

inline void Wizard::cb_scenery_dir_up__i(Fl_Button*, void*) {
  scenery_dir_up_cb();
}
void Wizard::cb_scenery_dir_up_(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_scenery_dir_up__i(o,v);
}

inline void Wizard::cb_scenery_dir_down__i(Fl_Button*, void*) {
  scenery_dir_down_cb();
}
void Wizard::cb_scenery_dir_down_(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_scenery_dir_down__i(o,v);
}

inline void Wizard::cb_cache_delete__i(Fl_Button*, void*) {
  delete_cache_file_cb();
}
void Wizard::cb_cache_delete_(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->user_data()))->cb_cache_delete__i(o,v);
}

inline void Wizard::cb_Add_i(Fl_Button*, void*) {
  scenery_dir_add_cb();
}
void Wizard::cb_Add(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_Add_i(o,v);
}

inline void Wizard::cb_scenery_dir_delete__i(Fl_Button*, void*) {
  scenery_dir_delete_cb();
}
void Wizard::cb_scenery_dir_delete_(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_scenery_dir_delete__i(o,v);
}

inline void Wizard::cb_aircraft_i(Fl_Browser*, void*) {
  preview_aircraft();
}
void Wizard::cb_aircraft(Fl_Browser* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_aircraft_i(o,v);
}

inline void Wizard::cb_Advanced_i(Fl_Button*, void*) {
  advanced_cb();
}
void Wizard::cb_Advanced(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_Advanced_i(o,v);
}

inline void Wizard::cb_show_cmd_line_i(Fl_Check_Button*, void*) {
  show_cmd_line_cb();
}
void Wizard::cb_show_cmd_line(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_show_cmd_line_i(o,v);
}

inline void Wizard::cb_resolution_i(Fl_Choice*, void*) {
  resolution_cb();
}
void Wizard::cb_resolution(Fl_Choice* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_resolution_i(o,v);
}

Fl_Menu_Item Wizard::menu_resolution[] = {
 {"640x480", 0,  0, 0, 0, 0, 0, 14, 56},
 {"800x600", 0,  0, 0, 0, 0, 0, 14, 56},
 {"1024x768", 0,  0, 0, 0, 0, 0, 14, 56},
 {"1280x1024", 0,  0, 0, 0, 0, 0, 14, 56},
 {"1600x1200", 0,  0, 0, 0, 0, 0, 14, 56},
 {0,0,0,0,0,0,0,0,0}
};

inline void Wizard::cb_game_mode_i(Fl_Check_Button*, void*) {
  game_mode_cb();
}
void Wizard::cb_game_mode(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_game_mode_i(o,v);
}

inline void Wizard::cb_horizon_effect_i(Fl_Check_Button*, void*) {
  horizon_effect_cb();
}
void Wizard::cb_horizon_effect(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_horizon_effect_i(o,v);
}

inline void Wizard::cb_enhanced_lighting_i(Fl_Check_Button*, void*) {
  enhanced_lighting_cb();
}
void Wizard::cb_enhanced_lighting(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_enhanced_lighting_i(o,v);
}

inline void Wizard::cb_specular_highlight_i(Fl_Check_Button*, void*) {
  specular_highlight_cb();
}
void Wizard::cb_specular_highlight(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_specular_highlight_i(o,v);
}

inline void Wizard::cb_clouds_3d_i(Fl_Check_Button*, void*) {
  clouds_3d_cb();
}
void Wizard::cb_clouds_3d(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_clouds_3d_i(o,v);
}

inline void Wizard::cb_random_objects_i(Fl_Check_Button*, void*) {
  random_objects_cb();
}
void Wizard::cb_random_objects(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_random_objects_i(o,v);
}

inline void Wizard::cb_ai_models_i(Fl_Check_Button*, void*) {
  ai_models_cb();
}
void Wizard::cb_ai_models(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_ai_models_i(o,v);
}

inline void Wizard::cb_time_of_day_i(Fl_Check_Button*, void*) {
  time_of_day_cb();
}
void Wizard::cb_time_of_day(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_time_of_day_i(o,v);
}

inline void Wizard::cb_time_of_day_value_i(Fl_Choice*, void*) {
  time_of_day_value_cb();
}
void Wizard::cb_time_of_day_value(Fl_Choice* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_time_of_day_value_i(o,v);
}

Fl_Menu_Item Wizard::menu_time_of_day_value[] = {
 {"noon", 0,  0, 0, 0, 0, 0, 14, 56},
 {"dusk", 0,  0, 0, 0, 0, 0, 14, 56},
 {"midnight", 0,  0, 0, 0, 0, 0, 14, 56},
 {"dawn", 0,  0, 0, 0, 0, 0, 14, 56},
 {0,0,0,0,0,0,0,0,0}
};

inline void Wizard::cb_real_weather_fetch_i(Fl_Check_Button*, void*) {
  real_weather_fetch_cb();
}
void Wizard::cb_real_weather_fetch(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_real_weather_fetch_i(o,v);
}

inline void Wizard::cb_auto_coordination_i(Fl_Check_Button*, void*) {
  auto_coordination_cb();
}
void Wizard::cb_auto_coordination(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_auto_coordination_i(o,v);
}

inline void Wizard::cb_atlas_i(Fl_Check_Button*, void*) {
  atlas_cb();
}
void Wizard::cb_atlas(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_atlas_i(o,v);
}

inline void Wizard::cb_atlas_host_i(Fl_Input*, void*) {
  atlas_host_cb();
}
void Wizard::cb_atlas_host(Fl_Input* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_atlas_host_i(o,v);
}

inline void Wizard::cb_atlas_port_i(Fl_Value_Input*, void*) {
  atlas_port_cb();
}
void Wizard::cb_atlas_port(Fl_Value_Input* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_atlas_port_i(o,v);
}

inline void Wizard::cb_multiplay_i(Fl_Check_Button*, void*) {
  multiplay_cb();
}
void Wizard::cb_multiplay(Fl_Check_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_multiplay_i(o,v);
}

inline void Wizard::cb_multiplay_callsign_i(Fl_Input*, void*) {
  multiplay_field_cb();
}
void Wizard::cb_multiplay_callsign(Fl_Input* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_multiplay_callsign_i(o,v);
}

inline void Wizard::cb_multiplay_host_i(Fl_Input*, void*) {
  multiplay_field_cb();
}
void Wizard::cb_multiplay_host(Fl_Input* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_multiplay_host_i(o,v);
}

inline void Wizard::cb_multiplay_in_i(Fl_Value_Input*, void*) {
  multiplay_field_cb();
}
void Wizard::cb_multiplay_in(Fl_Value_Input* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_multiplay_in_i(o,v);
}

inline void Wizard::cb_multiplay_out_i(Fl_Value_Input*, void*) {
  multiplay_field_cb();
}
void Wizard::cb_multiplay_out(Fl_Value_Input* o, void* v) {
  ((Wizard*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_multiplay_out_i(o,v);
}

inline void Wizard::cb_next_i(Fl_Button*, void*) {
  next_cb();
}
void Wizard::cb_next(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->user_data()))->cb_next_i(o,v);
}

inline void Wizard::cb_prev_i(Fl_Button*, void*) {
  prev_cb();
}
void Wizard::cb_prev(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->user_data()))->cb_prev_i(o,v);
}

inline void Wizard::cb_cancel_i(Fl_Button*, void*) {
  cancel_cb();
}
void Wizard::cb_cancel(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->user_data()))->cb_cancel_i(o,v);
}

inline void Wizard::cb_defaults_i(Fl_Button*, void*) {
  defaults_cb();
}
void Wizard::cb_defaults(Fl_Button* o, void* v) {
  ((Wizard*)(o->parent()->parent()->user_data()))->cb_defaults_i(o,v);
}

Wizard::Wizard() : prefs( Fl_Preferences::USER, "flightgear.org", "fgrun" ), logwin(0), folder_open_pixmap(folder_open_xpm), adv(0) {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = win = new Fl_Double_Window(640, 480, "FlightGear Wizard");
    w = o;
    o->user_data((void*)(this));
    { Fl_Wizard* o = wiz = new Fl_Wizard(0, 0, 645, 440);
      { Fl_Group* o = page[0] = new Fl_Group(0, 0, 640, 440, "Select Paths");
        o->labelfont(1);
        o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        o->hide();
        { Fl_Help_View* o = about_ = new Fl_Help_View(5, 25, 630, 115);
          o->labeltype(FL_NO_LABEL);
        }
        { Fl_Input* o = fg_exe_ = new Fl_Input(130, 175, 335, 25, "Executable:");
          o->tooltip("Full pathname to FlightGear executable");
          o->labelsize(12);
          o->textsize(12);
          o->callback((Fl_Callback*)cb_fg_exe_);
          o->when(FL_WHEN_ENTER_KEY);
        }
        { Fl_Button* o = new Fl_Button(470, 175, 25, 25);
          o->tooltip("Full pathname to FlightGear executable");
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_);
          o->image(folder_open_pixmap);
        }
        { Fl_Input* o = fg_root_ = new Fl_Input(130, 205, 335, 25, "FG_ROOT:");
          o->tooltip("root data path");
          o->labelsize(12);
          o->textsize(12);
          o->callback((Fl_Callback*)cb_fg_root_);
          o->when(FL_WHEN_CHANGED);
        }
        { Fl_Button* o = new Fl_Button(470, 205, 25, 25);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_1);
          o->image(folder_open_pixmap);
        }
        { Fl_Browser* o = scenery_dir_list_ = new Fl_Browser(130, 275, 335, 65, "FG_SCENERY:");
          o->tooltip("Scenery directories");
          o->type(2);
          o->labelsize(12);
          o->textsize(12);
          o->callback((Fl_Callback*)cb_scenery_dir_list_);
          o->align(FL_ALIGN_LEFT);
          Fl_Group::current()->resizable(o);
        }
        { Fl_Group* o = new Fl_Group(470, 275, 25, 30);
          { Fl_Button* o = scenery_dir_up_ = new Fl_Button(470, 280, 25, 25, "@8>");
            o->callback((Fl_Callback*)cb_scenery_dir_up_);
            o->deactivate();
          }
          { Fl_Box* o = new Fl_Box(470, 275, 25, 5);
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(470, 305, 25, 35);
          { Fl_Button* o = scenery_dir_down_ = new Fl_Button(470, 310, 25, 25, "@2>");
            o->callback((Fl_Callback*)cb_scenery_dir_down_);
            o->deactivate();
          }
          { Fl_Box* o = new Fl_Box(470, 335, 25, 5);
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        { Fl_Button* o = cache_delete_ = new Fl_Button(470, 370, 60, 25, "Delete");
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_cache_delete_);
          o->deactivate();
        }
        { Fl_Output* o = cache_file_ = new Fl_Output(130, 370, 335, 25, "Airports Cache:");
          o->labelsize(12);
          o->textsize(12);
        }
        { Fl_Group* o = new Fl_Group(130, 245, 335, 25);
          { Fl_Button* o = new Fl_Button(130, 245, 60, 25, "Add...");
            o->tooltip("Add a scenery directory");
            o->labelsize(12);
            o->callback((Fl_Callback*)cb_Add);
          }
          { Fl_Button* o = scenery_dir_delete_ = new Fl_Button(195, 245, 60, 25, "Delete");
            o->tooltip("Delete a scenery directory");
            o->labelsize(12);
            o->callback((Fl_Callback*)cb_scenery_dir_delete_);
            o->deactivate();
          }
          { Fl_Box* o = new Fl_Box(260, 245, 205, 25);
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        o->end();
      }
      { Fl_Group* o = page[1] = new Fl_Group(0, 0, 640, 440, "Select an aircraft");
        o->labelfont(1);
        o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        o->hide();
        { Fl_Tile* o = new Fl_Tile(0, 20, 635, 415);
          { Fl_Browser* o = aircraft = new Fl_Browser(5, 20, 200, 415);
            o->type(2);
            o->labelsize(12);
            o->textsize(12);
            o->callback((Fl_Callback*)cb_aircraft);
            o->align(FL_ALIGN_TOP);
          }
          { Fl_Plib* o = preview = new Fl_Plib(205, 20, 430, 415, "Preview");
            o->box(FL_THIN_DOWN_BOX);
            o->color(FL_BACKGROUND_COLOR);
            o->selection_color(FL_BACKGROUND_COLOR);
            o->labeltype(FL_NORMAL_LABEL);
            o->labelfont(0);
            o->labelsize(12);
            o->labelcolor(FL_BLACK);
            o->align(FL_ALIGN_CENTER);
            o->when(FL_WHEN_RELEASE);
          }
          { Fl_Box* o = new Fl_Box(80, 190, 265, 65);
            o->hide();
            Fl_Group::current()->resizable(o);
          }
          o->end();
          Fl_Group::current()->resizable(o);
        }
        o->end();
      }
      { Fl_Group* o = page[2] = new Fl_Group(0, 0, 640, 440, "Select a location");
        o->labelfont(1);
        o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        { AirportBrowser* o = airports_ = new AirportBrowser(5, 25, 630, 380);
          o->box(FL_NO_BOX);
          o->color(FL_BACKGROUND_COLOR);
          o->selection_color(FL_BACKGROUND_COLOR);
          o->labeltype(FL_NORMAL_LABEL);
          o->labelfont(0);
          o->labelsize(14);
          o->labelcolor(FL_BLACK);
          o->align(FL_ALIGN_CENTER);
          o->when(FL_WHEN_RELEASE);
          Fl_Group::current()->resizable(o);
        }
        { Fl_Group* o = new Fl_Group(5, 410, 630, 25);
          carrier_ = new Fl_Input(100, 410, 100, 25, "Carrier : ");
          parkpos_ = new Fl_Input(300, 410, 100, 25, "Park pos :");
          { Fl_Box* o = new Fl_Box(400, 410, 235, 25);
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        o->end();
      }
      { Fl_Group* o = page[3] = new Fl_Group(0, 0, 645, 440);
        o->hide();
        { Fl_Group* o = new Fl_Group(0, 405, 640, 25);
          { Fl_Button* o = new Fl_Button(545, 405, 90, 25, "Advanced...");
            o->callback((Fl_Callback*)cb_Advanced);
          }
          { Fl_Box* o = new Fl_Box(190, 405, 355, 25);
            Fl_Group::current()->resizable(o);
          }
          { Fl_Check_Button* o = show_cmd_line = new Fl_Check_Button(10, 405, 180, 25, "Show command line");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_show_cmd_line);
          }
          o->end();
        }
        { Fl_Text_Display* o = text = new Fl_Text_Display(5, 250, 630, 145);
          o->box(FL_THIN_DOWN_BOX);
          o->align(FL_ALIGN_LEFT);
          o->hide();
        }
        { Fl_Group* o = new Fl_Group(5, 5, 630, 85, "Display");
          o->box(FL_ENGRAVED_FRAME);
          o->labelfont(1);
          o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
          { Fl_Choice* o = resolution = new Fl_Choice(100, 30, 125, 25, "Resolution :");
            o->down_box(FL_BORDER_BOX);
            o->callback((Fl_Callback*)cb_resolution);
            o->menu(menu_resolution);
          }
          { Fl_Check_Button* o = game_mode = new Fl_Check_Button(25, 60, 210, 20, "Game mode ( Fullscreen )");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_game_mode);
          }
          { Fl_Check_Button* o = horizon_effect = new Fl_Check_Button(250, 10, 170, 20, "Horizon effect");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_horizon_effect);
          }
          { Fl_Check_Button* o = enhanced_lighting = new Fl_Check_Button(250, 35, 205, 20, "Enhanced runway lighting");
            o->tooltip("Use with caution. It may drop your framerate dramatically");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_enhanced_lighting);
          }
          { Fl_Check_Button* o = specular_highlight = new Fl_Check_Button(250, 60, 170, 20, "Specular highlight");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_specular_highlight);
          }
          { Fl_Box* o = new Fl_Box(610, 80, 25, 10);
            Fl_Group::current()->resizable(o);
          }
          { Fl_Check_Button* o = clouds_3d = new Fl_Check_Button(425, 10, 205, 20, "3D clouds (experimental)");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_clouds_3d);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(5, 95, 630, 85, "Features");
          o->box(FL_ENGRAVED_FRAME);
          o->labelfont(1);
          o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
          { Fl_Check_Button* o = random_objects = new Fl_Check_Button(25, 125, 180, 25, "Random objects");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_random_objects);
          }
          { Fl_Check_Button* o = ai_models = new Fl_Check_Button(25, 150, 180, 25, "AI models");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_ai_models);
          }
          { Fl_Check_Button* o = time_of_day = new Fl_Check_Button(250, 100, 120, 25, "Time of day :");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_time_of_day);
          }
          { Fl_Choice* o = time_of_day_value = new Fl_Choice(375, 100, 115, 25);
            o->down_box(FL_BORDER_BOX);
            o->callback((Fl_Callback*)cb_time_of_day_value);
            o->menu(menu_time_of_day_value);
          }
          { Fl_Check_Button* o = real_weather_fetch = new Fl_Check_Button(250, 125, 180, 25, "Real weather fetch");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_real_weather_fetch);
          }
          { Fl_Check_Button* o = auto_coordination = new Fl_Check_Button(250, 150, 180, 25, "Auto-coordination");
            o->down_box(FL_DOWN_BOX);
            o->callback((Fl_Callback*)cb_auto_coordination);
          }
          { Fl_Box* o = new Fl_Box(605, 170, 30, 10);
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(5, 185, 630, 60);
          { Fl_Group* o = atlas_group = new Fl_Group(5, 185, 245, 60);
            o->box(FL_ENGRAVED_FRAME);
            o->labeltype(FL_SHADOW_LABEL);
            o->labelfont(1);
            o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
            { Fl_Check_Button* o = atlas = new Fl_Check_Button(10, 190, 70, 25, "Atlas");
              o->down_box(FL_DOWN_BOX);
              o->labelfont(1);
              o->callback((Fl_Callback*)cb_atlas);
            }
            { Fl_Input* o = atlas_host = new Fl_Input(95, 215, 85, 25, "Hostname :");
              o->tooltip("Hostname");
              o->callback((Fl_Callback*)cb_atlas_host);
              o->when(FL_WHEN_CHANGED);
              Fl_Group::current()->resizable(o);
            }
            { Fl_Value_Input* o = atlas_port = new Fl_Value_Input(190, 215, 50, 25, ":");
              o->callback((Fl_Callback*)cb_atlas_port);
            }
            o->end();
          }
          { Fl_Group* o = multiplay_group = new Fl_Group(255, 185, 380, 60);
            o->box(FL_ENGRAVED_FRAME);
            { Fl_Check_Button* o = multiplay = new Fl_Check_Button(260, 190, 110, 25, "Multiplayer");
              o->down_box(FL_DOWN_BOX);
              o->labelfont(1);
              o->callback((Fl_Callback*)cb_multiplay);
            }
            { Fl_Input* o = multiplay_callsign = new Fl_Input(480, 190, 145, 25, "Callsign :");
              o->callback((Fl_Callback*)cb_multiplay_callsign);
              o->when(FL_WHEN_CHANGED);
            }
            { Fl_Input* o = multiplay_host = new Fl_Input(345, 215, 95, 25, "Hostname :");
              o->tooltip("Peer hostname");
              o->callback((Fl_Callback*)cb_multiplay_host);
              o->when(FL_WHEN_CHANGED);
            }
            { Fl_Value_Input* o = multiplay_in = new Fl_Value_Input(480, 215, 50, 25, "in :");
              o->tooltip("Input port number");
              o->callback((Fl_Callback*)cb_multiplay_in);
            }
            { Fl_Value_Input* o = multiplay_out = new Fl_Value_Input(575, 215, 50, 25, "out :");
              o->tooltip("Output port number");
              o->callback((Fl_Callback*)cb_multiplay_out);
            }
            { Fl_Box* o = new Fl_Box(625, 190, 10, 50);
              Fl_Group::current()->resizable(o);
            }
            o->end();
            Fl_Group::current()->resizable(o);
          }
          o->end();
        }
        { Fl_Box* o = new Fl_Box(245, 250, 280, 145);
          Fl_Group::current()->resizable(o);
        }
        o->end();
      }
      { Fl_Group* o = page[4] = new Fl_Group(0, 0, 640, 440);
        o->hide();
        o->deactivate();
        o->end();
      }
      win->resizable( wiz );
      o->end();
    }
    { Fl_Group* o = new Fl_Group(0, 450, 640, 25);
      { Fl_Button* o = next = new Fl_Button(490, 450, 70, 25, "Next");
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_next);
      }
      { Fl_Button* o = prev = new Fl_Button(415, 450, 70, 25, "Prev");
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_prev);
      }
      { Fl_Button* o = cancel = new Fl_Button(565, 450, 70, 25, "Quit");
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_cancel);
      }
      { Fl_Box* o = new Fl_Box(75, 450, 340, 25);
        Fl_Group::current()->resizable(o);
      }
      { Fl_Button* o = defaults = new Fl_Button(5, 450, 70, 25, "Defaults");
        o->callback((Fl_Callback*)cb_defaults);
      }
      o->end();
    }
    o->end();
  }
}

Fl_Double_Window* Wizard::make_launch_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = launch_window = new Fl_Double_Window(455, 155, "FlightGear running...");
    w = o;
    o->user_data((void*)(this));
    { Fl_Group* o = new Fl_Group(15, 25, 425, 115);
      { Fl_Box* o = new Fl_Box(15, 25, 425, 25, "FlightGear has been started");
        o->labelfont(1);
        o->labelsize(18);
        o->align(FL_ALIGN_WRAP);
      }
      { Fl_Box* o = new Fl_Box(15, 50, 425, 25, "Please wait...");
        o->labelfont(1);
      }
      { Fl_Box* o = new Fl_Box(15, 90, 425, 25, "To change aircraft, exit FlightGear");
        o->labelfont(1);
      }
      { Fl_Box* o = new Fl_Box(15, 115, 425, 25, "and return to this launcher");
        o->labelfont(1);
      }
      o->end();
    }
    o->end();
  }
  return w;
}
