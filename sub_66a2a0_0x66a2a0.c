// 函数名称: sub_66a2a0
// 虚拟地址: 0x66a2a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_66a2a0(int32_t arg1, int32_t arg2, void* arg3, void* arg4, void* arg5, char* arg6)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    char* esi = arg4
    int32_t eax = *(esi + 0x288)
    
    if (eax != 0)
        if (eax == 1)
            return sub_667b40(esi, arg6)
        
        *(esi + 0x288) = eax - 1
        
        if (eax == 2)
            sub_664100(esi, "No space in chunk cache for zTXt")
            return sub_667b40(esi, arg6)
    
    int32_t eax_5 = *(esi + 0x6c)
    
    if ((eax_5.b & 1) == 0)
        sub_664320(esi, "Missing IHDR before zTXt")
        noreturn
    
    if ((eax_5.b & 4) != 0)
        *(esi + 0x6c) = eax_5 | 8
    
    sub_666530(esi, *(esi + 0x2a8))
    char* eax_8 = sub_666560(esi, &arg6[1])
    *(esi + 0x2a8) = eax_8
    
    if (eax_8 == 0)
        return sub_664100(esi, "Out of memory processing zTXt chunk")
    
    sub_664410(esi, eax_8, arg6)
    sub_662280(esi, eax_8, arg6)
    
    if (sub_667b40(esi, 0) != 0)
        int32_t eax_11 = sub_666530(esi, *(esi + 0x2a8))
        *(esi + 0x2a8) = 0
        return eax_11
    
    arg6[*(esi + 0x2a8)] = 0
    char* eax_12 = *(esi + 0x2a8)
    char* edi_1 = eax_12
    
    while (*edi_1 != 0)
        edi_1 = &edi_1[1]
    
    char const* const var_18_4
    
    if (edi_1 u< eax_12 + arg6 - 2)
        int32_t ebx_1 = sx.d(edi_1[1])
        
        if (ebx_1 != 0)
            sub_664100(esi, "Unknown compression type in zTXt chunk")
            ebx_1 = 0
        
        void* edi_4 = &edi_1[1] - *(esi + 0x2a8) + 1
        sub_6669e0(esi, ebx_1, arg6, edi_4, &var_8)
        int32_t* eax_15 = sub_666560(esi, 0x1c)
        
        if (eax_15 != 0)
            void* ecx_3 = var_8
            *eax_15 = ebx_1
            eax_15[1] = *(esi + 0x2a8)
            eax_15[5] = 0
            eax_15[6] = 0
            eax_15[4] = 0
            eax_15[2] = *(esi + 0x2a8) + edi_4
            eax_15[3] = ecx_3
            int32_t eax_19 = sub_664d50(esi, arg5, eax_15, 1)
            sub_666530(esi, eax_15)
            uint32_t eax_9 = sub_666530(esi, *(esi + 0x2a8))
            *(esi + 0x2a8) = 0
            
            if (eax_19 == 0)
                return eax_9
            
            sub_664320(esi, "Insufficient memory to store zTXt chunk")
            noreturn
        
        var_18_4 = "Not enough memory to process zTXt chunk"
    else
        var_18_4 = "Truncated zTXt chunk"
    
    sub_664100(esi, var_18_4)
    int32_t eax_16 = sub_666530(esi, *(esi + 0x2a8))
    *(esi + 0x2a8) = 0
    return eax_16
}
