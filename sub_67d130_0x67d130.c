// 函数名称: sub_67d130
// 虚拟地址: 0x67d130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67d130(int32_t* arg1)
{
    // 第一条实际指令: void* (** eax_1)(int32_t* arg1) = (*arg1[1])(arg1, 1, 0x1c)
    void* (** eax_1)(int32_t* arg1) = (*arg1[1])(arg1, 1, 0x1c)
    arg1[0x69] = eax_1
    *eax_1 = sub_67cfa0
    eax_1[1] = sub_67d100
    eax_1[2] = 0
    return sub_67cdc0(arg1) __tailcall
}
