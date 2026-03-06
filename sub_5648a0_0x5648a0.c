// 函数名称: sub_5648a0
// 虚拟地址: 0x5648a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5648a0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1[1] != 3)
    if (arg1[1] != 3)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
            "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi = *sub_466320(arg1)
    int32_t eax_2 = arg2[0x10]
    
    if (*edi s> eax_2 || edi[1] s> eax_2)
        char* const esi_4 = arg1[8]
        
        if (esi_4 == 0)
            esi_4 = &data_83f3d3
        
        char* const var_30_8 = esi_4
        sub_4c5680("AtlasMaker: Texture too large for atlas %s")
        return 3
    
    int32_t var_1c
    char eax_4
    int32_t* edx
    eax_4, edx = sub_5645b0(edi, &var_1c, arg2)
    
    if (eax_4 == 0)
        char* const eax_6 = arg1[8]
        
        if (eax_6 == 0)
            eax_6 = &data_83f3d3
        
        char* const var_30_2 = eax_6
        sub_4c5680("AtlasMaker: Image load failed %s")
        return 3
    
    int32_t* var_30_3 = &var_1c
    void* var_18
    int32_t var_10
    
    if (sub_564770(arg2, edx) != 0)
        char* const eax_15 = arg1[8]
        
        if (eax_15 == 0)
            eax_15 = &data_83f3d3
        
        char* const var_30_7 = eax_15
        sub_4c5680("Atlas Maker: Duplicate image only included once: %s")
        sub_5646d0(&var_1c)
    else
        char eax_11
        void* edx_1
        eax_11, edx_1 = sub_564340(arg2, var_1c, var_18, &var_10)
        
        if (eax_11 == 0)
            int32_t var_14
            
            if (var_14 != 0)
                _aligned_free_base(var_14)
            
            return 1
        
        int32_t* var_30_6 = arg2
        sub_5646f0(&var_1c, edx_1)
        sub_5680e0(&arg2[6])
    
    int32_t edx_3 = var_10
    edi[9] = arg2[0x11]
    edi[0xa] = arg2[0x12]
    int32_t ecx_3 = var_1c
    edi[0xb] = edx_3
    int32_t var_c
    edi[0xc] = var_c
    *edi = ecx_3
    edi[1] = var_18
    edi[2] = fconvert.s(fconvert.t(arg2[0x13]))
    sub_564820()
    return 2
}
