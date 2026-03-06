// 函数名称: sub_681800
// 虚拟地址: 0x681800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_681800(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t result = (*(*(arg1 + 0x1c4) + 0xc))(arg1, arg2, *arg3, arg4 + (*arg5 << 2))
    int32_t result = (*(*(arg1 + 0x1c4) + 0xc))(arg1, arg2, *arg3, arg4 + (*arg5 << 2))
    *arg5 += 1
    *arg3 += 1
    return result
}
