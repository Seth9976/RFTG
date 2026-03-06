// 函数名称: sub_46ce60
// 虚拟地址: 0x46ce60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46ce60(void* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg3)
    void* eax = sub_46b2b0(arg3)
    
    if (*arg1 != 0)
        sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGShared.cpp", 0x666, 
            "RFTGHandleProducePower")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = 0xffffffff
    bool cond:1 = *(eax + 0x1a08) s<= 0
    int32_t var_c = *(arg1 + 0x7c)
    
    if (not(cond:1))
        int32_t i_1 = *(eax + 0x1a08)
        void* eax_3 = eax + 0x14e4
        int32_t i
        
        do
            if (*(eax_3 - 0xa40) == *(arg1 + 0xac))
                ecx = *eax_3
            
            eax_3 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (ecx != 0xffffffff)
            int32_t var_1c = 1
            int32_t var_8 = ecx
            sub_469e10(arg4, arg3, 0x14, 0, &var_c, 1, &var_8, 1)
            sub_469ff0(arg3)
            *(eax + 8) = 0
            return 0
    
    sub_4c5870("oidx != -1", &data_83f3d3, "..\code\RFTGShared.cpp", 0x674, "RFTGHandleProducePower")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
