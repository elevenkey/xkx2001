//Cracked by Roath
// xQin 6/00

inherit ITEM;
inherit F_LIQUID;

void create()
{
        set_name("������Ƭ", ({ "guapian","cha" }));
        set_weight(1000);
        if( clonep() )
            set_default_object(__FILE__);
        else {
        set("long",
"����һ��������Ƭ����֭ɫ����̡�������ߡ���ζ�ʸʡ�\n");
                set("unit", "��");
                set("value", 25);
                set("max_liquid", 10);
        }
        set("liquid", ([
            "name" : "������Ƭ",
            "remaining" : 8,
                "type" : "water"
        ]) );
        set("liquid_type", "water");
        setup();
}

