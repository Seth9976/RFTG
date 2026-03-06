// 函数名称: sub_4cfa80
// 虚拟地址: 0x4cfa80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4cfa80(int32_t arg1, void* arg2, uint32_t arg3, void** arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3 = *(arg2 + 4)
    
    if (eax_3 u> 0x22)
        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
            "AssetTypeRegistry.cpp", 0xb6, "AssetTypeGetInfo")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* edx = *((eax_3 << 5) + data_30785d4 + 0x1c)
    
    if (*(arg2 + 0x10) != 0)
        goto label_4cfb9f
    
    int32_t var_10
    
    if (sub_4cfa10(arg3) == 0 || var_10 != 1)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t var_c0
    
    if (sub_4cd310(arg3, 0xa8, &var_c0) == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    char const* const var_e0_1
    int32_t var_bc
    
    if (var_bc != *(edx + 0x18))
        char* const edi_1 = *(arg2 + 0x20)
        
        if (edi_1 == 0)
            edi_1 = &data_83f3d3
        
        char* const var_dc_2 = edi_1
        var_e0_1 = "Can't load pack asset because version doesn't match '%s'"
        goto label_4cfb25
    
    int32_t eax_7 = var_c0
    
    if (eax_7 s< 0 || eax_7 s>= 0x23)
        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
            "AssetTypeRegistry.cpp", 0xb6, "AssetTypeGetInfo")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_9 = (eax_7 << 5) + data_30785d4
    int32_t var_b8
    
    if ((*(eax_9 + 0x18) & 1) == 0 && var_b8 != *(eax_9 + 0x14))
        char* const edi_2 = *(arg2 + 0x20)
        
        if (edi_2 == 0)
            edi_2 = &data_83f3d3
        
        char* const var_dc_3 = edi_2
        var_e0_1 = "Can't load pack asset because hash doesn't match '%s'"
    label_4cfb25:
        sub_4c5680(var_e0_1)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t var_b4
    *(arg2 + 0x10) = var_b4
    int32_t var_b0
    *(arg2 + 0x14) = var_b0
    int32_t var_ac
    *(arg2 + 0x18) = var_ac
    label_4cfb9f:
    int32_t ebx_1 = *(arg2 + 0x18)
    
    if (ebx_1 == 0)
        ebx_1 = *(arg2 + 0x14)
    
    int32_t* eax_12 = sub_4cce80(ebx_1 + 0x10)
    
    if (sub_4cf990(*(arg2 + 0x10), edx, arg3, &eax_12[4], edx) != 0)
        *arg4 = eax_12
        *eax_12 = &eax_12[4]
        *(*arg4 + 8) = 1
        *(*arg4 + 0xc) = edx
        *(*arg4 + 4) = 0
        void** eax_17
        eax_17.b = 1
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_17
    
    if (eax_12 == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    _aligned_free_base(eax_12)
    int32_t eax_15
    eax_15.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_15
}
