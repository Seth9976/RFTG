// 函数名称: sub_67bc00
// 虚拟地址: 0x67bc00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67bc00(int32_t* arg1)
{
    // 第一条实际指令: int32_t (** eax)(int32_t* arg1) = arg1[0x6d]
    int32_t (** eax)(int32_t* arg1) = arg1[0x6d]
    *eax = sub_67bb30
    eax[4] = 0
    eax[5] = 0
    eax[6] = 1
    (*(*arg1 + 0x10))(arg1)
    int32_t result = (*arg1[0x6e])(arg1)
    arg1[0x28] = 0
    return result
}
