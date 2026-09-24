static Object SpawnObject(string type, vector position, vector orientation, float scale = 1.0)
{
    Object obj;
    if (type.Contains(".p3d")) {
        obj = GetGame().CreateStaticObjectUsingP3D(type, position, orientation, scale, false);
    } else {        
        obj = GetGame().CreateObjectEx(type, position, ECE_SETUP | ECE_CREATEPHYSICS | ECE_NOLIFETIME | ECE_NOPERSISTENCY_WORLD | ECE_NOPERSISTENCY_CHAR);
    }

    if (!obj) {
        Error("Failed to create object " + type);
        return null;
    }

    obj.SetPosition(position);
    obj.SetOrientation(orientation);
    obj.SetOrientation(obj.GetOrientation());
    obj.SetScale(scale);
    obj.Update();
	obj.SetAffectPathgraph(true, false);
	if (obj.CanAffectPathgraph()) {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
    } 

    return obj;
}

// Paste anything below this line into the bottom of your 'void main()' function


// Created Objects
SpawnObject("StaticObj_Misc_ConcreteBlock2", "10217.628906 243.007477 2171.026855", "-122.774666 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Railing_2", "10221.548828 243.082077 2164.941650", "-32.381035 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2", "10216.473633 242.996078 2172.822510", "-122.774635 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Railing_2", "10220.302734 243.076141 2166.916748", "-32.381035 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4_d", "10223.895508 243.418549 2174.308350", "-58.130802 0.000000 0.000000", 1);
SpawnObject("Land_wreck_sed02_aban1_police", "10227.829102 243.405640 2183.520020", "-72.000008 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_d_FagusSylvatica_fallen", "10201.604492 247.388290 2183.014160", "-134.633957 0.000000 19.699768", 0.999999);
SpawnObject("bldr_wall_indcnc_end_2", "10208.679688 243.390549 2170.297119", "58.251209 0.000000 -0.000000", 1);
SpawnObject("Land_wreck_sed02_aban2_police", "10206.596680 242.923523 2219.398438", "-125.999992 0.000000 -0.000000", 1);
SpawnObject("bldr_wreck_sed02_aban1_police", "10191.476563 243.097443 2211.329102", "-36.000004 0.000000 -0.000000", 1);
SpawnObject("bldr_wreck_sed02_aban1_police", "10193.383789 243.100571 2212.488281", "-36.000004 0.000000 0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10201.501953 244.190399 2182.546631", "-50.064716 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Railing_EndR", "10219.154297 243.068909 2168.682617", "146.089081 0.000000 -0.000000", 1);
SpawnObject("bldr_wreck_sed02_aban1_police", "10195.388672 243.092819 2214.056885", "-36.000004 0.000000 0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10213.021484 244.343842 2201.262451", "-14.064717 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10205.368164 244.179474 2223.839355", "39.935276 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndFnc_9", "10190.020508 242.921448 2209.408691", "-124.561127 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4_d", "10232.910156 243.507431 2163.083984", "149.359222 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10223.769531 244.449661 2185.252686", "12.935278 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndFnc_Corner", "10188.823242 242.912354 2213.608643", "-34.561138 0.000000 0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10238.142578 244.681503 2161.124512", "12.935278 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Railing_2", "10219.594727 243.062332 2170.182129", "57.618988 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndFnc_3_Hole", "10191.247070 242.900284 2215.384766", "-35.974384 0.000000 0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10219.216797 244.576996 2149.982666", "12.935278 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndFnc_3_D", "10193.883789 242.898026 2216.890869", "-37.460670 0.000000 0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10206.600586 244.553955 2167.826660", "12.935278 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10184.932617 244.174057 2198.495361", "12.935278 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_t_BetulaPendulaE_1s_summer", "10200.120117 244.293518 2184.469238", "83.001038 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndFnc_Pole", "10194.790039 242.895798 2218.005615", "-109.543533 0.000000 -0.000000", 0.999999);
SpawnObject("bldr_wall_gate_kolchoz", "10233.472656 244.921738 2173.936035", "58.665386 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10188.228516 244.102829 2215.983643", "12.935278 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4_d", "10233.241211 243.552841 2168.396973", "-36.000004 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10209.003906 244.402481 2190.652588", "57.935280 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4_d", "10228.281250 243.455643 2177.206299", "-7.793350 0.000000 0.000000", 1);
SpawnObject("AP_static_gore_deadbody5", "10203.435547 242.759216 2189.577881", "-98.999985 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndFnc_3_D", "10193.989258 242.929626 2204.313721", "-126.243134 0.000000 -0.000000", 1);
SpawnObject("Land_wreck_sed02_aban1_police", "10236.749023 243.700577 2166.991455", "-9.000010 0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_spike_corpse4", "10211.354492 244.423294 2193.778320", "-63.000000 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_end_2", "10208.829102 243.067581 2207.574951", "27.000002 0.000000 -0.000000", 1);
SpawnObject("AP_static_gore_spike_corpse4", "10205.221680 244.290955 2190.127930", "-36.000004 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndFnc_9", "10197.883789 242.949127 2205.214355", "145.438843 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4_d", "10214.969727 243.404602 2160.420654", "-123.078667 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4_d", "10211.797852 243.459122 2165.322021", "-123.078667 0.000000 -0.000000", 1);
SpawnObject("Land_Wall_Gate_Fen2_L", "10200.998047 243.368027 2209.558838", "-125.952599 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_end_2", "10209.716797 243.398483 2168.710693", "-119.877724 0.000000 -0.000000", 1);
SpawnObject("Land_Wall_Gate_Fen2_R", "10199.216797 243.352966 2212.013672", "-125.672974 0.000000 -0.000000", 1);
SpawnObject("Land_wreck_sed02_aban2_police", "10203.040039 243.047729 2179.628906", "-80.999992 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Railing_EndR", "10221.365234 243.056946 2171.312256", "-122.751633 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndFnc_Corner", "10197.385742 242.922073 2214.261719", "-123.841690 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Pallets3", "10208.135742 249.037704 2176.293945", "14.433632 0.000000 -0.000000", 1);
SpawnObject("Land_Ruin_BusStop_Village2", "10220.050781 249.296097 2181.532471", "61.424877 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndFnc_Pole", "10201.898438 242.963913 2208.235596", "50.079605 0.000000 -0.000000", 1);
SpawnObject("Land_Ruin_BusStop_Village2", "10212.124023 249.296097 2180.753418", "-28.575125 0.000000 0.000000", 1);
SpawnObject("Land_Ruin_BusStop_Village2", "10215.544922 249.296097 2175.415527", "149.916794 0.000000 -0.000000", 1);
SpawnObject("Land_Ruin_BusStop_Village2", "10206.972656 249.296097 2173.273682", "-117.532471 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_Pallets3", "10208.336914 249.037704 2179.203857", "-28.170904 0.000000 0.000000", 1);
SpawnObject("bldr_plnt_d_FagusSylvatica_stumpc", "10190.735352 242.626968 2190.401611", "135.000000 0.000000 -0.000000", 1);
SpawnObject("dz/structures/industrial/construction/proxy/cihly3.p3d", "10204.752930 242.417877 2191.686523", "-1.924918 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderPeter", "10226.071289 242.751205 2163.292969", "-31.290997 0.000000 0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10225.534180 244.523743 2155.036133", "12.935278 0.000000 -0.000000", 1);
SpawnObject("bldr_Prison_MainCastle_barsdoors", "10227.020508 243.691040 2163.983887", "60.540287 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4", "10204.966797 243.044189 2208.009033", "0.000009 0.000000 -0.000000", 1);
SpawnObject("bldr_Prison_MainCastle_barsdoors", "10223.986328 243.718277 2162.182373", "60.100471 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_gate_kolchoz", "10221.604492 244.699615 2194.243652", "58.665371 0.000000 -0.000000", 1);
SpawnObject("bldr_Prison_MainCastle_barsdoors", "10224.537109 243.649551 2160.271729", "-160.450226 89.247223 -127.893097", 1);
SpawnObject("StaticObj_Wreck_BMP1_NoPlacement_DE", "10199.701172 243.478806 2195.933350", "81.310852 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4_d", "10221.738281 243.328598 2188.324707", "-43.793346 0.000000 -0.000000", 1);
SpawnObject("bldr_Prison_MainCastle_barsdoors", "10229.463867 243.642227 2163.276855", "-160.450195 89.247482 -127.893059", 1);
SpawnObject("StaticObj_Tank_Small_White", "10204.430664 243.693542 2201.920654", "63.258171 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4_d", "10216.666016 243.300400 2196.599609", "-25.793344 0.000000 -0.000000", 1);
SpawnObject("bldr_Prison_MainCastle_barsdoors", "10227.134766 243.723633 2159.653076", "-120.549759 0.000000 -0.000000", 1);
SpawnObject("bldr_mil_radar_mobile_generator", "10193.497070 243.889923 2200.113525", "-124.979111 0.000000 -0.000000", 1);
SpawnObject("dz/structures/industrial/sheds/shed_open_sideroof.p3d", "10201.492188 242.457336 2191.321045", "1.031514 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_end_2", "10218.977539 243.342545 2185.598877", "-45.000000 0.000000 -0.000000", 1);
SpawnObject("bldr_mil_radar_mobile_generator", "10196.252930 243.903809 2185.758301", "-118.787636 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_end_3", "10217.495117 242.303314 2184.803711", "-9.000008 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10200.659180 244.210983 2201.301025", "-14.064716 0.000000 0.000000", 1);
SpawnObject("bldr_wall_indcnc_end_2", "10213.060547 243.315231 2194.866699", "-25.517530 0.000000 0.000000", 1);
SpawnObject("bldr_plnt_b_betulaNana_1s_summer", "10199.877930 242.410355 2201.477539", "102.000732 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4_d", "10210.835938 243.247162 2197.121826", "62.488182 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_4_d", "10209.460938 243.144852 2202.684814", "89.488167 0.000000 -0.000000", 1);
SpawnObject("bldr_plnt_d_FagusSylvatica_stump", "10195.534180 243.353577 2189.683594", "-36.286011 -1.979002 1.536076", 1);
SpawnObject("bldr_plnt_b_caraganaArborescens_2s_summer", "10186.295898 244.112518 2208.792480", "12.935278 0.000000 -0.000000", 1);
SpawnObject("bldr_wall_indcnc_end_3", "10209.450195 242.064163 2206.328369", "-89.999985 0.000000 -0.000000", 1);
SpawnObject("Land_wreck_sed02_aban2_police", "10211.560547 242.990067 2208.033203", "-90.000000 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2", "10189.502930 242.656464 2189.569092", "-120.027084 0.000000 -0.000000", 1);
SpawnObject("Land_wreck_sed02_aban1_police", "10229.692383 243.478867 2179.699463", "-149.708069 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2", "10187.853516 242.663834 2191.347656", "-147.027084 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2", "10183.407227 242.672409 2200.506104", "-66.027084 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndFnc_Corner", "10195.671875 242.902496 2216.686279", "-124.216110 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderDenis", "10224.399414 245.281525 2167.526855", "56.943130 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Misc_ConcreteBlock2", "10184.229492 242.692566 2196.189697", "-147.027084 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Railing_2", "10222.784180 243.088989 2162.990234", "-32.381035 0.000000 0.000000", 1);


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
