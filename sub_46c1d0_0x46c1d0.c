// 函数名称: sub_46c1d0
// 虚拟地址: 0x46c1d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46c1d0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_3 = sub_46b2b0(arg3)
    void* esi_1 = *(eax_3 + 0x550)
    void var_530
    sub_469fa0(esi_1, eax_3 + 0x30, &var_530)
    
    if (*(eax_3 + 0x1c) != 0x17)
        int32_t var_a6c_1 = 1
        sub_469e10(arg4, arg3, 2, 0, &var_530, esi_1, 0, 0)
    else
        void* ebx_1 = *(eax_3 + 0xa94)
        void* eax_5 = 1
        void* edx_1
        
        if (*(eax_3 + 0x1f30) == 1)
            ebx_1 = 1
            edx_1 = eax_3 + 0x1a10
        else if (ebx_1 != 1)
            if (ebx_1 != 0 || esi_1 != 0)
            label_46c25e:
                sub_4c5870(
                    "(num_special == 1 && num_list == 1) || (num_special == 0 && num_list == 0)", 
                    &data_83f3d3, "..\code\RFTGShared.cpp", 0x4f7, "RFTGHandleDiscardConfirm")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            edx_1 = eax_3 + 0x574
            eax_5 = ebx_1
        else
            if (esi_1 != 1)
                goto label_46c25e
            
            edx_1 = eax_3 + 0x574
            eax_5 = ebx_1
        
        void var_a50
        sub_469fa0(eax_5, edx_1, &var_a50)
        int32_t var_a6c = 1
        sub_469e10(arg4, arg3, 0x15, 0, &var_530, esi_1, &var_a50, ebx_1)
    
    sub_469ff0(arg3)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
