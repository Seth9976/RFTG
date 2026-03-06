// 函数名称: sub_68b5f0
// 虚拟地址: 0x68b5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68b5f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_1 = *(arg1 + 0x1c)
    void* eax_1 = *(arg1 + 0x1c)
    
    if (*eax_1 s<= 0x40 && arg2 != 0)
        return 0xffffffff
    
    int32_t edx
    edx.b = arg2 != 0
    *(eax_1 + 0xe48) = edx
    return 0
}
