// 函数名称: sub_415ac0
// 虚拟地址: 0x415ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_415ac0(int32_t arg1, int32_t arg2, char arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    data_307c550
    int32_t eax_3
    int32_t edx_1
    char* entry_ebx
    eax_3, edx_1 = sub_4f65a0(&entry_ebx[4], *entry_ebx)
    int32_t eax_17
    
    if (eax_3.b == 0)
        eax_17 = 0
    else
        sub_4075c0()
        sub_4152a0(eax_3, edx_1, data_307c550, entry_ebx)
        void* ecx_1 = data_27e7a40
        int32_t eax_6
        int32_t edx_2
        edx_2:eax_6 = sx.q(*(ecx_1 + 0x2c4958) + 3)
        int32_t eax_11
        int32_t edx_4
        edx_4:eax_11 = sx.q(*(ecx_1 + 0x2c9048) + 3)
        sub_407670()
        void var_d0
        int32_t eax_14
        int80_t st0_1
        st0_1, eax_14 = sub_40a930(&var_d0)
        long double x87_r6_1 = fconvert.t(data_8c4d34)
        int32_t eax_15 = *(entry_ebx + 8)
        void var_50
        int32_t ecx_2
        int32_t esi_2
        esi_2, ecx_2 = __builtin_memcpy(&var_50, eax_14, 0x40)
        int32_t var_e8_1 = ecx_2
        void var_90
        int32_t* eax_16 = sub_4f8710(esi_2, &var_90, eax_15, &var_50, arg4, arg3, fconvert.s(x87_r6_1), 
            nullptr, nullptr, nullptr)
        int32_t var_70_1 = eax_16[1]
        int32_t var_6c_1 = eax_16[2]
        eax_17 = eax_16[4]
        int32_t var_68_1 = eax_16[3]
        
        if (*eax_16 != 3)
            eax_17 = 0
        else if (eax_17 - 0x1b u> 3)
            if (eax_17 s>= 0x1f)
                sub_4c5870("uiresult.buttonId < MULTIMENU_RESULT_END_INTERNAL", &data_83f3d3, 
                    "..\code\MultiplayerMenu.cpp", 0x2fa, "MultiplayerMenuDialogUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (eax_17 - 1 u<= 6)
                int32_t ecx_8 = eax_17 + (*(entry_ebx + 0x10) << 2) - 1
                
                if (entry_ebx == 0xffffffec)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return ecx_8 + 0x20
                
                int32_t eax_26 = *(entry_ebx + 0x14 + (ecx_8 << 2)) + 0x20
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_26
            
            if (eax_17 - 8 u<= 6)
                int32_t esi_3 = eax_17 + (*(entry_ebx + 0x10) << 2) - 8
                
                if (entry_ebx != 0xffffffec)
                    esi_3 = *(entry_ebx + 0x14 + (esi_3 << 2))
                
                sub_4075c0()
                void* eax_30 = data_27e7a40
                
                if (esi_3 s< *(eax_30 + 0x2c4958))
                    int32_t eax_32 = sub_415240(esi_3 * 0x1f8 + eax_30 + 0xad8)
                    sub_407670()
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return eax_32 + esi_3
                
                sub_4c5870("idx < gCClient->numGameDescNetwork", &data_83f3d3, 
                    "..\code\MultiplayerMenu.cpp", 0x305, "MultiplayerMenuDialogUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (eax_17 - 0xf u<= 6)
                int32_t ecx_18 = eax_17 + (*(entry_ebx + 0xc) << 2) - 0xf
                
                if (entry_ebx == 0xffffff5c)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return ecx_18 + 0xb4
                
                int32_t eax_36 = *(entry_ebx + 0xa4 + (ecx_18 << 2)) + 0xb4
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_36
        else
            switch (eax_17)
                case 0x1b
                    *(entry_ebx + 0x10) += 1
                    
                    if (*(entry_ebx + 0x10) s>= (eax_6 + (edx_2 & 3)) s>> 2)
                        sub_4c5870("dlg.pageYours < numPageYours", &data_83f3d3, 
                            "..\code\MultiplayerMenu.cpp", 0x2ea, "MultiplayerMenuDialogUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                case 0x1c
                    int32_t temp0_1 = *(entry_ebx + 0x10)
                    *(entry_ebx + 0x10) -= 1
                    
                    if (temp0_1 - 1 s< 0)
                        sub_4c5870("dlg.pageYours >= 0", &data_83f3d3, "..\code\MultiplayerMenu.cpp", 
                            0x2ee, "MultiplayerMenuDialogUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                case 0x1d
                    *(entry_ebx + 0xc) += 1
                    
                    if (*(entry_ebx + 0xc) s> (eax_11 + (edx_4 & 3)) s>> 2)
                        sub_4c5870("dlg.pageOpen <= numPageOpen", &data_83f3d3, 
                            "..\code\MultiplayerMenu.cpp", 0x2f2, "MultiplayerMenuDialogUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                case 0x1e
                    int32_t temp1_1 = *(entry_ebx + 0xc)
                    *(entry_ebx + 0xc) -= 1
                    
                    if (temp1_1 - 1 s< 0)
                        sub_4c5870("dlg.pageOpen >= 0", &data_83f3d3, "..\code\MultiplayerMenu.cpp", 
                            0x2f6, "MultiplayerMenuDialogUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
            
            eax_17 = 0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_17
}
