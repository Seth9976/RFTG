// 函数名称: sub_520bc0
// 虚拟地址: 0x520bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_520bc0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[1]
    int32_t eax = arg1[1]
    
    if (eax u> 0x22)
        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
            "AssetTypeRegistry.cpp", 0xb6, "AssetTypeGetInfo")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t eax_3 = *((eax << 5) + data_30785d4 + 8)
    
    if (eax_3 != 0)
        eax_3(arg1, **arg1)
    
    int32_t* esi_1 = *arg1
    
    if ((esi_1[2].b & 1) == 0)
        sub_4fed40(*esi_1, esi_1[3])
        *esi_1 = 0
    
    int32_t* eax_5 = esi_1[1]
    
    if (eax_5 != 0)
        sub_500770(eax_5)
        esi_1[1] = 0
    
    return _aligned_free_base(esi_1)
}
