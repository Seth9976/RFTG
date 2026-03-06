// 函数名称: sub_410dc0
// 虚拟地址: 0x410dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_410dc0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69840c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_a4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(*(arg1 + 0x10))
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        if ((data_31666a0 & 1) == 0)
            data_31666a0.d |= 1
            int32_t var_8_1 = 0
            data_316669c = sub_4f5220(data_307c4f8, "txtCode")
            int32_t var_8_2 = 0xffffffff
        
        if ((data_31666a0 & 2) == 0)
            data_31666a0.d |= 2
            int32_t var_8_3 = 1
            data_3166698 = sub_4f5220(data_307c4f8, "txtResult")
            int32_t var_8_4 = 0xffffffff
        
        sub_4fa770(*(arg1 + 0x14), 0x10, 1)
        int32_t eax_6 = *(arg1 + 0xc)
        
        if (eax_6 u> 3)
            sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x751, 
                "GameSetupDialogDrawLink")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_9
        char* ecx_3
        int32_t edx_4
        
        switch (eax_6)
            case 0
                sub_4fa770(*(arg1 + 0x14), 1, 0)
                sub_4fa770(*(arg1 + 0x14), 0xe, 1)
            case 1
                sub_4fa770(*(arg1 + 0x14), 2, 0)
                edx_4 = sub_4fa770(*(arg1 + 0x14), 0xd, 1)
                ecx_3 = data_316669c
                eax_9 = arg1 + 0x18
            label_410f53:
                int32_t var_a8_1 = 1
                void* var_ac_3 = eax_9
                sub_4f9300(*(arg1 + 0x14), edx_4, ecx_3, ecx_3.b)
            case 2
                sub_4fa770(*(arg1 + 0x14), 4, 0)
                sub_4fa770(*(arg1 + 0x14), 0xb, 1)
            case 3
                sub_4fa770(*(arg1 + 0x14), 8, 0)
                edx_4 = sub_4fa770(*(arg1 + 0x14), 7, 1)
                int32_t eax_11 = *(arg1 + 0x28)
                
                if (eax_11 u> 4)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x74c, 
                        "GameSetupDialogDrawLink")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                switch (eax_11)
                    case 0
                        eax_9 = "Linking Device..."
                    case 1
                        eax_9 = "Link Successful"
                    case 2
                        eax_9 = "Link Failed.\r\rInvalid or expired Link Code."
                    case 3
                        eax_9 = "Link Failed.\r\rDevices already linked."
                    case 4
                        eax_9 = "Link Failed. Devices both in the same active game.\r\rEither finish or "
                        "abandon shared game, then re-link."
                
                ecx_3 = data_3166698
                goto label_410f53
        
        void var_94
        int32_t eax_13
        int80_t st0_1
        st0_1, eax_13 = sub_40a930(&var_94)
        float var_a8_3 = fconvert.s(fconvert.t(*(arg1 + 0x10)))
        void var_54
        __builtin_memcpy(&var_54, eax_13, 0x40)
        sub_4f9fe0(*(arg1 + 0x14), &var_54)
        long double x87_r6_2 = fconvert.t(*(arg1 + 0x10))
        long double x87_r5_1 = float.t(1)
        x87_r5_1 - x87_r6_2
        result.w = (x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1) && *(arg1 + 0xc) == 2)
            result = sub_506a30(arg1 + 0x50)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
