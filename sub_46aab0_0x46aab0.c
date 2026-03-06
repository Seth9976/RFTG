// 函数名称: sub_46aab0
// 虚拟地址: 0x46aab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46aab0(int32_t arg1, void* arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void var_44
    void var_44
    int32_t eax_1 = __security_cookie ^ &var_44
    void* eax_3 = sub_46b2b0(arg2)
    
    if (*(eax_3 + 0xa94) != 1)
        sub_4c5870("pgui.numCurrentSpecials == 1", &data_83f3d3, "..\code\RFTGShared.cpp", 0x1db, 
            "RFTGHandleStartingDiscards")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_46a670(eax_3, arg4, arg2, arg3)
    char result_1
    char result
    
    if (*(eax_3 + 0x554) != *(eax_3 + 0x550) || *(eax_3 + 0xa94) != 1)
        result_1 = 1
        result = 1
    else
        result = 0
        result_1 = 0
    
    void* esi_1 = *(data_27e7a40 + 0x548)
    
    if (*(esi_1 + 0x2c078) == 1 && result == 0 && *(esi_1 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        sub_4d66f0(&var_3c)
        result = result_1
    
    int32_t ecx_1
    ecx_1.b = result == 0
    *(esi_1 + 0x214) = ecx_1.b
    *(esi_1 + 0x210) = 0
    *(esi_1 + 0x2c078) = result
    sub_5a6aba(eax_1 ^ &var_44)
    return result
}
