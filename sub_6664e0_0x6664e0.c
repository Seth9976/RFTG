// 函数名称: sub_6664e0
// 虚拟地址: 0x6664e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6664e0(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 0
    
    int32_t eax = *(arg1 + 0x264)
    int32_t result
    
    if (eax == 0)
        result = sub_5a881a(arg2)
    else
        result = eax(arg1, arg2)
    
    if (result != 0 || (*(arg1 + 0x70) & 0x100000) != 0)
        return result
    
    sub_664320(arg1, "Out of Memory")
    noreturn
}
