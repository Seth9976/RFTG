// 函数名称: sub_554750
// 虚拟地址: 0x554750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_554750(int32_t* arg1)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    int32_t i_8 = entry_ebx[2]
    int32_t i_10 = arg1[2]
    int32_t i_5 = i_8
    
    if (i_8 s>= i_10)
        i_5 = i_10
    
    int32_t j_3 = entry_ebx[1]
    int32_t j_4 = arg1[1]
    int32_t j_2 = j_3
    
    if (j_3 s>= j_4)
        j_2 = j_4
    
    int32_t edx = arg1[3]
    uint8_t* var_8
    void* eax
    
    if (edx s< 0)
        int32_t eax_1 = arg1[4]
        
        if (eax_1 s>= 0xd && (eax_1 s<= 0x12 || eax_1 == 0x15))
            sub_4c5870("!TextureFormatIsCompressed(pDestSpec->format)", &data_83f3d3, "ImageUtils.cpp", 
                0x1b7, "ImageBufferCopyToNewFormat")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_3 = entry_ebx[4]
        
        if (eax_3 s>= 0xd && (eax_3 s<= 0x12 || eax_3 == 0x15))
            sub_4c5870("!TextureFormatIsCompressed(pSourceSpec->format)", &data_83f3d3, 
                "ImageUtils.cpp", 0x1b8, "ImageBufferCopyToNewFormat")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_8 = (i_5 - 1) * edx + *arg1
        eax = entry_ebx[3] * (i_5 - 1) + *entry_ebx
    else
        eax = *entry_ebx
        var_8 = *arg1
    
    int32_t ecx_2 = arg1[4]
    void* var_c = eax
    int32_t eax_10 = entry_ebx[4]
    int32_t i_4
    
    if (eax_10 == ecx_2 || (eax_10 == 0xa && ecx_2 == 0xb) || (eax_10 == 0xb && ecx_2 == 0xa)
            || (eax_10 == 1 && ecx_2 == 4) || (eax_10 == 4 && ecx_2 == 1))
        int32_t i_6 = i_5
        int32_t i_9 = sub_554120(eax_10, edx)
        void* eax_11 = sub_5540b0(entry_ebx[4], j_2)
        int32_t eax_12 = entry_ebx[3]
        
        if (eax_12 == eax_11 && arg1[3] == eax_11)
            return sub_5ab990(*arg1, *entry_ebx, eax_11 * i_9)
        
        int32_t ecx_4 = neg.d(eax_11)
        
        if (eax_12 == ecx_4 && arg1[3] == ecx_4)
            return sub_5ab990(*arg1, *entry_ebx, eax_11 * i_9)
        
        i_4 = i_9
        
        if (i_4 s> 0)
            int32_t i_3 = i_4
            int32_t i
            
            do
                int128_t* edi_1 = var_c
                sub_5ab990(var_8, edi_1, eax_11)
                var_8 = &var_8[arg1[3]]
                i = i_3
                i_3 -= 1
                var_c = edi_1 + entry_ebx[3]
            while (i != 1)
            return arg1
    else
        if (eax_10 s>= 0xd && (eax_10 s<= 0x12 || eax_10 == 0x15))
            sub_4c5870("!TextureFormatIsCompressed(pSourceSpec->format)", &data_83f3d3, 
                "ImageUtils.cpp", 0x1f2, "ImageBufferCopyToNewFormat")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (ecx_2 s>= 0xd && (ecx_2 s<= 0x12 || ecx_2 == 0x15))
            sub_4c5870("!TextureFormatIsCompressed(pDestSpec->format)", &data_83f3d3, "ImageUtils.cpp", 
                0x1f3, "ImageBufferCopyToNewFormat")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_18 = sub_553f70(eax_10)
        i_4 = sub_553f70(arg1[4])
        int32_t i_7 = i_4
        
        if (i_5 s> 0)
            int32_t i_2 = i_5
            int32_t i_1
            
            do
                void* edi_3 = var_c
                uint8_t* esi_4 = var_8
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        int32_t eax_22 = sub_554240(edi_3, edx.b, entry_ebx[4])
                        edx = sub_554500(arg1[4], arg1, esi_4, eax_22)
                        esi_4 = &esi_4[i_7]
                        edi_3 += eax_18
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                i_4 = entry_ebx[3]
                edx = arg1[3]
                var_c += i_4
                var_8 = &var_8[edx]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    
    return i_4
}
