// 函数名称: sub_5a87eb
// 虚拟地址: 0x5a87eb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a87eb(int32_t arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 s>= 0x14)
    if (arg1 s>= 0x14)
        return LeaveCriticalSection(arg2 + 0x20)
    
    *(arg2 + 0xc) &= 0xffff7fff
    return __unlock(arg1 + 0x10)
}
