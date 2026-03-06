// 函数名称: sub_40cb70
// 虚拟地址: 0x40cb70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_40cb70(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: void* eax_1
    void* eax_1
    int32_t ecx
    eax_1, ecx = sub_40c7a0(arg3)
    
    if (arg1 u<= 3)
        sub_40cae0(arg3, arg1)
    else if (arg1 - 4 u<= 3)
        int32_t eax_5 = sub_40c7a0(arg3)
        
        if (*(eax_5 + ((arg1 * 3 - 0xc) << 2) + 0x50) != 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x22b, 
                "GameSetupDialogAIDifficultBtnClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *(eax_5 + ((arg1 * 3 - 0xc) << 2) + 0x54) += 1
        
        if (*(eax_5 + ((arg1 * 3 - 0xc) << 2) + 0x54) s>= 3)
            *(eax_5 + ((arg1 * 3 - 0xc) << 2) + 0x54) = 0
    else if (arg1 - 8 u> 3)
        int32_t var_20_1
        int32_t* var_1c_1
        uint32_t var_8
        int32_t eax_3
        void* eax_27
        
        switch (arg1)
            case 0xc
                eax_3.b = *(eax_1 + 0x84) == 0
                *(eax_1 + 0x84) = eax_3.b
                return 0
            case 0xd
                ecx.b = *(eax_1 + 0x85) == 0
                *(eax_1 + 0x85) = ecx.b
                return 0
            case 0xf
                if (*(eax_1 + 0x44) == 2)
                    *(eax_1 + 0x44) = 0
                    return 0
                
                *(eax_1 + 0x44) = 2
                *(eax_1 + 0x86) = 0
                *(eax_1 + 0x68) = 0
                *(eax_1 + 0x74) = 0
                return 0
            case 0x10
                return 1
            case 0x11
                if (*(arg3 + 0x374) == 0)
                    *(eax_1 + 0x40) = 2
                    *(arg3 + 4) = fconvert.s(float.t(0))
                    *arg3 = 0
                    sub_408a40()
                    return 2
                
                sub_4c5870("dlg.style == STYLE_SINGLEPLAYER", &data_83f3d3, "..\code\GameSetupDlg.cpp", 
                    0x32a, "GameSetupDialogClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            case 0x12
                int32_t eax_34 = *(arg3 + 0x374)
                
                if (eax_34 == 2)
                    *(eax_1 + 0x40) = 2
                    *(arg3 + 4) = fconvert.s(float.t(0))
                    *arg3 = 0
                    sub_408a40()
                    return arg1 - 0xe
                
                if (eax_34 == 1)
                    *(eax_1 + 0x40) = 2
                    sub_408a40()
                    return 3
                
                sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x325, 
                    "GameSetupDialogClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            case 0x13
                sub_4075c0()
                void* eax_31 = sub_40c6f0(&arg3[0x378])
                void* edx_11 = data_27e7a40
                uint32_t eax_32 = *(eax_31 + 0x1d4)
                int32_t ecx_9 = *(edx_11 + 0x28)
                var_8 = eax_32
                sub_4c75d0(eax_32, edx_11, ecx_9, 4, 0xf425f, &var_8)
                sub_407670()
                return 1
            case 0x14
                sub_4075c0()
                eax_27 = sub_40c6f0(&arg3[0x378])
                
                if (*(eax_27 + 0x1dc) != 1)
                    sub_407670()
                    return 1
                
                var_1c_1 = &var_8
                var_20_1 = 0xf4261
            label_40cd8f:
                void* edx_10 = data_27e7a40
                uint32_t eax_28 = *(eax_27 + 0x1d4)
                int32_t ecx_7 = *(edx_10 + 0x28)
                var_8 = eax_28
                sub_4c75d0(eax_28, edx_10, ecx_7, 4, var_20_1, var_1c_1)
                sub_405420(&arg3[0x378])
                sub_407670()
                return 1
            case 0x15
                sub_4075c0()
                eax_27 = sub_40c6f0(&arg3[0x378])
                var_1c_1 = &var_8
                var_20_1 = 0xf4260
                goto label_40cd8f
            case 0x16
                sub_4075c0()
                eax_27 = sub_40c6f0(&arg3[0x378])
                var_1c_1 = &var_8
                var_20_1 = 0xf4262
                goto label_40cd8f
            case 0x17
                int32_t eax_19 = *(eax_1 + 0x8c)
                
                if (eax_19 == 2)
                    *(eax_1 + 0x8c) = 1
                    return 0
                
                if (eax_19 == 1)
                    *(eax_1 + 0x8c) = 0
                    return 0
                
                int32_t eax_22 = neg.d(eax_19)
                *(eax_1 + 0x8c) = (sbb.d(eax_22, eax_22, eax_19 != 0) & 0xfffffffe) + 2
                return 0
            case 0x18
                *arg3 = 0
                *(arg3 + 4) = fconvert.s(float.t(0))
                return arg1 - 0x13
        
        if (arg1 != 0xe)
            sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x352, "GameSetupDialogClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_3.b = *(eax_1 + 0x86) == 0
        *(eax_1 + 0x86) = eax_3.b
        
        if (eax_3.b == 1)
            *(eax_1 + 0x44) = 0
    else
        bool eax_9
        int32_t ecx_2
        eax_9, ecx_2 = sub_4b95c0(ecx, arg1 - 7)
        
        if (eax_9 == 0 || arg4 == 1)
            return arg1 + 0x25
        
        if (arg1 == 0xa)
            if (sub_4b95c0(ecx_2, arg1 - 8) == 0)
                return 0x2e
        else if (arg1 == 0xb)
            char eax_11
            int32_t ecx_3
            eax_11, ecx_3 = sub_4b95c0(ecx_2, arg1 - 8)
            
            if (eax_11 != 0)
                eax_9, ecx_3 = sub_4b95c0(ecx_3, arg1 - 9)
            
            if (eax_11 == 0 || eax_9 == 0)
                char eax_12
                int32_t ecx_4
                eax_12, ecx_4 = sub_4b95c0(ecx_3, 2)
                
                if (eax_12 == 0)
                    return 0x2e
                
                int32_t ecx_5
                ecx_5.b = sub_4b95c0(ecx_4, 3) != 0
                return ecx_5 + 0x2f
        
        if (arg1 == 8)
            eax_9 = *(eax_1 + 0x87) == 0
            *(eax_1 + 0x87) = eax_9
            
            if (eax_9 == 1)
                *(eax_1 + 0x44) = 0
        else if (arg1 - 7 s> 4)
            int32_t edx_6 = *(eax_1 + 0x4c) - (arg1 - 8)
            int32_t edx_7 = neg.d(edx_6)
            *(eax_1 + 0x4c) = sbb.d(edx_7, edx_7, edx_6 != 0) & (arg1 - 8)
        else if (*(eax_1 + 0x4c) s< arg1 - 8)
            *(eax_1 + 0x4c) = arg1 - 8
        else
            *(eax_1 + 0x4c) = arg1 - 9
        
        if (*(eax_1 + 0x4c) s< 2)
            *(eax_1 + 0x44) = 0
    
    return 0
}
