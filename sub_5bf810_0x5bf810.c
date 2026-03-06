// 函数名称: sub_5bf810
// 虚拟地址: 0x5bf810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5bf810(int32_t* arg1)
{
    // 第一条实际指令: arg1[2].w = 0x14
    arg1[2].w = 0x14
    *arg1 = 0
    arg1[1] = 0x3140000
    *(arg1 + 0xa) = 0
    arg1[3] = 0xffffffff
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0
    __builtin_memset(&arg1[8], 0, 0x22)
    arg1[0x11] = 0x81b60000
    arg1[0x12] = 0
    arg1[0x13] = 0
    return arg1
}
