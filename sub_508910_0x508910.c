// 函数名称: sub_508910
// 虚拟地址: 0x508910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_508910(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx = data_30785d0
    int32_t ecx = data_30785d0
    
    if (ecx s< 0x100)
        data_30785d0 = ecx + 1
        *(ecx * 0x1c + &data_26a4618) = arg1
        *(ecx * 0x1c + 0x26a461c) = arg2
        *(ecx * 0x1c + &data_26a4620) = arg3
        *(ecx * 0x1c + 0x26a4624) = arg4
        *(ecx * 0x1c + 0x26a4628) = arg5
        return ecx * 0x1c + &data_26a4618
    
    sub_4c5870("gAssetInfoTableItemCount < MAX_ASSET_TYPES", &data_83f3d3, "AssetTypeRegistry.cpp", 
        0x41, "AssetRegisterBeforeMain")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
