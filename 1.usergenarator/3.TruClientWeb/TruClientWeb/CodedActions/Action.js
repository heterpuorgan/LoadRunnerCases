(function() {
	"use strict";

	function actionAction() {
		// 导航到 "https://dongxiaowang.cn/"
		TCS.browser.navigate({
			"Location": TCS.argType.JSArg("\"https://dongxiaowang.cn/\"")
		});
		// 单击 主页 链接
		TCS.object.tcManaged.object.click({
			"X Coordinate": 9,
			"Y Coordinate": 9
		});
		// 单击 RGB颜色转换 链接
		TCS.object.tcManaged.rGBObject.click({
			"X Coordinate": 60,
			"Y Coordinate": 1
		});
		// 在 255 文本框中输入 255
		TCS.object.tcManaged._255Object.type({
			"Value": "255"
		});
		// 在 180 文本框中输入 112
		TCS.object.tcManaged._180Object.type({
			"Value": "112"
		});
		// 在 0 文本框中输入 34
		TCS.object.tcManaged._0Object.type({
			"Value": "34"
		});
	}
	actionAction();

})();