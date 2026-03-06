// 函数名称: sub_48bb40
// 虚拟地址: 0x48bb40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_48bb40(int128_t* arg1, int128_t* arg2 @ esi, char arg3)
{
    // 第一条实际指令: int128_t* i_1 = sub_5ab990(arg2, arg1, 0x1ec8)
    int128_t* i_1 = sub_5ab990(arg2, arg1, 0x1ec8)
    int32_t i = 0
    
    if (*(arg2 + 0x458) s> 0)
        i_1 = arg2 + 0xc8
        
        do
            *i_1 = *(i_1 - 4)
            i += 1
            i_1 += 0xb4
        while (i s< sx.d(*(arg2 + 0x458)))
    
    if (*(arg2 + 0x18) == 0)
        i.b = arg3
        i_1 = nullptr
        *(arg2 + 0x18) = 1
        *(arg2 + 0xc) = 1
        *(arg2 + 0x19) = i.b
        
        if (*(arg2 + 0x458) s> 0)
            void* ecx = arg2 + 0x28
            
            do
                *ecx = &data_8c6abc
                i_1 += 1
                ecx += 0xb4
            while (i_1 s< sx.d(*(arg2 + 0x458)))
    
    return i_1
}
