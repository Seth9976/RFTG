// 函数名称: sub_5362c0
// 虚拟地址: 0x5362c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5362c0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        *(arg1 + 0x2d8) = arg2
        return 0
    
    if (arg3 == 1)
        *(arg1 + 0x2d8) += arg2
        return 0
    
    if (arg3 == 2)
        *(arg1 + 0x2d8) = *(sub_5360a0(arg1) + 0x14) + arg2
        return 0
    
    sub_4c5870("Halt", &data_83f3d3, "SoundOgg.cpp", 0x11f, "SoundOggSeekFunc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
