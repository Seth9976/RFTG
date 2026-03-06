// 函数名称: sub_46cb90
// 虚拟地址: 0x46cb90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46cb90(int32_t* arg1, int32_t arg2 @ esi, void* arg3)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        int32_t var_c = 1
        sub_469e10(arg3, arg2, 4, 0, &arg1[0x1f], 1, 0, 0)
        sub_469ff0(arg2)
        return 0
    
    sub_4c5870("gfx.type == RFTGGFX_CARD", &data_83f3d3, "..\code\RFTGShared.cpp", 0x5f8, 
        "RFTGHandleDiscardForPrestige")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
