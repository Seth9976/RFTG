// 函数名称: sub_40afb0
// 虚拟地址: 0x40afb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_40afb0(int32_t arg1 @ esi)
{
    // 第一条实际指令: if (arg1 s> 0)
    if (arg1 s> 0)
        return modu.dp.d(0:(sub_4c95c0()), arg1)
    
    sub_4c5870("maxPlusOne > 0", &data_83f3d3, "Random.cpp", 0x4f, "RandomInt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
