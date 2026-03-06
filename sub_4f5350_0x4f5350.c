// 函数名称: sub_4f5350
// 虚拟地址: 0x4f5350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4f5350(int32_t arg1, int32_t arg2, int32_t* arg3, float arg4)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    char edx
    eax, edx = sub_4f4890(arg3)
    void* edi_2 = arg1 * 0x118 + *eax
    int32_t eax_1 = *(edi_2 + 4)
    
    if (eax_1 != 3 && eax_1 != 4 && eax_1 != 2 && eax_1 != 5 && eax_1 != 1)
        sub_4c5870(
            "el.type == UI_TEXT || el.type == UI_REGION || el.type == UI_TABLE || el.type == UI_BUTTON || "
        "el.type == UI_IMAGE", 
            &data_83f3d3, "UIDef.cpp", 0x1e9, "UIElementRegionRect")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t var_24 = 0
    void var_18
    int32_t* eax_4 = sub_4f52e0(arg4, &var_18, edi_2, edx)
    int32_t edx_1 = eax_4[1]
    int32_t* entry_result
    *entry_result = *eax_4
    int32_t ecx_1 = eax_4[2]
    entry_result[1] = edx_1
    int32_t edx_2 = eax_4[3]
    entry_result[2] = ecx_1
    entry_result[3] = edx_2
    return entry_result
}
