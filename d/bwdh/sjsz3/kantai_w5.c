//Cracked by Roath
// group bwdh/room kantai_w5
// Apache 09/27/98

#include <ansi.h>
inherit ROOM;
#include "kantai.h"

void create() {
    set("short", "����̨��");
    set("long", @LONG
�����Ǳ��䳡������̨�塣�����Ѿ���������
�У�Ⱥ�����۷׷ף����ڲ²��ĸ��Ŷ����۹���
����Щ����(desk)��
LONG
    );
    set("exits", ([
        "east"  : __DIR__"kantai_s",
        "northwest" : __DIR__"kantai_w3",
    ]));
    create_kantai();
    setup();
}

void init() {
    init_kantai();
}