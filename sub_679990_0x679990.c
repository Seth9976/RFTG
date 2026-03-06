// 函数名称: sub_679990
// 虚拟地址: 0x679990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_679990(int32_t* arg1 @ esi)
{
    // 第一条实际指令: *(*arg1 + 0x14) = 0x66
    *(*arg1 + 0x14) = 0x66
    (*(*arg1 + 4))(arg1, 1)
    
    if (*(arg1[0x6e] + 0xc) != 0)
        *(*arg1 + 0x14) = 0x3d
        (**arg1)(arg1)
    
    void* eax_2 = &arg1[0x3d]
    int32_t i_1 = 0x10
    int32_t i
    
    do
        *(eax_2 - 0x10) = 0
        *eax_2 = 1
        *(eax_2 + 0x10) = 5
        eax_2 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
    void* eax_3 = arg1[0x6e]
    arg1[0x45] = 0
    arg1[0xa] = 0
    arg1[0x4b] = 0
    arg1[0x46] = 0
    *(arg1 + 0x11e) = 0
    arg1[0x49] = 0
    arg1[0x4a].b = 0
    arg1[0x47].w = 0x101
    arg1[0x48] = 0x10001
    *(eax_3 + 0xc) = 1
    return i_1 + 1
}
