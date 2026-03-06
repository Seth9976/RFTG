// 函数名称: sub_4ab880
// 虚拟地址: 0x4ab880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4ab880(int32_t* arg1)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    void* i = &arg1[entry_ebx * 0x2d + 8]
    *(arg1 + 0x1ec1) = entry_ebx.b
    *(i + 0x98) = 0
    *(i + 0x9c) = 0
    int32_t edx_1 = *(i + 0xc) & 0x7f
    
    if (edx_1.b != 7)
        i = *(i + 0x10) & 0x7f
    
    if (edx_1.b != 7 && i.b != 7)
    label_4ab8dd:
        
        do
            i, edx_1 = sub_4ab170(i, edx_1, arg1, entry_ebx)
        while (i != 0)
    else
        i, edx_1 = sub_4a8940(i, edx_1, entry_ebx, arg1, 0, 1)
        
        if (*(arg1 + 0x1ec3) == 0)
            goto label_4ab8dd
    
    return i
}
