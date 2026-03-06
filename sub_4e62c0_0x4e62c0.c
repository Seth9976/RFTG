// 函数名称: sub_4e62c0
// 虚拟地址: 0x4e62c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4e62c0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg1 u> 0x22)
        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
            "AssetTypeRegistry.cpp", 0xb6, "AssetTypeGetInfo")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* esi = data_30785c8
    int32_t* edi = *((arg1 << 5) + data_30785d4 + 0x1c)
    *(esi + 0x1c) += 1
    
    if (*(esi + 0x10) == 0)
        sub_504460(esi + 0x10)
    
    int32_t* ebx = *(esi + 0x10)
    *(esi + 0x10) = *ebx
    __builtin_memset(ebx, 0, 0x14)
    
    if (ebx != 0)
        *ebx = &data_83f3d3
        ebx[1] = 0
        ebx[2] = 0
        ebx[3] = 0
    
    ebx[4] = edi
    sub_4c4590(*edi)
    int32_t* result = sub_4cce80(0x10)
    *result = 0
    result[2] = 0
    result[3] = edi
    result[1] = ebx
    int32_t eax_2 = edi[3]
    
    if (eax_2 != 0)
        int32_t* eax_4 = sub_4cce80(eax_2)
        sub_501f80(eax_4, edi, ebx, 0)
        *result = eax_4
        return result
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
