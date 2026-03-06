// 函数名称: sub_508990
// 虚拟地址: 0x508990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_508990(int32_t arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t edx = data_30785d0
    int32_t edx = data_30785d0
    int32_t eax = 0
    char const* const var_18
    int32_t var_c
    
    if (edx s<= 0)
    label_5089b0:
        char const* const var_8 = "AssetRegistrySetDefMap"
        var_c = 0x92
        char const* const var_10 = "AssetTypeRegistry.cpp"
        char* const var_14 = &data_83f3d3
        var_18 = "Halt"
    else
        void* ecx_1 = &data_26a4618
        
        while (true)
            if (*ecx_1 == arg1)
                if (*(ecx_1 + 0x18) == 0)
                    *(ecx_1 + 0x18) = arg2
                    return arg2
                
                char const* const var_8_1 = "AssetRegistrySetDefMap"
                var_c = 0x8c
                char const* const var_10_1 = "AssetTypeRegistry.cpp"
                char* const var_14_1 = &data_83f3d3
                var_18 = "pAssetTableItem->pDefMap == NULL"
                break
            
            eax += 1
            ecx_1 += 0x1c
            
            if (eax s>= edx)
                goto label_5089b0
    
    sub_4c5870(var_18, &data_83f3d3, "AssetTypeRegistry.cpp", var_c, "AssetRegistrySetDefMap")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
