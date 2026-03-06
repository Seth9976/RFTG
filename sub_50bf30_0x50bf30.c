// 函数名称: sub_50bf30
// 虚拟地址: 0x50bf30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_50bf30(float* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2[1] != 3)
    if (arg2[1] != 3)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
            "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi = *sub_466320(arg2)
    int32_t* eax_3 = edi[9]
    
    if (eax_3 == 0)
        if (edi[0xa] == 1)
            char* const eax_4 = arg2[8]
            
            if (eax_4 == 0)
                eax_4 = &data_83f3d3
            
            char* const var_24_1 = eax_4
            sub_4c5680("reimporting atlased font texture %s")
            sub_508cd0(arg2)
            sub_5094d0(arg2, 1, 0)
            eax_3.b = 0
            return eax_3
        
        if (eax_3 == 0)
            eax_3.b = 0
            return eax_3
    
    if (eax_3[1] != 3)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
            "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_7 = *sub_466320(eax_3)
    
    if (edi[0xa] != eax_7[0xa])
        char* const eax_8 = arg2[8]
        
        if (eax_8 == 0)
            eax_8 = &data_83f3d3
        
        char* const var_24_3 = eax_8
        sub_4c5680("didn't find asset in atlas forcing a reimport %s")
        sub_508cd0(arg2)
        sub_5094d0(arg2, 1, 0)
        int32_t* eax_9
        eax_9.b = 0
        return eax_9
    
    long double x87_r7_1 = float.t(*eax_7)
    
    if (*eax_7 s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_2 = fconvert.t(fconvert.s(float.t(edi[0xb])))
    long double x87_r5 = fconvert.t(fconvert.s(x87_r7_1))
    long double x87_r5_2 = float.t(*edi)
    
    if (*edi s< 0)
        x87_r5_2 = x87_r5_2 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_6 = float.t(eax_7[1])
    
    if (eax_7[1] s< 0)
        x87_r7_6 = x87_r7_6 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_7 = fconvert.t(fconvert.s(float.t(edi[0xc])))
    long double x87_r5_3 = fconvert.t(fconvert.s(x87_r7_6))
    long double x87_r5_5 = float.t(edi[1])
    
    if (edi[1] s< 0)
        x87_r5_5 = x87_r5_5 + fconvert.t(4.2949673e+09f)
    
    int32_t eax_10
    eax_10.b = 1
    long double x87_r6_6 = fconvert.t(fconvert.s(x87_r7_2 / x87_r5))
    long double x87_r7_11 = fconvert.t(fconvert.s((x87_r7_2 + x87_r5_2) / x87_r5)) - x87_r6_6
    float* entry_ebx
    *entry_ebx = fconvert.s(fconvert.t(*arg1) * x87_r7_11 + x87_r6_6)
    long double x87_r4_2 = fconvert.t(fconvert.s(x87_r7_7 / x87_r5_3))
    long double x87_r5_11 = fconvert.t(fconvert.s((x87_r7_7 + x87_r5_5) / x87_r5_3)) - x87_r4_2
    entry_ebx[1] = fconvert.s(fconvert.t(arg1[1]) * x87_r5_11 + x87_r4_2)
    entry_ebx[2] = fconvert.s(fconvert.t(arg1[2]) * x87_r7_11 + x87_r6_6)
    entry_ebx[3] = fconvert.s(fconvert.t(arg1[3]) * x87_r5_11 + x87_r4_2)
    entry_ebx[4] = fconvert.s(fconvert.t(arg1[4]) * x87_r7_11 + x87_r6_6)
    entry_ebx[5] = fconvert.s(fconvert.t(arg1[5]) * x87_r5_11 + x87_r4_2)
    entry_ebx[6] = fconvert.s(x87_r6_6 + x87_r7_11 * fconvert.t(arg1[6]))
    entry_ebx[7] = fconvert.s(x87_r4_2 + x87_r5_11 * fconvert.t(arg1[7]))
    return eax_10
}
