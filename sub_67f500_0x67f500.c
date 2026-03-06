// 函数名称: sub_67f500
// 虚拟地址: 0x67f500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void (**sub_67f500(void* arg1))(void* arg1)
{
    // 第一条实际指令: void (** result)(void* arg1) = (**(arg1 + 4))(arg1, 1, 0xe8)
    void (** result)(void* arg1) = (**(arg1 + 4))(arg1, 1, 0xe8)
    *(arg1 + 0x1bc) = result
    *result = sub_67f3c0
    result[1] = sub_67efb0
    __builtin_memset(&result[0xa], 0, 0x20)
    return result
}
