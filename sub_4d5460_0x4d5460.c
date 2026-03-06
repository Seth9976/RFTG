// 函数名称: sub_4d5460
// 虚拟地址: 0x4d5460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4d5460(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 2)
    if (arg1[1] == 2)
        return sub_466320(arg1)
    
    sub_4c5870("assetPtr->assetType == ASSET_TYPE_STRUCTURE", &data_83f3d3, "Structure.cpp", 0x550, 
        "StructureGetDef")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
