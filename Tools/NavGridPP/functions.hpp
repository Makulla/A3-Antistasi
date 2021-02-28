class A3A {
    class NavGridDraw {
        class NG_draw_deleteAll {};
        class NG_draw_dotOnRoads {};
        class NG_draw_line {};
        class NG_draw_linesBetweenRoads {};
        class NG_draw_main {};
        class NG_draw_text {};
    };
    class NavGridGen {
        class NG_check_conExists {};
        class NG_check_oneWays {};
        class NG_convert_navGridDB_navGridHM {};
        class NG_convert_navGridHM_navGridDB {};
        class NG_convert_navRoadHM_navGridHM {};
        class NG_convert_road_DBPosName {};
        class NG_convert_road_pos {};
        class NG_convert_DBPosName_road {};
        class NG_convert_DBStruct_road {};
        class NG_fix_deadEnds {};
        class NG_fix_oneWays {};
        class NG_format_navGridDB {};
        class NG_import {};
        class NG_init { preInit = 1; };
        class NG_main {};
        class NG_simplify_conDupe {};
        class NG_simplify_flat {};
        class NG_simplify_junc {};
    };
    class StreetArtist {
        class NGSA_EH_add {};
        class NGSA_EH_rem {};
        class NGSA_export {};
        class NGSA_main {};
        class NGSA_navRegions_generate {};
        class NGSA_navRegions_getPos {};
        class NGSA_onMouseClick {};
        class NGSA_toggleConnection {};
    };
    class UI {
        class customHint {};
        class customHintDismiss {};
        class customHintInit {};
        class customHintRender {};
        class shader_ratioToHex {};
    };
    class Utility {
        class log {};
        class systemTime_format_G {};
        class init { preInit = 1; };
    };
};

class Collections
{
    tag = "Col";
    class Collections_Array
    {
        file="Collections\Array";
        class array_deleteAts {};
        class array_displace {};
        class array_remIndices {};
        class array_toChunks {};
    };
    class Collections_ID
    {
        file="Collections\ID";
        class ID_init { preInit = 1; };
    };
    class Collections_Location
    {
        file="Collections\Location";
        class location_init { preInit = 1; };
        class location_new {};
        class location_serialiseAddress {};
    };
    class Collections_NestLoc
    {
        file="Collections\NestLoc";
        class nestLoc_get {};
        class nestLoc_rem {};
        class nestLoc_set {};
    };
};