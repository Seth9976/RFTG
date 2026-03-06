// 函数名称: __unwind_handler
// 虚拟地址: 0x5b6340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__unwind_handler(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: if ((*(arg1 + 4) & 6) == 0)
    if ((*(arg1 + 4) & 6) == 0)
        return 1
    
    sub_5a6aba(*(arg4 - 4) ^ arg4)
    *(arg4 + 0x10)
    __local_unwind2(*(arg4 + 0x24), *(arg4 + 0x28))
    *arg3 = arg2
    return 3
}
