// 函数名称: sub_4e5930
// 虚拟地址: 0x4e5930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4e5930(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* eax = data_27e7fe4
    *(eax + 0x244) = 0
    *(eax + 0xe8) = 2
    *(eax + 0xf8) = arg2
    *(eax + 0xfc) = arg1
    *(eax + 0x100) = 1
    return sub_4e57f0(arg2, arg1, 1)
}
