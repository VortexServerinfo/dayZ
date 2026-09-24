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
SpawnObject("land_trader_container", "6263.510742 458.937988 2430.261475", "174.684341 0.000000 -0.000000", 1);
SpawnObject("dna_keycards_objects_crate/crate/kccratemedicalbbox.p3d", "6262.328125 457.927429 2431.274414", "-0.071153 0.000000 0.000000", 1);
SpawnObject("dna_keycards_objects_keycard/keycards/blisterpackempty.p3d", "6263.300781 458.762787 2431.142090", "-0.118712 0.000053 0.003439", 1);
SpawnObject("dna_keycards_objects_keycard/keycards/blisterpack.p3d", "6263.371094 458.761475 2431.162109", "-0.103496 0.000000 0.000000", 1);
SpawnObject("dna_keycards_objects_keycard/keycards/cboard.p3d", "6263.335938 457.936920 2431.229004", "-0.323464 -1.430265 0.267534", 4);
SpawnObject("dna_keycards_objects_keycard/keycards/keycard.p3d", "6263.335449 458.393951 2431.158691", "-0.088656 0.000000 0.000000", 1);
SpawnObject("dna_keycards_objects_crate/crate/kccrate.p3d", "6264.433105 458.429840 2431.288330", "-0.144970 0.000000 0.000000", 0.24);
SpawnObject("dna_keycards_objects_crate/crate/kccratexl.p3d", "6264.493652 457.932007 2431.274658", "-0.097408 0.000000 0.000000", 0.24);
SpawnObject("dna_keycards_objects_crate/wood crate/kcwoodcrate.p3d", "6265.519531 458.447601 2431.585205", "-0.114083 0.000000 0.000000", 0.24);
SpawnObject("dna_keycards_objects_crate/wood crate/kcwoodcratesmol.p3d", "6265.451172 456.846954 2430.608398", "-0.650001 0.000000 0.000000", 1);
SpawnObject("dna_keycards_objects_strongroom/strongroom/strongroom.p3d", "6263.827148 454.105286 2431.214844", "-1.661160 0.000000 -0.000000", 0.15);
SpawnObject("DNA_Floodlight_White", "6262.610352 459.110016 2429.153564", "-9.000000 0.000000 -0.000000", 1);
SpawnObject("dna_keycards_objects_crafting/assets/dna_solderkit.p3d", "6262.213867 458.429443 2431.295898", "-0.107234 0.000000 0.000000", 1);
SpawnObject("dna_keycards_objects_crafting/assets/dna_handskit.p3d", "6263.232422 456.972961 2431.280029", "3.141593 -1.529618 -3.141593", 1);
SpawnObject("dna_keycards_objects_crafting/assets/laptop.p3d", "6263.262695 457.461853 2431.309082", "2.667967 -1.512644 -1.086707", 1);
SpawnObject("dna_keycards_objects_crafting/assets/dnabattery40v.p3d", "6262.226563 456.909119 2431.334473", "-0.314159 0.000000 0.000000", 1);
SpawnObject("dna_keycards_objects_crafting/assets/dna_kit.p3d", "6262.272949 457.430878 2431.281006", "1.453901 0.000000 -0.000000", 0.9);
SpawnObject("dna_keycards_objects_crafting/assets/dna_solder.p3d", "6263.065918 457.890991 2431.337158", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dna_keycards_objects_crafting/assets/dna_flux.p3d", "6263.183594 457.893402 2431.487305", "0.000000 0.000000 -0.000000", 1);
SpawnObject("dna_keycards_objects_crafting/assets/dna_bolts.p3d", "6263.580566 457.981018 2431.353027", "-2.134108 0.000000 1.568687", 1);
SpawnObject("dna_keycards_objects_lockouts/doors/dnadoor.p3d", "6259.615234 458.406982 2431.234375", "1.490197 0.000000 -0.000000", 1);
SpawnObject("ExpansionTraderBaty", "6263.442871 456.805206 2429.610352", "174.335526 0.000000 -0.000000", 1);
SpawnObject("cs_mapobjects/airdrop/airdrop.p3d", "6318.663086 459.430847 2418.890869", "0.157080 0.000000 -0.000000", 1);
SpawnObject("CS_Airdrop", "6281.474121 453.565918 2395.267334", "0.000003 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "6259.485352 456.863556 2429.542236", "-94.683395 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "6259.667480 456.855988 2427.432373", "-94.683395 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "6267.516113 456.866913 2430.605713", "84.597160 0.000000 -0.000000", 1);
SpawnObject("CS_Fence_2", "6267.703125 456.860474 2428.575684", "84.597137 0.000000 -0.000000", 1);
SpawnObject("CS_Tower", "6231.483887 458.035889 2414.347168", "-98.999977 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_Fen6_8", "6262.619629 458.007690 2421.855957", "166.098602 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Furniture_Workbench", "6279.641113 458.155670 2418.772461", "81.257805 0.000000 -0.000000", 1);
SpawnObject("ExpansionPropCircularSaw3", "6284.558594 458.421875 2416.142822", "79.168709 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Pier_Wooden3_Barrels", "6311.679688 457.023346 2413.510742", "-114.122261 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Pier_Concrete4_End", "6263.594238 455.790588 2428.963623", "-5.515642 0.000000 0.000000", 1);
SpawnObject("StaticObj_Pier_Concrete4_End", "6284.191895 452.736389 2396.938477", "179.763062 0.000000 -0.000000", 1);
SpawnObject("bldr_metal_cutting_saw", "6285.442871 459.321564 2419.671631", "-98.999985 0.000000 -0.000000", 1);
SpawnObject("ExpansionPropTableSaw", "6287.664551 458.743286 2418.199463", "-105.141418 -3.129490 0.586101", 1);
SpawnObject("StaticObj_Pier_Wooden3_16m", "6305.969238 457.036926 2426.640137", "-81.896568 0.000000 0.000000", 1);
SpawnObject("StaticObj_Furniture_Metal_cutting_saw", "6277.551270 459.277039 2418.584229", "-9.000000 0.000000 -0.000000", 1);
SpawnObject("Land_wreck_sed02_aban1_police_DE", "6334.263184 425.023193 2339.954834", "9.000000 0.000000 -0.000000", 1);
SpawnObject("bldr_prop_Chainsaw", "6281.851074 459.211243 2419.112305", "0.000000 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Pier_Wooden3_30deg", "6315.561523 457.004028 2424.958252", "98.799454 0.000000 -0.000000", 1);
SpawnObject("Land_Static_An2", "6282.581543 452.631042 2437.903564", "-16.284056 -14.769919 -12.968741", 1);
SpawnObject("ExpansionPropJigsaw", "6283.932129 458.397278 2415.368652", "-12.588820 -0.507366 -1.028436", 1);
SpawnObject("StaticObj_Pier_Wooden3_30deg", "6317.675293 457.007996 2423.129639", "127.762291 0.000000 -0.000000", 1);
SpawnObject("ExpansionPropChainsaw3", "6283.748047 459.250885 2416.519531", "-72.000015 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4", "6267.386230 458.849548 2410.438965", "-6.449286 0.000000 0.000000", 1);
SpawnObject("ExpansionPropCircularSaw2", "6284.437012 458.507660 2416.179688", "-101.414894 -2.405065 -0.781935", 1);
SpawnObject("StaticObj_Pier_Wooden3_30deg", "6318.191895 457.021790 2417.751953", "-174.057800 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Pier_Wooden3_30deg", "6318.625977 457.017822 2420.510498", "156.979370 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_4_D", "6270.376465 458.808624 2410.440674", "-98.999985 0.000000 -0.000000", 1);
SpawnObject("ExpansionPropCircularSaw4", "6284.546387 458.331543 2416.088135", "72.000015 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Wall_IndCnc_Pole", "6269.865234 458.790405 2413.486816", "-10.718467 0.000000 0.000000", 1);
SpawnObject("ExpansionPropChainsaw1", "6283.539063 458.474213 2416.708496", "35.999996 0.000000 -0.000000", 1);
SpawnObject("StaticObj_Pier_Wooden3_30deg", "6316.421875 457.007233 2415.628174", "-142.719193 0.000000 -0.000000", 0.999999);
SpawnObject("StaticObj_Furniture_Workbench", "6284.353516 458.200195 2419.493652", "81.257820 0.000000 -0.000000", 1);
SpawnObject("ExpansionPropSawset", "6284.424805 458.364594 2416.840820", "45.000000 0.000000 -0.000000", 1);


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
