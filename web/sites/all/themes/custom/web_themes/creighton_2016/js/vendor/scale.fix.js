// Original code from http://www.blog.highub.com/mobile-2/a-fix-for-iphone-viewport-scale-bug/

var metas = document.getElementsByTagName('meta');
var i;
if (navigator.userAgent.match(/iPhone/i)) {
	for (i=0; i<metas.length; i++) {
		if (metas[i].name == "viewport") {
			metas[i].content = "width=device-width, minimum-scale=1.0, maximum-scale=1.0";
		}
	}
	document.getElementsByTagName('body')[0].addEventListener("gesturestart", gestureStart, false);
}
function gestureStart() {
	for (i=0; i<metas.length; i++) {
		if (metas[i].name == "viewport") {
			metas[i].content = "width=device-width, minimum-scale=0.25, maximum-scale=1.6";
		}
	}
}