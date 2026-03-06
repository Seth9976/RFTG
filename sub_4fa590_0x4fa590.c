// 函数名称: sub_4fa590
// 虚拟地址: 0x4fa590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_4fa590(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_14 = 0
    int32_t var_14 = 0
    
    while (true)
        int32_t edi_1 = *(arg2 + (var_14 << 2))
        void* eax_2
        char edx_1
        eax_2, edx_1 = sub_4fc3d0(&data_be1cb8, arg1)
        int32_t* esi_2 = *(eax_2 + 4)
        
        if (esi_2[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi_2 == 0)
            sub_520800(eax_2, edx_1, esi_2, 0)
            
            if (*esi_2 == 0)
                sub_509540(esi_2)
        
        int32_t ecx_3 = **esi_2
        void* eax_6 = edi_1 * 0x118 + *ecx_3
        
        if (edi_1 s>= 0x100)
            break
        
        int32_t edx_3 = *(eax_2 + (edi_1 << 2) + 0x30)
        int128_t* eax_7
        
        if (edx_3 != 0)
            eax_7 = sub_4fc1e0(ecx_3, edx_3)
        else
            eax_7 = sub_4fc0d0()
            *(eax_7 + 4) = &data_83f3d3
            *(eax_2 + (edi_1 << 2) + 0x30) = *(eax_7 + 0x1bc)
        
        int32_t eax_8 = *eax_7
        *(eax_7 + 8) = eax_8 + 1
        int32_t edx_5
        edx_5.b = edi_1 != arg3
        *(eax_7 + 0xc) = edx_5.b
        int32_t eax_9
        
        if (*(eax_7 + 0x134) s<= eax_8)
            eax_9 = *(eax_6 + 0x4c)
        else
            eax_9 = *(eax_7 + 0x138)
        
        long double x87_r7_1
        
        if (*(eax_7 + 0x5c) == 0)
            x87_r7_1 = float.t(*(eax_6 + 0x50))
        else
            x87_r7_1 = fconvert.t(eax_7[6].d)
        
        long double result_2 = fconvert.t(*(eax_7 + 0x14))
        long double result_1 = fconvert.t(fconvert.s((float.t(eax_9) + fconvert.t(fconvert.s(x87_r7_1)))
            / fconvert.t(1000.0)))
        result_1 - result_2
        eax_9.w = (result_1 < result_2 ? 1 : 0) << 8
            | (is_unordered.t(result_1, result_2) ? 1 : 0) << 0xa
            | (result_1 == result_2 ? 1 : 0) << 0xe | 0x3000
        long double result = result_1
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            result = result_2
        else
            *(eax_7 + 0x14) = fconvert.s(result_2)
        
        int32_t eax_11 = var_14 + 1
        var_14 = eax_11
        
        if (eax_11 s>= 0xa)
            return result
    
    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
