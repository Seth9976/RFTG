// 函数名称: sub_4f6420
// 虚拟地址: 0x4f6420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_4f6420(char arg1, float arg2)
{
    // 第一条实际指令: float var_c = fconvert.s(fconvert.t(data_8c4d34))
    float var_c = fconvert.s(fconvert.t(data_8c4d34))
    int32_t* esi = data_307c110
    int32_t ebx = 0
    int32_t edi = 0
    int32_t eax
    
    while (true)
        if (esi[1] != 0x1e)
            sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*esi == 0)
            char edx = sub_520800(eax, edx, esi, 0)
            
            if (*esi == 0)
                edx = sub_509540(esi)
        
        int32_t* eax_3 = **esi
        
        if (edi s< 0)
            sub_4c5870("index >= 0", &data_83f3d3, "UIDef.cpp", 0x104, "UIDefGetElement")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (ebx s>= eax_3[1])
            sub_4c5870("index < def.numElements", &data_83f3d3, "UIDef.cpp", 0x105, "UIDefGetElement")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax = *eax_3
        
        if (*(eax + edi + 4) == 6)
            break
        
        ebx -= 1
        int32_t temp0_1 = edi
        edi -= 0x118
        
        if (temp0_1 - 0x118 s< 0)
            return float.t(1)
    
    long double x87_r7_2 = float.t(1)
    float var_10
    
    if (arg1 == 0)
        var_10 = fconvert.s(fconvert.t(-1f))
    else
        var_10 = fconvert.s(x87_r7_2)
    
    long double x87_r6_7 = float.t(0)
    long double x87_r5 = fconvert.t(fconvert.s(
        fconvert.t(var_10) * fconvert.t(var_c) * fconvert.t(1000.0) / float.t(*(eax + edi + 0x4c))
        + fconvert.t(arg2)))
    x87_r5 - x87_r6_7
    eax.w = (x87_r5 < x87_r6_7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6_7) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r6_7 ? 1 : 0) << 0xe | 0x2800
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        x87_r7_2 = x87_r5
        x87_r6_7 - x87_r7_2
        eax.w = (x87_r6_7 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_7, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_7 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax:1.b & 0x41) == 0)
            return fconvert.t(fconvert.s(x87_r6_7))
    
    return fconvert.t(fconvert.s(x87_r7_2))
}
