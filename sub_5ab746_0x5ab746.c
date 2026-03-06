// 函数名称: sub_5ab746
// 虚拟地址: 0x5ab746
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5ab746(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: *arg1 = arg2
    *arg1 = arg2
    arg1[1] = __getptd()[0x26]
    __getptd()[0x26] = arg1
    return arg1
}
