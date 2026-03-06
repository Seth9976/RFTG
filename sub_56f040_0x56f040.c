// 函数名称: sub_56f040
// 虚拟地址: 0x56f040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __convention("regparm")sub_56f040(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = 0
    
    if (*(data_3079270 + 4) == 0x19 && *arg1 == 0)
        int32_t eax_1 = arg1[1]
        
        if (eax_1 == 0x20 && arg1[2] == 0)
            sub_56e600()
            int32_t eax_2
            eax_2.b = 0
            return eax_2
        
        if (eax_1 == 0x66 && arg1[2] == 0)
            void** eax_3 = sub_4eb140()
            long double x87_r7 = float.t(0)
            long double x87_r6 = fconvert.t(0.5f)
            void* ecx_1 = nullptr
            
            while (true)
                if (ecx_1 != 0)
                    ecx_1 += 0x7c
                else
                    ecx_1 = *eax_3
                
                void* eax_6
                
                while (true)
                    if (ecx_1 u>= eax_3[1] * 0x7c + *eax_3)
                        eax_6.b = 0
                        return eax_6
                    
                    if ((*(ecx_1 + 0x78) & 0xffff0000) != 0)
                        break
                    
                    ecx_1 += 0x7c
                
                long double x87_r5_1 = fconvert.t(*(ecx_1 + 0x4c))
                x87_r7 - x87_r5_1
                eax_6.w = (x87_r7 < x87_r5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7, x87_r5_1) ? 1 : 0) << 0xa
                    | (x87_r7 == x87_r5_1 ? 1 : 0) << 0xe | 0x3000
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (not(p_1))
                    *(ecx_1 + 0x4c) = fconvert.s(x87_r6)
                    *(ecx_1 + 0x50) = fconvert.s(x87_r6)
    
    LRESULT eax_7 = data_3079214
    
    if (eax_7 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "Editor\EditorControls.cpp", 0x550, 
            "EditorControlsInputHandle")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (eax_7)
        case 0, 3
            goto label_56f102
        case 1
            sub_56dc80(arg1, &data_3079218)
        label_56f102:
            
            if (*arg1 == 0)
                eax_7 = arg1[1]
                
                if (eax_7 == 0x5d && arg1[2] == 0)
                    eax_7.b = 0
                    data_30792ac = fconvert.s(fconvert.t(data_30792ac) * fconvert.t(0.5))
                    return eax_7
                
                if (eax_7 == 0x5b && arg1[2] == 0)
                    long double x87_r7_4 = fconvert.t(data_30792ac)
                    eax_7.b = 0
                    data_30792ac = fconvert.s(x87_r7_4 + x87_r7_4)
                    return eax_7
        case 2
            ebx.b = sub_56eb10(arg1, &data_3079218).b
            
            if (ebx.b == 0)
                goto label_56f102
    
    eax_7.b = ebx.b
    return eax_7
}
