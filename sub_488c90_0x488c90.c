// 函数名称: sub_488c90
// 虚拟地址: 0x488c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_488c90(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = data_307c76c
    int32_t esi = data_307c76c
    
    if (arg1 == esi)
        return 
    
    if (arg1 == data_307c1c0)
        if (data_30d7278 == 0)
            data_30d6f38 = data_307c620
            return 
        
        data_30d6f38 = data_307c16c
        return 
    
    if (arg1 == data_307c16c)
        if (data_30d7278 != 0)
            data_30d6f38 = data_307ca58
            return 
        
        data_30d6f38 = esi
        return 
    
    if (arg1 == data_307ca58)
        sub_402180()
        int32_t eax_1 = data_307c76c
        data_30d7278 = 0
        data_30d6f38 = eax_1
        return 
    
    if (arg1 == data_307c4d8)
        data_30d6f38 = data_307c588
        return 
    
    int32_t ecx_2 = data_307c748
    
    if (arg1 == ecx_2 || arg1 == data_307c174)
        data_30d6f38 = esi
        return 
    
    int32_t edx_1 = data_307c620
    
    if (arg1 != edx_1)
        if (arg1 == data_307c74c)
            data_30d6f38 = ecx_2
            return 
        
        if (arg1 == data_307c69c || arg1 == data_307c500 || arg1 == data_307c588)
            int32_t eax_3 = *(data_27e7a40 + 0x2c4960)
            int32_t eax_4 = neg.d(eax_3)
            data_30d6f38 = not.d(sbb.d(eax_4, eax_4, eax_3 != 0)) & esi
            return 
        
        if (arg1 == data_307c624 || arg1 == data_307c62c || arg1 == data_307c740
                || arg1 == data_307c4f8)
            data_30d6f38 = edx_1
            return 
        
        if (arg1 == data_307c794 || arg1 == data_307c1a0)
            data_30d6f38 = 0
            return 
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0x19bb, "DoEscapeClick")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    data_30d6f38 = esi
}
