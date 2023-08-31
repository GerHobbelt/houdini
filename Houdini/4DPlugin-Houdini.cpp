/* --------------------------------------------------------------------------------
 #
 #  4DPlugin-Houdini.cpp
 #	source generated by 4D Plugin Wizard
 #	Project : Houdini
 #	author : miyako
 #	2023/08/31
 #  
 # --------------------------------------------------------------------------------*/

#include "4DPlugin-Houdini.h"

#pragma mark -

void PluginMain(PA_long32 selector, PA_PluginParameters params) {
    
	try
	{
        switch(selector)
        {
			// --- Houdini
            
			case 1 :
				Houdini_Escape_XML(params);
				break;
			case 2 :
				Houdini_Unescape_HTML(params);
				break;
			case 3 :
				Houdini_Escape_HTML(params);
				break;
			case 4 :
				Houdini_Escape_URI(params);
				break;
			case 5 :
				Houdini_Escape_URL(params);
				break;
			case 6 :
				Houdini_Escape_HREF(params);
				break;
			case 7 :
				Houdini_Unescape_URI(params);
				break;
			case 8 :
				Houdini_Unescape_URL(params);
				break;
			case 9 :
				Houdini_Escape_JS(params);
				break;
			case 10 :
				Houdini_Unescape_JS(params);
				break;

        }

	}
	catch(...)
	{

	}
}

#pragma mark -

void Houdini_Escape_XML(PA_PluginParameters params) {

    sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
    PackagePtr pParams = (PackagePtr)params->fParameters;
    
    C_TEXT Param1;
    C_TEXT Param2;
    C_LONGINT returnValue;
    
    Param1.fromParamAtIndex(pParams, 1);
    
    CUTF8String src;
    Param1.copyUTF8String(&src);
    
    gh_buf ob;
    gh_buf_init(&ob, (size_t)0);
    
    int success = houdini_escape_xml(&ob, src.c_str(), src.size());
    
    if(success)
        Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
    
    gh_buf_free(&ob);
    
    Param2.toParamAtIndex(pParams, 2);
    returnValue.setIntValue(success);
    returnValue.setReturn(pResult);
}

void Houdini_Unescape_HTML(PA_PluginParameters params) {

    sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
    PackagePtr pParams = (PackagePtr)params->fParameters;
    
    C_TEXT Param1;
    C_TEXT Param2;
    C_LONGINT returnValue;
    
    Param1.fromParamAtIndex(pParams, 1);
    
    CUTF8String src;
    Param1.copyUTF8String(&src);
    
    gh_buf ob;
    gh_buf_init(&ob, (size_t)0);
    
    int success = houdini_unescape_html(&ob, src.c_str(), src.size());
    
    if(success)
        Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
    
    gh_buf_free(&ob);
    
    Param2.toParamAtIndex(pParams, 2);
    returnValue.setIntValue(success);
    returnValue.setReturn(pResult);
}

void Houdini_Escape_HTML(PA_PluginParameters params) {

    sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
    PackagePtr pParams = (PackagePtr)params->fParameters;
 
    C_TEXT Param1;
    C_TEXT Param2;
    C_LONGINT Param3;
    C_LONGINT returnValue;
    
    Param1.fromParamAtIndex(pParams, 1);
    Param3.fromParamAtIndex(pParams, 3);
    
    CUTF8String src;
    Param1.copyUTF8String(&src);
    
    gh_buf ob;
    gh_buf_init(&ob, (size_t)0);
    
    int success = houdini_escape_html0(&ob, src.c_str(), src.size(), Param3.getIntValue());
    
    if(success)
        Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
    
    gh_buf_free(&ob);
    
    Param2.toParamAtIndex(pParams, 2);
    returnValue.setIntValue(success);
    returnValue.setReturn(pResult);
}

void Houdini_Escape_URI(PA_PluginParameters params) {

    sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
    PackagePtr pParams = (PackagePtr)params->fParameters;
    
    C_TEXT Param1;
    C_TEXT Param2;
    C_LONGINT returnValue;
    
    Param1.fromParamAtIndex(pParams, 1);
    
    CUTF8String src;
    Param1.copyUTF8String(&src);
    
    gh_buf ob;
    gh_buf_init(&ob, (size_t)0);
    
    int success = houdini_escape_uri(&ob, src.c_str(), src.size());
    
    if(success)
        Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
    
    gh_buf_free(&ob);
    
    Param2.toParamAtIndex(pParams, 2);
    returnValue.setIntValue(success);
    returnValue.setReturn(pResult);
}

void Houdini_Escape_URL(PA_PluginParameters params) {

    sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
    PackagePtr pParams = (PackagePtr)params->fParameters;
    
    C_TEXT Param1;
    C_TEXT Param2;
    C_LONGINT returnValue;
    
    Param1.fromParamAtIndex(pParams, 1);
    
    CUTF8String src;
    Param1.copyUTF8String(&src);
    
    gh_buf ob;
    gh_buf_init(&ob, (size_t)0);
    
    int success = houdini_escape_url(&ob, src.c_str(), src.size());
    
    if(success)
        Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
    
    gh_buf_free(&ob);
    
    Param2.toParamAtIndex(pParams, 2);
    returnValue.setIntValue(success);
    returnValue.setReturn(pResult);
}

void Houdini_Escape_HREF(PA_PluginParameters params) {

    sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
    PackagePtr pParams = (PackagePtr)params->fParameters;
 
    C_TEXT Param1;
    C_TEXT Param2;
    C_LONGINT returnValue;
    
    Param1.fromParamAtIndex(pParams, 1);
    
    CUTF8String src;
    Param1.copyUTF8String(&src);
    
    gh_buf ob;
    gh_buf_init(&ob, (size_t)0);
    
    int success = houdini_escape_href(&ob, src.c_str(), src.size());
    
    if(success)
        Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
    
    gh_buf_free(&ob);
    
    Param2.toParamAtIndex(pParams, 2);
    returnValue.setIntValue(success);
    returnValue.setReturn(pResult);
}

void Houdini_Unescape_URI(PA_PluginParameters params) {

    sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
    PackagePtr pParams = (PackagePtr)params->fParameters;
    
    C_TEXT Param1;
    C_TEXT Param2;
    C_LONGINT returnValue;
    
    Param1.fromParamAtIndex(pParams, 1);
    
    CUTF8String src;
    Param1.copyUTF8String(&src);
    
    gh_buf ob;
    gh_buf_init(&ob, (size_t)0);
    
    int success = houdini_unescape_uri(&ob, src.c_str(), src.size());
    
    if(success)
        Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
    
    gh_buf_free(&ob);
    
    Param2.toParamAtIndex(pParams, 2);
    returnValue.setIntValue(success);
    returnValue.setReturn(pResult);
}

void Houdini_Unescape_URL(PA_PluginParameters params) {

    sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
    PackagePtr pParams = (PackagePtr)params->fParameters;
    
    C_TEXT Param1;
    C_TEXT Param2;
    C_LONGINT returnValue;
    
    Param1.fromParamAtIndex(pParams, 1);
    
    CUTF8String src;
    Param1.copyUTF8String(&src);
    
    gh_buf ob;
    gh_buf_init(&ob, (size_t)0);
    
    int success = houdini_unescape_url(&ob, src.c_str(), src.size());
    
    if(success)
        Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
    
    gh_buf_free(&ob);
    
    Param2.toParamAtIndex(pParams, 2);
    returnValue.setIntValue(success);
    returnValue.setReturn(pResult);
}

void Houdini_Escape_JS(PA_PluginParameters params) {

    sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
    PackagePtr pParams = (PackagePtr)params->fParameters;
    
    C_TEXT Param1;
    C_TEXT Param2;
    C_LONGINT returnValue;
    
    Param1.fromParamAtIndex(pParams, 1);
    
    CUTF8String src;
    Param1.copyUTF8String(&src);
    
    gh_buf ob;
    gh_buf_init(&ob, (size_t)0);
    
    int success = houdini_escape_js(&ob, src.c_str(), src.size());
    
    if(success)
        Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
    
    gh_buf_free(&ob);
    
    Param2.toParamAtIndex(pParams, 2);
    returnValue.setIntValue(success);
    returnValue.setReturn(pResult);
}

void Houdini_Unescape_JS(PA_PluginParameters params) {

    sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
    PackagePtr pParams = (PackagePtr)params->fParameters;

    C_TEXT Param1;
    C_TEXT Param2;
    C_LONGINT returnValue;
    
    Param1.fromParamAtIndex(pParams, 1);
    
    CUTF8String src;
    Param1.copyUTF8String(&src);
    
    gh_buf ob;
    gh_buf_init(&ob, (size_t)0);
    
    int success = houdini_unescape_js(&ob, src.c_str(), src.size());
    
    if(success)
        Param2.setUTF8String((const uint8_t *)ob.ptr, ob.size);
    
    gh_buf_free(&ob);
    
    Param2.toParamAtIndex(pParams, 2);
    returnValue.setIntValue(success);
    returnValue.setReturn(pResult);
}

