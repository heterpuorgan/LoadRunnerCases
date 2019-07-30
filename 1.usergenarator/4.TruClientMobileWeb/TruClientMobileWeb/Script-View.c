//   ************************************************
//   ****   请注意: 这是实际脚本的只读表示。要进行编辑，请按 "开发脚本" 按钮。 ****
//   ************************************************

vuser_init()
{
	return 0;
}

Action()
{
	truclient_step("1", "导航 到 'https://www.dongxiaowang.cn/'", "snapshot=Action_1.inf");
	truclient_step("2", "单击 文章 链接", "snapshot=Action_2.inf");
	truclient_step("3", "单击 Jmeter Use Guide 15 链接", "snapshot=Action_3.inf");
	truclient_step("4", "单击 资源 链接", "snapshot=Action_4.inf");
	truclient_step("5", "单击 Search Box 文本框", "snapshot=Action_5.inf");
	truclient_step("6", "在 Search Box 文本框中 输入 21", "snapshot=Action_6.inf");
	truclient_step("7", "单击 搜索 按钮", "snapshot=Action_7.inf");
	truclient_step("8", "单击 listbox (1) 列表框", "snapshot=Action_8.inf");

	return 0;
}

vuser_end()
{
	return 0;
}
