//Cracked by Kafei
// qufeng.c
// Xuanyuan 7/2001

#include <ansi.h>
inherit F_DBASE;
inherit F_SSERVER;
int exert(object me, object target)
{
        object obj;

	if( !target ) target = offensive_target(me);

	if( !objectp(target) || target == me 
	|| target->query("id") == "mu ren" 
	|| target->query("id") == "shangshan" 
	|| target->query("id") == "mengzhu" 
	|| target->query("id") == "fae" )
		return notify_fail("��Ҫ������乥��˭��\n");

	if (!objectp(obj=present("fengjiang ping", me)))
            return notify_fail("������û�з佬ƿ������������乥�С�\n");

	if ((int)me->query_skill("yunu-xinjing", 1) < 100 )
		return notify_fail("�����Ů�ľ����̫�ͣ�����������乥�С�\n");

        if ( me->query_skill_mapped("force") != "yunu-xinjing")
                return notify_fail("��û�м�����Ů�ľ����ڹ��ϣ�����������乥�С�\n"); 

	if( (int)me->query("max_neili") < 300 )
		return notify_fail("���������Ϊ������\n");

	if( (int)me->query("neili") < 200 )
		return notify_fail("�������������\n");

        if(target == me)
                return notify_fail("��䲻�ܹ����㡣\n");

        message_vision(HIY "\n$N�ο���ƿ����������ƿǱ��������ʹ��ƿ�е�����ԶԶƮ�˿�ȥ��\n"
                   "ͻȻ����֮����������֪�����������һ��Ⱥ��䣬��$nΧ�˹�ȥ��\n" NOR,
                   me, target);

	obj=new("/clone/beast/yufeng");
	obj->move(environment(target));
	obj->set_leader(target);

	me->add("neili", -50);
        me -> receive_damage ("jing" , 50 ) ;

        if( userp(target) )
        {       target -> fight_ob(me) ;
                me->fight_ob(target);
        }
        else
        {       target->kill_ob(me);
                me->fight_ob(target);
        }
	if (  random ( (int)me->query_skill("yunu-xinjing", 1) ) < (int)target->query_skill("yunu-xinjing", 1) *2 / 3 )
                message_vision(YEL "\n��$n�鴽һХ������ƺ������˺��ԶԶ���˿�ȥ��\n" NOR, me, target);
        else
        {
	tell_object (target , HIR "\n����Χɲ�Ǽ価�����Χ�ƣ�һֻֻ��亷��η��������\n"
               "���˹�������ֻ���ñ���΢΢һʹ���ѱ�������У�\n" NOR  ) ;
	obj->kill_ob(target);
	target -> start_busy (3) ;
	}
	return 1;
}