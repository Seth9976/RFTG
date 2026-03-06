// 函数名称: sub_41cc40
// 虚拟地址: 0x41cc40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41cc40(int32_t* arg1)
{
    // 第一条实际指令: void* eax_1 = data_27e7a40
    void* eax_1 = data_27e7a40
    void* edx = *(eax_1 + 0x548)
    void* eax_2 = *(eax_1 + 0x74)
    int32_t var_8 = *arg1 + 1
    int32_t var_10 = 2
    sub_472e60(eax_2, edx, &var_10, edx)
    *(sub_46b2b0(*(data_27e7a40 + 0x74)) + 0x1c) = 0
    return 1
}
