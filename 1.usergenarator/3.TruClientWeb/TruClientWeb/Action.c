//   ************************************************
//   ****   ��ע��: ����ʵ�ʽű���ֻ����ʾ��Ҫ���б༭���밴 "�����ű�" ��ť�� ****
//   ************************************************

Action()
{
	lr_start_transaction("Transaction 1");
	truclient_step("1", "���� �� 'https://dongxiaowang.cn/'", "snapshot=Action_1.inf");
	truclient_step("2", "���� ��ҳ ����", "snapshot=Action_2.inf");
	truclient_step("3", "���� RGB��ɫת�� ����", "snapshot=Action_3.inf");
	lr_end_transaction("Transaction 1",0);
	truclient_step("4", "���� 255 �ı���", "snapshot=Action_4.inf");
	truclient_step("5", "�� 255 �ı����� ���� 255", "snapshot=Action_5.inf");
	lr_start_transaction("Transaction 2");
	truclient_step("6", "���� 255 180 0 ת�� ����Ԫ", "snapshot=Action_6.inf");
	truclient_step("7", "���� 180 �ı���", "snapshot=Action_7.inf");
	truclient_step("8", "�� 180 �ı����� ���� 112", "snapshot=Action_8.inf");
	truclient_step("9", "���� 255 �ı���", "snapshot=Action_9.inf");
	truclient_step("10", "�� 0 �ı����� ���� 34", "snapshot=Action_10.inf");
	lr_end_transaction("Transaction 2",0);
	truclient_step("11", "���� ת�� ��ť", "snapshot=Action_11.inf");
	truclient_step("12", "�� #CC00FF �ı����� �������", "snapshot=Action_12.inf");
	truclient_step("13", "���¼��� ��ǰҳ��", "snapshot=Action_13.inf");

	return 0;
}
