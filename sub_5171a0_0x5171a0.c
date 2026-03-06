// 函数名称: sub_5171a0
// 虚拟地址: 0x5171a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5171a0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 0xa)
    if (arg1[1] == 0xa)
        return sub_466320(arg1)
    
    sub_4c5870("assetPtr->assetType == ASSET_TYPE_ANIMATION", &data_83f3d3, "Animation.cpp", 0x488, 
        "AnimationGetDef")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
