// 函数名称: sub_5d4600
// 虚拟地址: 0x5d4600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d4600(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1[1]
    int32_t* eax = arg1[1]
    int32_t ebx = *arg1
    void* edi = arg1[2]
    int32_t var_14 = *(edi + 0x318)
    *arg1[2] = GetCurrentThreadId()
    sub_5dad70(arg1[3])
    *(edi + 8) = ebx(eax)
    return sub_5d4360() __tailcall
}
