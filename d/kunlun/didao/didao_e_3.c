//Cracked by Roath
// Room: didao_e_3.c �ص���
// Zhangchi 7/00

inherit ROOM;
#include "didao.h"

void create()
{
	set("short", "�ص�");
	set("long", @LONG
����һ���ո��ڳɵĵص������������������졣
LONG
	);
	set("exits", ([
		"west": __DIR__"didao_e_2",
]));
	set("no_clean_up", 1);
	set("cost", 1);
	set("valid_dig","east");

	setup();
//	replace_program(ROOM);
}

void init()
{
	int num=get_room("east");
	if (num >= 4)
		set("exits/east",__DIR__"didao_e_4");
	else
		delete("exits/east");

	add_action("do_dig","wa");
	add_action("do_dig","dig");
}