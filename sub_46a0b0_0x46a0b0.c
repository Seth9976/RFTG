// 函数名称: sub_46a0b0
// 虚拟地址: 0x46a0b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46a0b0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_3 = sub_46b2b0(arg3)
    
    if (*(eax_3 + 0xa94) != 1)
        sub_4c5870("pgui.numCurrentSpecials == 1", &data_83f3d3, "..\code\RFTGShared.cpp", 0xff, 
            "RFTGHandleStartingDiscardsConfirm")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_5 = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax_3 + 0x574))
    void* esi_2 = *(eax_3 + 0x550)
    int32_t var_24 = *(eax_5 + 0x7c)
    
    if (esi_2 s> 3)
        sub_4c5870("pgui.numCurrentDiscards <= 3", &data_83f3d3, "..\code\RFTGShared.cpp", 0x102, 
            "RFTGHandleStartingDiscardsConfirm")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void var_14
    void* var_20 = &var_14
    sub_469fa0(esi_2, eax_3 + 0x30, &var_14)
    
    if (sub_436960(*(data_27e7a40 + 0x74)) != 0)
        int32_t eax_10 = *(eax_3 + 0x1c)
        
        if (eax_10 == 9 || eax_10 == 0xb || eax_10 == 7)
            void var_10
            var_20 = &var_10
            esi_2 -= 1
    
    int32_t var_34 = 0
    sub_469e10(arg4, arg3, 1, 0, 0, 0, &var_24, 1)
    int32_t var_34_1 = 1
    sub_469e10(arg4, arg3, 2, 0, var_20, esi_2, 0, 0)
    
    if (sub_436960(*(data_27e7a40 + 0x74)) != 0)
        int32_t eax_15 = *(eax_3 + 0x1c)
        
        if ((eax_15 == 9 || eax_15 == 0xb || eax_15 == 7) && *(eax_3 + 0x550) s> 1)
            int32_t eax_16
            void* ecx_10
            int32_t edx_4
            eax_16, ecx_10, edx_4 = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax_3 + 0x30))
            int32_t var_34_2 = 5
            sub_46b460(arg3, edx_4, ecx_10, eax_16)
            *(eax_3 + 0x1f94) = *(eax_3 + 0x30)
    
    sub_469ff0(arg3)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
