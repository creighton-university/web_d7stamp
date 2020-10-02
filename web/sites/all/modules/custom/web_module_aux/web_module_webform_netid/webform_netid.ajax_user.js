function createXMLHttpRequest() {
    if (typeof XMLHttpRequest != "undefined") {
        return new XMLHttpRequest();
    } else if (typeof ActiveXObject != "undefined") {
        return new ActiveXObject("Microsoft.XMLHTTP");
    } else {
        throw new Error("XMLHttpRequest not supported");
    }
}

function getData(element, userfunc) {
    var arg = element.value;
    var request = createXMLHttpRequest();
    request.open("GET", "//www.creighton.edu/includes/ajax/userinfoxml.php?netid="+arg, true);
    request.onreadystatechange = function() {
        if (request.readyState == 4) {
            var xmldoc = request.responseXML;
            userfunc(element, xmldoc);
        }
    }
    request.send(null);
}

function autoFill(element, strlen, userfunc){
    if(element.value.length == strlen){
        getData(element, userfunc);
    }
}

function user(element, xmldoc){
    var user_node = xmldoc.getElementsByTagName('user').item(0);
    elements = user_node.getElementsByTagName('*');
    for(i=0; i<elements.length; i++){
        var constructed_form_field = element.id.replace('_','-')+'-'+elements.item(i).tagName.replace('_','-');
        htmlentity=document.getElementById(constructed_form_field);
        if(htmlentity != null){
            try {
                htmlentity.value = elements.item(i).firstChild.data;
            }
            catch (e) {
                htmlentity.value = '';
            }
        }
    }
}

