// 函数名称: sub_40c910
// 虚拟地址: 0x40c910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_40c910(int32_t* arg1, int32_t arg2, bool arg3, char* arg4 @ edi)
{
    // 第一条实际指令: *arg4 = arg3
    *arg4 = arg3
    *(arg4 + 0x374) = arg2
    *(arg4 + 0x378) = *arg1
    *(arg4 + 0x37c) = arg1[1]
    int32_t edx
    edx.b = arg2 == 0
    void* eax_1 = &arg4[0xc2]
    arg4[0x361] = arg2 != 0
    arg4[0x345] = edx.b
    void* var_8 = eax_1
    int32_t i_2 = 0x19
    int32_t i
    
    do
        *eax_1 = 0
        eax_1 += 0x1c
        i = i_2
        i_2 -= 1
    while (i != 1)
    void* eax_3
    int32_t ecx
    eax_3, ecx = sub_40c7a0(arg4)
    
    if (arg2 u> 5)
        sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x1d9, "GameSetupDialogShow")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (arg2)
        case 0
            *(eax_3 + 0x50) = 1
            *(eax_3 + 0x5c) = 2
            
            if (*(eax_3 + 0x68) != 2)
                *(eax_3 + 0x68) = 0
            
            if (*(eax_3 + 0x74) != 2)
                *(eax_3 + 0x74) = 0
            
            char eax_4
            int32_t ecx_1
            eax_4, ecx_1 = sub_4b95c0(ecx, 2)
            void* eax_6
            
            if (eax_4 != 0)
                char eax_7
                int32_t ecx_4
                eax_7, ecx_4 = sub_4b95c0(ecx_1, 3)
                
                if (eax_7 != 0)
                    eax_6 = sub_4b95c0(ecx_4, 4)
                    
                    if (eax_6.b == 0)
                        eax_6 = *(eax_3 + 0x4c)
                        
                        if (eax_6 s>= 2)
                            eax_6 = 2
                        
                        *(eax_3 + 0x4c) = eax_6
                else
                    eax_6 = *(eax_3 + 0x4c)
                    
                    if (eax_6 s>= 1)
                        eax_6 = 1
                    
                    *(eax_3 + 0x4c) = eax_6
            else
                int32_t eax_5 = *(eax_3 + 0x4c)
                int32_t ecx_2
                ecx_2.b = eax_5 s>= 0
                eax_6 = eax_5 & (ecx_2 - 1)
                *(eax_3 + 0x4c) = eax_6
            
            *var_8 = 1
            arg4[0xde] = 1
            return eax_6
        case 1
            *(eax_3 + 0x50) = 1
            *(eax_3 + 0x5c) = 1
            *var_8 = 1
            arg4[0xde] = 1
            return sub_40c8b0(eax_3)
        case 2
            *(eax_3 + 0x50) = 1
            *var_8 = 1
            return sub_40c8b0(eax_3)
        case 3
            void* ecx_6 = var_8
            int32_t i_1
            
            for (i_1 = 0; i_1 s< 0x19; )
                if (i_1 s< 0x10 || i_1 s> 0x16)
                    *ecx_6 = 1
                
                i_1 += 1
                ecx_6 += 0x1c
            
            return i_1
        case 4
            arg4[0x2c] = 1
            *(arg4 + 0x30) = 1
            *arg4 = 0
            *(arg4 + 0x40) = 0
            return eax_3
        case 5
            arg4[8] = 1
            *(arg4 + 0xc) = 0
            *arg4 = 0
            return eax_3
}
