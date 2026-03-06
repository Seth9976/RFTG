// 函数名称: sub_6aa4a0
// 虚拟地址: 0x6aa4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6aa4a0()
{
    // 第一条实际指令: int32_t ecx_1 = data_30785d0
    int32_t ecx_1 = data_30785d0
    
    if (ecx_1 s< 0x100)
        data_30785d0 = ecx_1 + 1
        *(ecx_1 * 0x1c + &data_26a4618) = 4
        *(ecx_1 * 0x1c + 0x26a461c) = sub_4d35a0
        *(ecx_1 * 0x1c + &data_26a4620) = sub_54c8e0
        *(ecx_1 * 0x1c + 0x26a4624) = sub_5566c0
        *(ecx_1 * 0x1c + 0x26a4628) = "Shader (*.vsh)|*.vsh|"
        return ecx_1 * 0x1c + &data_26a4618
    
    sub_4c5870("gAssetInfoTableItemCount < MAX_ASSET_TYPES", &data_83f3d3, "AssetTypeRegistry.cpp", 
        0x41, "AssetRegisterBeforeMain")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
