// 函数名称: sub_6647a0
// 虚拟地址: 0x6647a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6647a0(void* arg1, void* arg2, PSTR arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int128_t* arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg1 == 0 || arg2 == 0)
        return 
    
    void* eax_3 = lstrlenA(arg3) + 1
    void* var_8_1 = eax_3
    
    if (arg6 u> 3)
        sub_664320(arg1, "Invalid pCAL equation type")
        noreturn
    
    int32_t edi_1 = 0
    
    if (arg7 s> 0)
        do
            int32_t eax_4 = lstrlenA(*(arg9 + (edi_1 << 2)))
            
            if (sub_662c30(*(arg9 + (edi_1 << 2)), eax_4) == 0)
                sub_664320(arg1, "Invalid format for pCAL parameter")
                noreturn
            
            edi_1 += 1
        while (edi_1 s< arg7)
        
        eax_3 = var_8_1
    
    int128_t* eax_7 = sub_666560(arg1, eax_3)
    *(arg2 + 0xa0) = eax_7
    
    if (eax_7 != 0)
        sub_5ab990(eax_7, arg3, var_8_1)
        *(arg2 + 0xa4) = arg4
        *(arg2 + 0xa8) = arg5
        *(arg2 + 0xb4) = arg6.b
        *(arg2 + 0xb5) = arg7.b
        uint32_t edi_3 = lstrlenA(arg8) + 1
        int128_t* eax_11 = sub_666560(arg1, edi_3)
        *(arg2 + 0xac) = eax_11
        
        if (eax_11 == 0)
            sub_664100(arg1, "Insufficient memory for pCAL units")
            return 
        
        sub_5ab990(eax_11, arg8, edi_3)
        int128_t* eax_13 = sub_666560(arg1, (arg7 << 2) + 4)
        *(arg2 + 0xb0) = eax_13
        
        if (eax_13 == 0)
            sub_664100(arg1, "Insufficient memory for pCAL params")
            return 
        
        sub_5abfc0(eax_13, 0, (arg7 << 2) + 4)
        int32_t edi_5 = 0
        
        if (arg7 s> 0)
            do
                uint32_t ebx_3 = lstrlenA(*(arg9 + (edi_5 << 2))) + 1
                *(*(arg2 + 0xb0) + (edi_5 << 2)) = sub_666560(arg1, ebx_3)
                int32_t* eax_20 = *(arg2 + 0xb0) + (edi_5 << 2)
                
                if (*eax_20 == 0)
                    sub_664100(arg1, "Insufficient memory for pCAL parameter")
                    return 
                
                sub_5ab990(*eax_20, *(arg9 + (edi_5 << 2)), ebx_3)
                edi_5 += 1
            while (edi_5 s< arg7)
        
        *(arg2 + 8) |= 0x400
        *(arg2 + 0xb8) |= 0x80
        return 
    
    sub_664100(arg1, "Insufficient memory for pCAL purpose")
}
