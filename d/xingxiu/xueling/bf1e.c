//Cracked by Roath
inherit ROOM;
#include <ansi.h>
#include "battlefield.h"

void create()
{
  set("short", HIG"��Ժ����"NOR);
  set("long", @LONG
������Ǳ��䳡�ˣ���·Ӣ�����������֣�ף����ˣ�
����ɱ��һ����Һ�Ҫ���˽����� (finish)���߳����䳡��
LONG
  );

  set("exits", ([
		 "north" : __DIR__"bf1en",
		 "east" : __DIR__"bf1ee",
		 "west" : __DIR__"bf1",
		 ]));
  // must have this line
  createRoom();
  setup();
}

void init()
{
  // must have this line
  initRoom();
}
