// 函数名称: sub_5171f0
// 虚拟地址: 0x5171f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5171f0(int32_t arg1, int32_t* arg2, float arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint64_t (* edi)[0x2]
    uint64_t (* var_90)[0x2] = edi
    char* const var_a0
    
    if (arg2[1] != 2)
        char const* const var_94 = "StructureGetDef"
        int32_t var_98 = 0x550
        char const* const var_9c = "Structure.cpp"
        var_a0 = &data_83f3d3
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_STRUCTURE", var_a0, var_9c, var_98, var_94)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_4
    int32_t edx
    eax_4, edx = sub_466320(arg2)
    void* ecx = *eax_4
    
    if (*(ecx + 0x40) s<= 0)
        char const* const var_94_2 = "AnimPathGetPosAtTime"
        int32_t var_98_1 = 0x491
        char const* const var_9c_1 = "Animation.cpp"
        var_a0 = &data_83f3d3
        sub_4c5870("pAnimStructure->pStructureImportData->numAnimClips > animIndex", var_a0, var_9c_1, 
            var_98_1, var_94_2)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx + 0x10) s<= 0)
        char const* const var_94_3 = "AnimPathGetPosAtTime"
        int32_t var_98_2 = 0x496
        char const* const var_9c_2 = "Animation.cpp"
        var_a0 = &data_83f3d3
        sub_4c5870("pAnimStructure->pStructureImportData->hardpointCount > 0", var_a0, var_9c_2, 
            var_98_2, var_94_3)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ebx = *(ecx + 0x14)
    float* ecx_1 = ebx[0xd]
    
    if (ecx_1 s< 0)
        char const* const var_94_4 = "AnimPathGetPosAtTime"
        int32_t var_98_3 = 0x498
        char const* const var_9c_3 = "Animation.cpp"
        var_a0 = &data_83f3d3
        sub_4c5870("hardpoint->hardpointBoneIndex >= 0", var_a0, var_9c_3, var_98_3, var_94_4)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_60
    int32_t* var_94_5 = &var_60
    float* var_98_4 = ecx_1
    float* var_9c_4 = ecx_1
    sub_515b70(*(*(ecx + 0x44) + 8), edi, fconvert.s(fconvert.t(arg3)), edx, ecx_1)
    int32_t var_50
    int32_t var_1c = var_50
    int32_t var_4c
    int32_t var_18 = var_4c
    int32_t var_2c = var_60
    int32_t var_48
    int32_t var_14 = var_48
    float var_58
    float edx_2 = var_58
    float var_44
    float var_40
    float var_3c
    float var_30 = fconvert.s((fconvert.t(var_40) + fconvert.t(var_44) + fconvert.t(var_3c))
        * fconvert.t(0.3333333432674408))
    int32_t var_5c
    int32_t var_28 = var_5c
    int32_t var_54
    int32_t var_20 = var_54
    float var_24 = edx_2
    float var_80
    __builtin_memcpy(&var_80, &var_30, 0x20)
    sub_4d6090(&var_58, edx_2, ebx)
    __builtin_memcpy(&var_30, &var_58, 0x20)
    sub_405f60(&var_58, &var_80)
    __builtin_memcpy(arg1, &var_58, 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}
