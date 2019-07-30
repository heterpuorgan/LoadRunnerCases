//   ************************************************
//   ****   请注意: 这是实际脚本的只读表示。要进行编辑，请按 "开发脚本" 按钮。 ****
//   ************************************************

Action()
{
	lr_start_transaction("Transaction 1");
	truclient_step("1", "导航 到 'https://dongxiaowang.cn/'", "snapshot=Action_1.inf");
	truclient_step("2", "单击 主页 链接", "snapshot=Action_2.inf");
	truclient_step("3", "单击 RGB颜色转换 链接", "snapshot=Action_3.inf");
	lr_end_transaction("Transaction 1",0);
	truclient_step("4", "单击 255 文本框", "snapshot=Action_4.inf");
	truclient_step("5", "在 255 文本框中 输入 255", "snapshot=Action_5.inf");
	lr_start_transaction("Transaction 2");
	truclient_step("6", "单击 255 180 0 转换 网格单元", "snapshot=Action_6.inf");
	truclient_step("7", "单击 180 文本框", "snapshot=Action_7.inf");
	truclient_step("8", "在 180 文本框中 输入 112", "snapshot=Action_8.inf");
	truclient_step("9", "单击 255 文本框", "snapshot=Action_9.inf");
	truclient_step("10", "在 0 文本框中 输入 34", "snapshot=Action_10.inf");
	lr_end_transaction("Transaction 2",0);
	truclient_step("11", "单击 转换 按钮", "snapshot=Action_11.inf");
	truclient_step("12", "在 #CC00FF 文本框上 按下鼠标", "snapshot=Action_12.inf");
	truclient_step("13", "重新加载 当前页面", "snapshot=Action_13.inf");

	return 0;
}
