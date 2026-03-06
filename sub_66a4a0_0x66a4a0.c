// 函数名称: sub_66a4a0
// 虚拟地址: 0x66a4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_66a4a0(char* arg1, void* arg2, char* arg3)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x288)
    int32_t eax = *(arg1 + 0x288)
    
    if (eax != 0)
        if (eax == 1)
            return sub_667b40(arg1, arg3)
        
        *(arg1 + 0x288) = eax - 1
        
        if (eax == 2)
            sub_664100(arg1, "No space in chunk cache for iTXt")
            return sub_667b40(arg1, arg3)
    
    int32_t eax_5 = *(arg1 + 0x6c)
    
    if ((eax_5.b & 1) == 0)
        sub_664320(arg1, "Missing IHDR before iTXt")
        noreturn
    
    if ((eax_5.b & 4) != 0)
        *(arg1 + 0x6c) = eax_5 | 8
    
    sub_666530(arg1, *(arg1 + 0x2a8))
    char* eax_8 = sub_666560(arg1, &arg3[1])
    *(arg1 + 0x2a8) = eax_8
    
    if (eax_8 == 0)
        return sub_664100(arg1, "No memory to process iTXt chunk")
    
    sub_664410(arg1, eax_8, arg3)
    sub_662280(arg1, eax_8, arg3)
    
    if (sub_667b40(arg1, 0) != 0)
        int32_t eax_11 = sub_666530(arg1, *(arg1 + 0x2a8))
        *(arg1 + 0x2a8) = 0
        return eax_11
    
    arg3[*(arg1 + 0x2a8)] = 0
    char* ecx_2 = *(arg1 + 0x2a8)
    char* ebx_1 = ecx_2
    
    while (*ebx_1 != 0)
        ebx_1 = &ebx_1[1]
    
    void* edi_1 = arg3 + ecx_2
    int32_t eax_25
    char const* const var_20_4
    
    if (&ebx_1[1] u< edi_1 - 3)
        int32_t edx_2 = sx.d(ebx_1[1])
        void* ebx_3 = &ebx_1[3]
        
        if (sx.d(ebx_1[2]) != 0 || edx_2 != 0)
            var_20_4 = "Unknown iTXt compression type or method"
            goto label_66a6f9
        
        void* eax_14 = ebx_3
        
        if (*ebx_3 != edx_2.b)
            do
                eax_14 += 1
            while (*eax_14 != 0)
        
        void* eax_15 = eax_14 + 1
        void* var_8_1 = eax_15
        
        if (eax_15 u< edi_1)
            while (*eax_15 != 0)
                eax_15 += 1
            
            if (eax_15 + 1 u< edi_1)
                void* eax_18 = eax_15 + 1 - ecx_2
                int32_t eax_19 = lstrlenA(ecx_2 + eax_18)
                int32_t* eax_20 = sub_666560(arg1, 0x1c)
                
                if (eax_20 == 0)
                    var_20_4 = "Not enough memory to process iTXt chunk"
                    goto label_66a6f9
                
                *eax_20 = 1
                eax_20[6] = *(arg1 + 0x2a8) - ecx_2 + var_8_1
                eax_20[5] = *(arg1 + 0x2a8) - ecx_2 + ebx_3
                eax_20[4] = eax_19
                eax_20[3] = 0
                eax_20[1] = *(arg1 + 0x2a8)
                eax_20[2] = *(arg1 + 0x2a8) + eax_18
                int32_t eax_23 = sub_664d50(arg1, arg2, eax_20, 1)
                sub_666530(arg1, eax_20)
                eax_25 = sub_666530(arg1, *(arg1 + 0x2a8))
                *(arg1 + 0x2a8) = 0
                
                if (eax_23 != 0)
                    sub_664320(arg1, "Insufficient memory to store iTXt chunk")
                    noreturn
            else
                sub_664100(arg1, "Malformed iTXt chunk")
                eax_25 = sub_666530(arg1, *(arg1 + 0x2a8))
                *(arg1 + 0x2a8) = 0
        else
            sub_664100(arg1, "Truncated iTXt chunk")
            eax_25 = sub_666530(arg1, *(arg1 + 0x2a8))
            *(arg1 + 0x2a8) = 0
    else
        var_20_4 = "Truncated iTXt chunk"
    label_66a6f9:
        sub_664100(arg1, var_20_4)
        eax_25 = sub_666530(arg1, *(arg1 + 0x2a8))
        *(arg1 + 0x2a8) = 0
    return eax_25
}
