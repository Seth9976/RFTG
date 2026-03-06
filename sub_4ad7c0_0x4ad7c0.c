// 函数名称: sub_4ad7c0
// 虚拟地址: 0x4ad7c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4ad7c0(int32_t* arg1)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    arg1[entry_ebx * 0x2d + 0x2f].w = 0
    arg1[entry_ebx * 0x2d + 0x2e].w = 0
    *(arg1 + 0x1ec1) = entry_ebx.b
    int32_t i
    
    do
        i = sub_4acd10(arg1, entry_ebx)
    while (i != 0)
    
    return i
}
