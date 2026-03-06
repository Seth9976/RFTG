// 函数名称: sub_4e6130
// 虚拟地址: 0x4e6130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4e6130()
{
    // 第一条实际指令: if (data_30785c4 != 0)
    if (data_30785c4 != 0)
        sub_4c5870("!gpAssetUtilData", &data_83f3d3, "AssetUtils.cpp", 0x28, "AssetUtilInitForApp")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0xc)
            esi_2 = edx + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* result = *esi_2
    *esi_2 = *result
    *result = 0
    result[1] = 0
    result[2] = 0
    
    if (result == 0)
        data_30785c4 = 0
        return 0
    
    *result = 0
    result[1] = 0
    result[2] = 0
    data_30785c4 = result
    return result
}
