// 函数名称: sub_4704c0
// 虚拟地址: 0x4704c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4704c0(int32_t* arg1 @ edi, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    void* eax = sub_46b2b0(esi)
    *(eax + 0x1c) = 0xe
    *(eax + 0x1f3c) = 0
    *(eax + 0x1a08) = *arg1
    *(eax + 0x558) = 1
    *(eax + 0x554) = 1
    *(eax + 0x55c) = arg3
    return sub_46aca0(eax + 0xaa4, arg3, arg2, *arg1)
}
