function openPopup(url, windowName, width, height) {
	
	w = window.open(url,windowName,'width='+width+',height='+height+',innerWidth='+width+',innerHeight='+height+',resizable=yes,scrollbars=yes');
	
	}
	
function openPopupNoS(url, windowName, width, height) {
	
	w = window.open(url,windowName,'width='+width+',height='+height+',innerWidth='+width+',innerHeight='+height+',resizable=no,scrollbars=no');
	
	}
	
function openPopupCard(url, windowName, imagename, width, height){
	w = window.open(url + '?imagename=' + imagename, windowName, 'width='+width+',height='+height+',innerWidth='+width+',innerHeight='+height+',resizable=no,scrollbars=no');


	}
	
	function NewColors(){
	NewColor = window.open("NewColors.htm","AcrylicColors","width=350,height=550")
	}
	
	function NewFabrics(id){
	NewFabric = window.open(id + ".htm","AcrylicColors","width=350,height=550,scrollbars=yes")
	}
	
	function PriceInfo(){
	PriceInfo2 = window.open("PricingNew.htm","PricingInfo","width=550,height=550")
	}