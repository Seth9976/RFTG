// 函数名称: sub_46c680
// 虚拟地址: 0x46c680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_46c680(int32_t arg1, int32_t arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void var_4c
    void var_4c
    int32_t eax_1 = __security_cookie ^ &var_4c
    void* eax_3 = sub_46b2b0(arg2)
    
    if (*arg3 != 0)
        sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGShared.cpp", 0x58a, 
            "RFTGHandleSettlePower")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_48 = *(arg3 + 0x7c)
    int32_t ecx_1 = 0xffffffff
    
    if (*(eax_3 + 0x1a08) s> 0)
        int32_t i_1 = *(eax_3 + 0x1a08)
        void* eax_5 = eax_3 + 0x14e4
        int32_t i
        
        do
            if (*(eax_5 - 0xa40) == *(arg3 + 0xac))
                ecx_1 = *eax_5
            
            eax_5 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (ecx_1 != 0xffffffff)
            int32_t var_5c = 1
            int32_t var_40 = ecx_1
            struct _EXCEPTION_REGISTRATION_RECORD** result =
                sub_469e10(arg4, arg2, 7, 0, &var_48, 1, &var_40, 1)
            void* edx = data_27e7a40
            *(eax_3 + 0x1a08) = 0
            void* esi_1 = *(edx + 0x548)
            
            if (*(esi_1 + 0x2c078) == 1 && *(esi_1 + 0x210) == 0)
                sub_4d6480(data_307bef0)
                void var_3c
                result = sub_4d66f0(&var_3c)
            
            *(esi_1 + 0x210) = 1
            *(esi_1 + 0x2c078) = 0
            *(esi_1 + 0x214) = 0
            *(eax_3 + 8) = 0
            sub_5a6aba(eax_1 ^ &var_4c)
            return result
    
    sub_4c5870("oidx != -1", &data_83f3d3, "..\code\RFTGShared.cpp", 0x598, "RFTGHandleSettlePower")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
