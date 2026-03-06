// 函数名称: sub_4e71c0
// 虚拟地址: 0x4e71c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4e71c0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 0x12)
    if (arg1[1] == 0x12)
        return sub_466320(arg1)
    
    sub_4c5870("assetPtr->assetType == ASSET_TYPE_FONT", &data_83f3d3, "AssetUtils.cpp", 0x2e0, 
        "FontGetDef")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
