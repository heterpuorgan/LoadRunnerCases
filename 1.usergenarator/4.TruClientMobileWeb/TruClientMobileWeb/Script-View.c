//   ************************************************
//   ****   ��ע��: ����ʵ�ʽű���ֻ����ʾ��Ҫ���б༭���밴 "�����ű�" ��ť�� ****
//   ************************************************

vuser_init()
{
	return 0;
}

Action()
{
	truclient_step("1", "���� �� 'https://www.dongxiaowang.cn/'", "snapshot=Action_1.inf");
	truclient_step("2", "���� ���� ����", "snapshot=Action_2.inf");
	truclient_step("3", "���� Jmeter Use Guide 15 ����", "snapshot=Action_3.inf");
	truclient_step("4", "���� ��Դ ����", "snapshot=Action_4.inf");
	truclient_step("5", "���� Search Box �ı���", "snapshot=Action_5.inf");
	truclient_step("6", "�� Search Box �ı����� ���� 21", "snapshot=Action_6.inf");
	truclient_step("7", "���� ���� ��ť", "snapshot=Action_7.inf");
	truclient_step("8", "���� listbox (1) �б��", "snapshot=Action_8.inf");

	return 0;
}

vuser_end()
{
	return 0;
}
