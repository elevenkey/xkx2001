//Cracked by Roath
#include <ansi.h>
inherit MONEY;

void create()
{
        set_name(HIY"��ɳ"NOR, ({"jin sha", "jinsha", "gold nugget"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("money_id", "jinsha");
                set("long", "����һ���������Ľ�ɳ��\n");
                set("unit", "��");
                set("base_value", 1500+random(10));
                set("base_unit", "��");
                set("base_weight", 20);
        }
        set_amount(1);
}
