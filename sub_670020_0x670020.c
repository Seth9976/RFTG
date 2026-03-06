// 函数名称: sub_670020
// 虚拟地址: 0x670020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_670020(void* arg1, int32_t arg2, char* arg3, void* arg4, char* arg5, int32_t arg6)
{
    // 第一条实际指令: char* var_8 = arg3
    char* var_8 = arg3
    int32_t edx = arg6
    void* eax
    char* esi
    void* edi_1
    
    if ((edx.b & 2) == 0)
        esi = arg5
        arg3.b = esi[3]
        eax = arg4
        
        if (arg3.b == 0 || arg3.b u> *(eax + 0x13d))
            return sub_664100(eax, "Invalid sBIT depth specified")
        
        var_8.b = arg3.b
        edi_1 = 1
    label_6700b2:
        
        if ((edx.b & 4) != 0)
            arg3.b = esi[4]
            
            if (arg3.b == 0 || arg3.b u> *(eax + 0x13d))
                return sub_664100(eax, "Invalid sBIT depth specified")
            
            *(&var_8 + edi_1) = arg3.b
            edi_1 += 1
        
        int32_t* var_18 = &var_8
        int32_t var_1c_1
        __builtin_strncpy(&var_1c_1, "TIBs", 4)
        return sub_66f140(eax, edi_1, edx, arg3)
    
    int32_t ebx
    
    if (edx != 3)
        ebx.b = *(arg4 + 0x13d)
    else
        ebx.b = 8
    
    esi = arg5
    arg1.b = *esi
    
    if (arg1.b == 0 || arg1.b u> ebx.b)
        return sub_664100(arg4, "Invalid sBIT depth specified")
    
    edx.b = esi[1]
    
    if (edx.b == 0 || edx.b u> ebx.b)
        return sub_664100(arg4, "Invalid sBIT depth specified")
    
    arg3.b = esi[2]
    
    if (arg3.b == 0 || arg3.b u> ebx.b)
        return sub_664100(arg4, "Invalid sBIT depth specified")
    
    var_8.b = arg1.b
    eax = arg4
    var_8:1.b = edx.b
    edx = arg6
    var_8:2.b = arg3.b
    edi_1 = 3
    goto label_6700b2
}
